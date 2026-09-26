// XNet / Winsock over host UDP sockets, enough for system link on one machine,
// or over the online service (online/service.h) when one is built in. Every
// call answers definitively rather than leave the title polling --
// single-player spins on XNetGetTitleXnAddr until the address stops being
// "pending".
//
// With a service, a player is the service's peer id. The console's XNADDR is
// opaque to the title, so the id travels inside it, and the title's sockets
// reach a peer through a stand-in address in 10.0.0.0/8 that XNetXnAddrToInAddr
// hands out, as the console's secure network layer hands out addresses of its
// own. The title's sockets are then the service's: nothing is bound on the
// host, so any number of copies can run on one machine. Datagrams to a stand-in
// address or to the broadcast address go to the service, and ones to this
// machine's own address come straight back.
#include <ppc_recomp_shared.h>
#include "kernel.h"
#include "objects.h"
#include "../guest.h"
#include "../log.h"
#include "../env.h"
#include "../diagnostics.h"
#include "../online/service.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <array>
#include <deque>
#include <map>
#include <mutex>
#include <random>
#include <vector>

#ifdef _WIN32
#  include <winsock2.h>
#  include <ws2tcpip.h>
   using socket_t = SOCKET;
#  define MW2_CLOSESOCKET closesocket
#else
#  include <sys/socket.h>
#  include <netinet/in.h>
#  include <arpa/inet.h>
#  include <unistd.h>
#  include <fcntl.h>
#  include <errno.h>
   using socket_t = int;
#  define INVALID_SOCKET (-1)
#  define MW2_CLOSESOCKET ::close
#endif

namespace
{
    // The title tests these as a bitfield.
    constexpr uint32_t XNET_GET_XNADDR_PENDING  = 0x00000000;
    constexpr uint32_t XNET_GET_XNADDR_STATIC   = 0x00000004;
    constexpr uint32_t XNET_GET_XNADDR_ETHERNET = 0x00000002;
    constexpr uint32_t XNET_GET_XNADDR_GATEWAY  = 0x00000020;
    constexpr uint32_t XNET_GET_XNADDR_DNS      = 0x00000040;
    constexpr uint32_t XNET_GET_XNADDR_ONLINE   = 0x00000080;

    constexpr uint32_t X_WSAENETDOWN = 10050;

    // The title's default net_port is 1000, and ports below 1024 need privileges
    // this process lacks. Everything it sends stays on the loopback, so shifting
    // the whole privileged range keeps it self-consistent.
    constexpr uint16_t kPrivilegedPortBase = 1024;
    constexpr uint16_t kPortShift = 30000;

    uint16_t ShiftPort(uint16_t networkOrderPort)
    {
        uint16_t host = ntohs(networkOrderPort);
        if (host == 0 || host >= kPrivilegedPortBase) return networkOrderPort;
        return htons(uint16_t(host + kPortShift));
    }

    uint16_t UnshiftPort(uint16_t networkOrderPort)
    {
        uint16_t host = ntohs(networkOrderPort);
        if (host < kPortShift || host >= kPortShift + kPrivilegedPortBase) return networkOrderPort;
        return htons(uint16_t(host - kPortShift));
    }

    // The title only ever hands back what it was given, so a small table keyed by
    // a synthetic descriptor is enough.
    struct Socket
    {
        socket_t host = socket_t(INVALID_SOCKET);
        uint16_t port = 0;   // the title's, as it bound it; 0 until then
    };
    std::mutex g_socketLock;
    std::map<uint32_t, Socket> g_sockets;
    uint32_t g_nextSocket = 1;
    thread_local uint32_t t_lastError = 0;   // WSAGetLastError is per thread

    Socket FindSocket(uint32_t guestSocket)
    {
        std::lock_guard g(g_socketLock);
        auto it = g_sockets.find(guestSocket);
        return it == g_sockets.end() ? Socket{} : it->second;
    }

    socket_t HostSocket(uint32_t guestSocket) { return FindSocket(guestSocket).host; }

    // The guest is big-endian, so its sin_port and sin_addr already hold network
    // byte order -- copy those through untouched and translate only the address
    // family, which is a plain big-endian word.
    bool ReadSockAddr(uint32_t address, sockaddr_in& out)
    {
        auto* p = GuestPtr<uint8_t>(address);
        if (!p) return false;
        std::memset(&out, 0, sizeof out);
        out.sin_family = AF_INET;
        std::memcpy(&out.sin_port, p + 2, 2);
        out.sin_port = ShiftPort(out.sin_port);
        std::memcpy(&out.sin_addr, p + 4, 4);
        return true;
    }

    void WriteSockAddr(uint32_t address, const sockaddr_in& in)
    {
        auto* p = GuestPtr<uint8_t>(address);
        if (!p) return;
        *reinterpret_cast<be16*>(p) = AF_INET;
        uint16_t port = UnshiftPort(in.sin_port);
        std::memcpy(p + 2, &port, 2);
        std::memcpy(p + 4, &in.sin_addr, 4);
        std::memset(p + 8, 0, 8);
    }

    uint32_t LastHostError()
    {
#ifdef _WIN32
        return uint32_t(WSAGetLastError());
#else
        switch (errno)
        {
        case EWOULDBLOCK:  return 10035;   // WSAEWOULDBLOCK
        case EACCES:       return 10013;   // WSAEACCES
        case EADDRINUSE:   return 10048;   // WSAEADDRINUSE
        case EADDRNOTAVAIL:return 10049;   // WSAEADDRNOTAVAIL
        case ECONNREFUSED: return 10061;   // WSAECONNREFUSED
        case EBADF:
        case ENOTSOCK:     return 10038;   // WSAENOTSOCK
        case EINVAL:       return 10022;   // WSAEINVAL
        default:           return 10004;   // WSAEINTR
        }
#endif
    }


    struct XNADDR
    {
        be32 inaOnline;      // 0
        be32 ina;            // 4
        be16 wPortOnline;    // 8
        uint8_t abEnet[6];   // 10
        uint8_t abOnline[20];// 16
    };
    static_assert(sizeof(XNADDR) == 36, "XNADDR is 36 bytes on the console");

    constexpr uint32_t kLoopback = 0x7F000001;
    constexpr uint32_t kBroadcast = 0xFFFFFFFF;

    // A peer's id, in the part of the XNADDR the console fills in from Xbox
    // Live, behind a tag so an address that did not come from here is refused.
    constexpr uint8_t kPeerTag[4] = { 'M', 'W', '2', 'O' };

    void WritePeer(XNADDR& addr, uint64_t id)
    {
        std::memcpy(addr.abOnline, kPeerTag, 4);
        for (int i = 0; i < 8; i++) addr.abOnline[4 + i] = uint8_t(id >> (56 - 8 * i));
        // The title tells machines apart by their Ethernet address too.
        for (int i = 0; i < 6; i++) addr.abEnet[i] = uint8_t(id >> (40 - 8 * i));
        addr.abEnet[0] = (addr.abEnet[0] & 0xFE) | 0x02;   // locally administered, unicast
    }

    bool ReadPeer(const XNADDR& addr, uint64_t& id)
    {
        if (std::memcmp(addr.abOnline, kPeerTag, 4) != 0) return false;
        id = 0;
        for (int i = 0; i < 8; i++) id = (id << 8) | addr.abOnline[4 + i];
        return true;
    }

    // Every peer the title has been given an address for, both ways, and the
    // session key it named with it.
    struct Peers
    {
        std::mutex lock;
        std::map<uint64_t, uint32_t> address;
        std::map<uint32_t, uint64_t> peer;
        std::map<uint32_t, std::array<uint8_t, 8>> sessionId;
        uint32_t next = 1;
    };
    Peers g_peers;
    std::array<uint8_t, 8> g_sessionId{};   // the session this machine is in

    uint32_t StandIn(uint64_t id)
    {
        std::lock_guard g(g_peers.lock);
        auto it = g_peers.address.find(id);
        if (it != g_peers.address.end()) return it->second;
        const uint32_t address = 0x0A000000 | (g_peers.next++ & 0x00FFFFFF);
        g_peers.address[id] = address;
        g_peers.peer[address] = id;
        return address;
    }

    // MW2_TRACE_ONLINE: every datagram through the service, with the start of
    // its text -- the title's out-of-band packets begin FF FF FF FF and a word.
    void Trace(const char* what, uint64_t peer, uint16_t from, uint16_t to,
               const void* bytes, size_t size)
    {
        static const bool traced = diag::Flag("MW2_TRACE_ONLINE");
        if (!traced) return;
        char text[401];
        size_t n = 0;
        for (size_t i = 0; i < size && n + 1 < sizeof text; i++)
        {
            const uint8_t c = static_cast<const uint8_t*>(bytes)[i];
            text[n++] = (c >= 32 && c < 127) ? char(c) : '.';
        }
        text[n] = 0;
        LOGI("online: %s %012llx %u->%u %zu bytes '%s'", what, (unsigned long long)peer, from, to,
             size, text);
    }

    // What the title sends to itself while a service carries its sockets.
    struct ToSelf
    {
        std::mutex lock;
        std::map<uint16_t, std::deque<online::Datagram>> waiting;
    };
    ToSelf g_toSelf;
    constexpr size_t kSelfQueued = 512;

    bool PeerAt(uint32_t address, uint64_t& id)
    {
        std::lock_guard g(g_peers.lock);
        auto it = g_peers.peer.find(address);
        if (it == g_peers.peer.end()) return false;
        id = it->second;
        return true;
    }
}

void kernel::NoteSessionId(const void* id8)
{
    std::lock_guard g(g_peers.lock);
    std::memcpy(g_sessionId.data(), id8, 8);
}

// A resolved local address with no online component. Returning "pending"
// instead makes the title poll for one for ever.
void kernel::TitleXnAddr(void* out36)
{
    auto* addr = static_cast<XNADDR*>(out36);
    std::memset(addr, 0, sizeof(XNADDR));
    addr->ina = kLoopback;
    addr->inaOnline = 0;
    addr->abEnet[0] = 0x00; addr->abEnet[1] = 0x22; addr->abEnet[2] = 0x48;
    addr->abEnet[3] = 0x01; addr->abEnet[4] = 0x02; addr->abEnet[5] = 0x03;
    if (auto* service = online::Get()) WritePeer(*addr, service->LocalId());
}

// Signed in to Live, the address says so: the title's party refuses to add a
// player -- itself included -- whose address has no online part.
PPC_FUNC(__imp__NetDll_XNetGetTitleXnAddr)
{
    // NetDll entry points take the interface as r3.
    if (auto* addr = GuestPtr<XNADDR>(ctx.r4.u32)) kernel::TitleXnAddr(addr);
    ctx.r3.u64 = XNET_GET_XNADDR_STATIC | XNET_GET_XNADDR_ETHERNET |
                 (online::Live() ? XNET_GET_XNADDR_GATEWAY | XNET_GET_XNADDR_DNS | XNET_GET_XNADDR_ONLINE : 0);
}

PPC_FUNC(__imp__XNetLogonGetTitleID) { ctx.r3.u64 = 0x41560817; }

PPC_FUNC(__imp__NetDll_XNetStartup)  { ctx.r3.u64 = 0; }
PPC_FUNC(__imp__NetDll_WSACleanup)   { ctx.r3.u64 = 0; }
PPC_FUNC(__imp__NetDll_WSAGetLastError) { ctx.r3.u64 = t_lastError; }

// The title reads the version words straight back out, so leaving the block
// untouched makes it report the nonsense it found there and restart itself.
PPC_FUNC(__imp__NetDll_WSAStartup)
{
    uint16_t requested = uint16_t(ctx.r4.u32);
    if (auto* data = GuestPtr<uint8_t>(ctx.r5.u32))
    {
        std::memset(data, 0, 400);
        *reinterpret_cast<be16*>(data + 0) = requested ? requested : 0x0202;   // wVersion
        *reinterpret_cast<be16*>(data + 2) = 0x0202;                           // wHighVersion
        std::snprintf(reinterpret_cast<char*>(data) + 4, 256, "mw2recomp sockets");
        std::snprintf(reinterpret_cast<char*>(data) + 261, 128, "Running");
        *reinterpret_cast<be16*>(data + 390) = 64;      // iMaxSockets
        *reinterpret_cast<be16*>(data + 392) = 1264;    // iMaxUdpDg
    }
    ctx.r3.u64 = 0;
}

// 0 means "no link", which the campaign handles: it never needs one. The
// multiplayer refuses to start any match without one -- "You must have an
// active network connection to play online or systemlink matches" -- and a
// system-link match is the only way it has of reaching a map, so that build
// reports a 100 Mb/s full-duplex link. MW2_NET_LINK=0|1 overrides either.
namespace
{
    bool EthernetLinkUp()
    {
        static const bool up = [] {
#ifdef MW2_TITLE_MP
            bool value = true;
#else
            bool value = false;
#endif
            if (env::Text("MW2_NET_LINK")) value = env::Flag("MW2_NET_LINK");
            return value;
        }();
        return up;
    }
    constexpr uint32_t XNET_ETHERNET_LINK_ACTIVE = 1, XNET_ETHERNET_LINK_100MBPS = 2,
                       XNET_ETHERNET_LINK_FULL_DUPLEX = 8;
}
PPC_FUNC(__imp__NetDll_XNetGetEthernetLinkStatus)
{
    ctx.r3.u64 = EthernetLinkUp()
        ? (XNET_ETHERNET_LINK_ACTIVE | XNET_ETHERNET_LINK_100MBPS | XNET_ETHERNET_LINK_FULL_DUPLEX) : 0;
}

PPC_FUNC(__imp__NetDll_XNetRandom)
{
    uint32_t length = ctx.r5.u32;
    if (auto* p = GuestPtr<uint8_t>(ctx.r4.u32))
    {
        thread_local std::mt19937 rng{ std::random_device{}() };
        for (uint32_t i = 0; i < length; i++) p[i] = uint8_t(rng());
    }
    ctx.r3.u64 = 0;
}

// (xnet, XNADDR*, XNKID*, IN_ADDR* out). How the title reaches a host it
// found: the address names the peer, and this machine's own is the loopback,
// which the host's sockets carry.
PPC_FUNC(__imp__NetDll_XNetXnAddrToInAddr)
{
    auto* service = online::Get();
    const auto* addr = GuestPtr<XNADDR>(ctx.r4.u32);
    auto* out = GuestPtr<be32>(ctx.r6.u32);
    uint64_t id;
    if (!service || !addr || !out || !ReadPeer(*addr, id)) { ctx.r3.u64 = X_WSAENETDOWN; return; }
    const uint32_t address = id == service->LocalId() ? kLoopback : StandIn(id);
    if (const auto* kid = GuestPtr<uint8_t>(ctx.r5.u32))
    {
        std::lock_guard g(g_peers.lock);
        std::memcpy(g_peers.sessionId[address].data(), kid, 8);
    }
    *out = address;
    ctx.r3.u64 = 0;
}

// (xnet, IN_ADDR, XNADDR* out, XNKID* out). Who a datagram came from.
PPC_FUNC(__imp__NetDll_XNetInAddrToXnAddr)
{
    auto* service = online::Get();
    const uint32_t address = ctx.r4.u32;
    auto* addr = GuestPtr<XNADDR>(ctx.r5.u32);
    uint64_t id = 0;
    const bool self = address == kLoopback;
    if (!service || !addr || !(self || PeerAt(address, id))) { ctx.r3.u64 = X_WSAENETDOWN; return; }
    kernel::TitleXnAddr(addr);
    if (!self)
    {
        WritePeer(*addr, id);
        addr->ina = address;
    }
    if (auto* kid = GuestPtr<uint8_t>(ctx.r6.u32))
    {
        std::lock_guard g(g_peers.lock);
        auto it = g_peers.sessionId.find(address);
        std::memcpy(kid, it != g_peers.sessionId.end() ? it->second.data() : g_sessionId.data(), 8);
    }
    ctx.r3.u64 = 0;
}

// The service is already a connection to everyone it can name.
PPC_FUNC(__imp__NetDll_XNetConnect)
{
    ctx.r3.u64 = online::Get() ? 0 : X_WSAENETDOWN;
}
PPC_FUNC(__imp__NetDll_XNetGetConnectStatus)  { ctx.r3.u64 = 2; }   // XNET_CONNECT_STATUS_CONNECTED
PPC_FUNC(__imp__NetDll_XNetUnregisterInAddr)  { ctx.r3.u64 = 0; }

// Xbox Live's own servers, which nothing here stands in for.
PPC_FUNC(__imp__NetDll_XNetServerToInAddr)    { ctx.r3.u64 = X_WSAENETDOWN; }
PPC_FUNC(__imp__NetDll_XNetXnAddrToMachineId) { ctx.r3.u64 = X_WSAENETDOWN; }

// (xnet, flags, event, XNQOS** out). Signed in to Live, the title measures its
// line to Live's own service once it is told the connection is up; there is no
// such service, and nothing here stands between the players, so the answer is
// one probe, complete, with a short round trip and a wide line.
//
// XNQOS { cxnqos, cxnqosPending, XNQOSINFO[1] }; XNQOSINFO { bFlags, bReserved,
// cProbesXmit, cProbesRecv, cbData, pbData, wRttMin, wRttMed, dwUpBps, dwDnBps }.
PPC_FUNC(__imp__NetDll_XNetQosServiceLookup)
{
    auto* out = GuestPtr<be32>(ctx.r6.u32);
    if (!online::Live() || !out) { ctx.r3.u64 = X_WSAENETDOWN; return; }
    constexpr uint32_t kSize = 8 + 24;
    const uint32_t qos = kernel::AllocateGuest(kSize, 16);
    if (!qos) { ctx.r3.u64 = X_WSAENETDOWN; return; }
    auto* p = GuestPtr<uint8_t>(qos);
    std::memset(p, 0, kSize);
    *reinterpret_cast<be32*>(p + 0) = 1;                 // cxnqos
    uint8_t* info = p + 8;
    info[0] = 0x01 | 0x02 | 0x10;                        // COMPLETE | TARGETCONTACTED | PARTIALCOMPLETE
    *reinterpret_cast<be16*>(info + 2) = 1;              // probes sent
    *reinterpret_cast<be16*>(info + 4) = 1;              // and answered
    *reinterpret_cast<be16*>(info + 12) = 10;            // ms
    *reinterpret_cast<be16*>(info + 14) = 10;
    *reinterpret_cast<be32*>(info + 16) = 100000000;     // bits a second, up
    *reinterpret_cast<be32*>(info + 20) = 100000000;     // and down
    *out = qos;
    if (const uint32_t event = ctx.r5.u32)
        if (auto signal = kernel::LookupHandleAs<kernel::Event>(event)) signal->Set();
    ctx.r3.u64 = 0;
}

// (xnet, XNQOS*): what a lookup handed out.
PPC_FUNC(__imp__NetDll_XNetQosRelease)
{
    if (ctx.r4.u32) kernel::FreeGuest(ctx.r4.u32);
    ctx.r3.u64 = 0;
}
// A host offering its session's details to machines that probe it before
// joining. Nothing probes: invitations and the party's own join do not.
PPC_FUNC(__imp__NetDll_XNetQosListen)         { ctx.r3.u64 = 0; }

// Even offline single-player binds a local UDP port and talks to itself over
// it, and refuses to start if that fails.
PPC_FUNC(__imp__NetDll_socket)
{
    socket_t s = ::socket(AF_INET, ctx.r5.u32 == 1 ? SOCK_STREAM : SOCK_DGRAM, 0);
    if (s == socket_t(INVALID_SOCKET)) { t_lastError = LastHostError(); ctx.r3.u64 = uint32_t(-1); return; }

    std::lock_guard g(g_socketLock);
    uint32_t handle = g_nextSocket++;
    g_sockets[handle] = Socket{ s };
    ctx.r3.u64 = handle;
}

PPC_FUNC(__imp__NetDll_closesocket)
{
    std::lock_guard g(g_socketLock);
    auto it = g_sockets.find(ctx.r4.u32);
    if (it != g_sockets.end()) { MW2_CLOSESOCKET(it->second.host); g_sockets.erase(it); }
    ctx.r3.u64 = 0;
}

PPC_FUNC(__imp__NetDll_bind)
{
    socket_t s = HostSocket(ctx.r4.u32);
    sockaddr_in addr{};
    if (s == socket_t(INVALID_SOCKET) || !ReadSockAddr(ctx.r5.u32, addr))
    { t_lastError = 10022; ctx.r3.u64 = uint32_t(-1); return; }

    if (!online::Get() && ::bind(s, reinterpret_cast<sockaddr*>(&addr), sizeof addr) != 0)
    { t_lastError = LastHostError(); ctx.r3.u64 = uint32_t(-1); return; }
    {
        std::lock_guard g(g_socketLock);
        g_sockets[ctx.r4.u32].port = ntohs(UnshiftPort(addr.sin_port));
    }
    ctx.r3.u64 = 0;
}

PPC_FUNC(__imp__NetDll_connect)
{
    socket_t s = HostSocket(ctx.r4.u32);
    sockaddr_in addr{};
    if (s == socket_t(INVALID_SOCKET) || !ReadSockAddr(ctx.r5.u32, addr))
    { t_lastError = 10022; ctx.r3.u64 = uint32_t(-1); return; }
    // Only the socket for Xbox Live's servers connects, and there are none.
    if (online::Get()) { t_lastError = 10061; ctx.r3.u64 = uint32_t(-1); return; }
    ctx.r3.u64 = ::connect(s, reinterpret_cast<sockaddr*>(&addr), sizeof addr) == 0 ? 0 : uint32_t(-1);
    if (ctx.r3.u64) t_lastError = LastHostError();
}

PPC_FUNC(__imp__NetDll_ioctlsocket)
{
    // Only FIONBIO is used.
    socket_t s = HostSocket(ctx.r4.u32);
    if (s == socket_t(INVALID_SOCKET)) { t_lastError = 10038; ctx.r3.u64 = uint32_t(-1); return; }

    constexpr uint32_t kFionbio = 0x8004667E;
    if (ctx.r5.u32 == kFionbio)
    {
        uint32_t nonBlocking = 0;
        if (auto* p = GuestPtr<be32>(ctx.r6.u32)) nonBlocking = *p;
#ifdef _WIN32
        u_long value = nonBlocking;
        ioctlsocket(s, FIONBIO, &value);
#else
        int flags = fcntl(s, F_GETFL, 0);
        fcntl(s, F_SETFL, nonBlocking ? (flags | O_NONBLOCK) : (flags & ~O_NONBLOCK));
#endif
    }
    ctx.r3.u64 = 0;
}

PPC_FUNC(__imp__NetDll_setsockopt)
{
    // The title sets broadcast and buffer sizes; accepting them is enough.
    ctx.r3.u64 = 0;
}

// (socket, buffer, length, flags, to, toLength)
PPC_FUNC(__imp__NetDll_sendto)
{
    const Socket socket = FindSocket(ctx.r4.u32);
    socket_t s = socket.host;
    sockaddr_in addr{};
    if (s == socket_t(INVALID_SOCKET) || !ReadSockAddr(ctx.r8.u32, addr))
    { t_lastError = 10022; ctx.r3.u64 = uint32_t(-1); return; }

    auto* buffer = GuestPtr<const char>(ctx.r5.u32);
    if (auto* service = online::Get())
    {
        const uint32_t to = ntohl(addr.sin_addr.s_addr);
        const uint16_t port = ntohs(UnshiftPort(addr.sin_port));
        // Like UDP, a datagram that could not go is lost, not an error.
        uint64_t peer;
        if (to == kBroadcast)
        {
            service->Broadcast(socket.port, port, buffer, ctx.r6.u32);
            Trace("broadcast", 0, socket.port, port, buffer, ctx.r6.u32);
        }
        else if (PeerAt(to, peer))
        {
            service->Send(peer, socket.port, port, buffer, ctx.r6.u32);
            Trace("send", peer, socket.port, port, buffer, ctx.r6.u32);
        }
        else if (to == kLoopback)
        {
            online::Datagram datagram;
            datagram.fromPort = socket.port;
            datagram.toPort = port;
            datagram.bytes.assign(buffer, buffer + ctx.r6.u32);
            std::lock_guard g(g_toSelf.lock);
            auto& queue = g_toSelf.waiting[port];
            if (queue.size() < kSelfQueued) queue.push_back(std::move(datagram));
        }
        else
            Trace("dropped, no such peer", 0, socket.port, port, buffer, ctx.r6.u32);
        ctx.r3.u64 = ctx.r6.u32;
        return;
    }
    ssize_t sent = ::sendto(s, buffer, ctx.r6.u32, 0,
                            reinterpret_cast<sockaddr*>(&addr), sizeof addr);
    if (sent < 0) { t_lastError = LastHostError(); ctx.r3.u64 = uint32_t(-1); return; }
    ctx.r3.u64 = uint32_t(sent);
}

PPC_FUNC(__imp__NetDll_recvfrom)
{
    socket_t s = HostSocket(ctx.r4.u32);
    if (s == socket_t(INVALID_SOCKET)) { t_lastError = 10038; ctx.r3.u64 = uint32_t(-1); return; }

    if (auto* service = online::Get())
    {
        const uint16_t port = FindSocket(ctx.r4.u32).port;
        online::Datagram datagram;
        bool self = false;
        {
            std::lock_guard g(g_toSelf.lock);
            auto it = g_toSelf.waiting.find(port);
            if (it != g_toSelf.waiting.end() && !it->second.empty())
            {
                datagram = std::move(it->second.front());
                it->second.pop_front();
                self = true;
            }
        }
        if (!self && !(port && service->Receive(port, datagram)))
        {
            t_lastError = 10035;   // WSAEWOULDBLOCK: the title's sockets never block
            ctx.r3.u64 = uint32_t(-1);
            return;
        }
        if (!self)
            Trace("receive", datagram.from, datagram.fromPort, datagram.toPort,
                  datagram.bytes.data(), datagram.bytes.size());
        const uint32_t got = std::min<uint32_t>(uint32_t(datagram.bytes.size()), ctx.r6.u32);
        std::memcpy(GuestPtr<char>(ctx.r5.u32), datagram.bytes.data(), got);
        if (ctx.r8.u32)
        {
            sockaddr_in from{};
            from.sin_family = AF_INET;
            from.sin_addr.s_addr = htonl(self ? kLoopback : StandIn(datagram.from));
            from.sin_port = htons(datagram.fromPort);
            WriteSockAddr(ctx.r8.u32, from);
        }
        ctx.r3.u64 = got;
        return;
    }

    // Through a buffer of our own, as file reads are: the kernel fails a
    // receive into a page the GPU's shadow has made read-only.
    thread_local std::vector<char> bounce;
    if (bounce.size() < ctx.r6.u32) bounce.resize(ctx.r6.u32);
    sockaddr_in from{};
    socklen_t fromLength = sizeof from;
    ssize_t got = ::recvfrom(s, bounce.data(), ctx.r6.u32, 0,
                             reinterpret_cast<sockaddr*>(&from), &fromLength);
    if (got < 0) { t_lastError = LastHostError(); ctx.r3.u64 = uint32_t(-1); return; }
    std::memcpy(GuestPtr<char>(ctx.r5.u32), bounce.data(), size_t(got));
    if (ctx.r8.u32) WriteSockAddr(ctx.r8.u32, from);
    ctx.r3.u64 = uint32_t(got);
}

PPC_FUNC(__imp__NetDll_inet_addr)
{
    std::string text = GuestAnsi(ctx.r3.u32);
    in_addr addr{};
    if (text.empty() || inet_pton(AF_INET, text.c_str(), &addr) != 1)
    { ctx.r3.u64 = uint32_t(-1); return; }
    uint32_t network;
    std::memcpy(&network, &addr, 4);
    // The guest wants network byte order as a big-endian word, the same byte
    // sequence -- swap so the be32 store puts it back.
    ctx.r3.u64 = __builtin_bswap32(network);
}

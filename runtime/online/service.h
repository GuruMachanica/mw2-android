#pragma once
// The online service the title's network calls are served by: who the player
// is, and how datagrams reach other players.
//
// Nothing here is Xbox-shaped. The kernel side (kernel/net.cpp, kernel/xam.cpp)
// keeps everything the console's API is made of -- XNADDRs, session keys, the
// title's sockets and ports -- and asks this only for what a service does. A
// peer is a 64-bit id the backend chooses (an address, a SteamID, an account
// number); the kernel never looks inside it.
//
// The backend is chosen when the runtime is built (MW2_ONLINE in CMakeLists,
// ONLINE= for build.sh): one file under runtime/online/ defines Create(), and a
// new service is one more such file. "none" builds none, and the title keeps its
// offline system link on this machine.
#include <cstddef>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace online
{
    struct Datagram
    {
        uint64_t from = 0;
        uint16_t fromPort = 0, toPort = 0;   // the title's own port numbers
        std::vector<uint8_t> bytes;
    };

    // A session a friend can join, opaque to the service: the console's
    // XSESSION_INFO (session id, host address, key), 60 bytes.
    constexpr size_t kSessionInfoSize = 60;
    struct Joinable
    {
        uint8_t session[kSessionInfoSize]{};
    };

    struct Invite
    {
        uint64_t inviter = 0;   // the host's Account()
        uint8_t session[kSessionInfoSize]{};
        bool fromInvite = false;   // an invitation, not the player choosing to join
    };

    class Service
    {
    public:
        virtual ~Service() = default;

        // Logs in. False leaves the title offline, as if no backend were built.
        virtual bool Start() = 0;

        // Where other players reach this one: unique among everyone it can
        // reach, and stable for the run.
        virtual uint64_t LocalId() = 0;
        // Who the player is, the same every run: the title keeps the player's
        // multiplayer rank and settings under it.
        virtual uint64_t Account() = 0;
        // What other players see; the title shows the first 15 characters.
        virtual std::string LocalName() = 0;

        // Unreliable and unordered, like the UDP the title thinks it has. Ports
        // are the title's: a datagram sent to port 1000 is received on 1000.
        virtual bool Send(uint64_t peer, uint16_t fromPort, uint16_t toPort,
                          const void* bytes, size_t size) = 0;
        // To everyone who could join this player's games: the title finds
        // system-link games by broadcasting for them. Never to this player.
        virtual bool Broadcast(uint16_t fromPort, uint16_t toPort,
                               const void* bytes, size_t size) = 0;
        // The next datagram that arrived for `port`, without waiting.
        virtual bool Receive(uint16_t port, Datagram& out) = 0;

        // Optional: invitations. A service that can bring a friend to this
        // player's game is told how to join it -- the console line the title's
        // own server browser types, or "" when there is nothing to join -- and
        // hands such a line back when this player accepts an invitation.
        virtual void Advertise(const std::string& connect) { (void)connect; }
        virtual bool NextJoin(std::string& connect) { (void)connect; return false; }
        // The service's own way to pick friends to invite, if it has one.
        virtual void InviteFriends() {}

        // Optional: Xbox LIVE parties and private matches. A service that says
        // yes here has the player signed in to Live, which opens the title's
        // Xbox LIVE menu; one that says no leaves it refusing, as offline.
        virtual bool Lobbies() { return false; }
        // What a friend joins to be in this player's party or lobby: a session
        // the kernel describes in bytes the service only stores and hands back.
        // Null when there is nothing to join.
        virtual void SetJoinable(const Joinable* joinable) { (void)joinable; }
        // The next invitation this player accepted, or friend they chose to
        // join, without waiting. Polled once a frame on the title's main thread.
        virtual bool NextInvite(Invite& out) { (void)out; return false; }
    };

    // Defined once per backend; null for "none".
    std::unique_ptr<Service> Create();

    // The service, started on first use; null when there is none or it could
    // not start.
    Service* Get();

    // Once a frame on the title's main thread: types an accepted invitation's
    // console line, or hands an accepted Live invitation to the title.
    void Frame();

    // The service can carry Xbox LIVE lobbies.
    bool Live();
}

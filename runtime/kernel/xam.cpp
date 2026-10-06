// XAM -- the dashboard-facing surface. Without an online service that carries
// lobbies, nothing here talks to anything like Xbox Live; the aim is to answer
// definitively so the title takes its offline path instead of polling or
// erroring, and to host the multiplayer's system-link session. With one
// (online::Live()), the player is signed in to Live and XAM stands in for the
// parts of it a private match needs: sessions, invitations, and Live storage
// kept on this machine.
#include <ppc_recomp_shared.h>
#include "kernel.h"
#include "objects.h"
#include "../guest.h"
#include "../log.h"
#include "../signin.h"
#include "../online/service.h"

#include <algorithm>
#include <array>
#include <cstring>
#include <cstdio>
#include <deque>
#include <filesystem>
#include <fstream>
#include <map>
#include <mutex>
#include <random>
#include <set>
#include <string>
#include <vector>

using namespace kernel;
namespace fs = std::filesystem;

namespace
{
    constexpr uint32_t kLocalUser = 0;
    constexpr uint32_t kTitleId = 0x41560817;

    // XOVERLAPPED. Not Win32's: the console's has the event at +12, which is
    // where the title's own XGetOverlappedResult looks for it, and it reads the
    // result from +0, the length from +4 and the extended error from +24.
    struct XOverlapped
    {
        be32 result;              // 0, ERROR_IO_PENDING while the call is running
        be32 length;              // 4, what XGetOverlappedResult hands back
        be32 context;             // 8
        be32 event;               // 12, handle to signal on completion
        be32 completionRoutine;   // 16
        be32 completionContext;   // 20
        be32 extendedError;       // 24
    };

    constexpr uint32_t kSignedInLocally = 1, kSignedInToLive = 2;
    constexpr uint32_t kFunctionFailed = 1627;   // ERROR_FUNCTION_FAILED

    // The player the online service logged in, or the one offline player. An
    // offline XUID (top byte 0xE0) with the service's account in the low 48
    // bits, so every machine in a match has its own.
    uint64_t LocalXuid()
    {
        auto* service = online::Get();
        return 0xE000000000000000ull | (service ? service->Account() & 0xFFFFFFFFFFFFull : 1);
    }

    // The XUID Live knows an account by, the console's 0x0009 prefix over the
    // same 48 bits.
    uint64_t OnlineXuid(uint64_t account) { return 0x0009000000000000ull | (account & 0xFFFFFFFFFFFFull); }
    uint64_t LocalOnlineXuid() { return OnlineXuid(online::Get()->Account()); }

    std::string LocalName()
    {
        auto* service = online::Get();
        std::string name = service ? service->LocalName() : "Player";
        if (name.size() > 15) name.resize(15);   // a gamertag's longest
        return name;
    }

    // The first time the online service's player is seen on this machine, he
    // takes over the rank earned here with no service, when the one player
    // was account 1: the offline stats package under his own offline XUID,
    // and, signed in to Live, the stats Live keeps for him, which are the same
    // file without its four leading bytes and its last (docs/saves.md). What
    // he already has is left alone, and so is what is copied from.
    void InheritOfflineStats()
    {
        auto* service = online::Get();
        if (!service) return;
        auto hex = [](uint64_t xuid) {
            char text[20];
            std::snprintf(text, sizeof text, "%016llx", (unsigned long long)xuid);
            return std::string(text);
        };
        const fs::path& saves = SaveRoot();
        const std::string none = "mpdata_e000000000000001";
        std::ifstream in(saves / none / none, std::ios::binary);
        const std::vector<char> stats{ std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>() };
        constexpr size_t kLead = 4, kStored = 8192;
        if (stats.size() != kLead + kStored + 1) return;

        std::error_code ec;
        const std::string own = "mpdata_" + hex(LocalXuid());
        if (own != none && !fs::exists(saves / own, ec) && fs::create_directories(saves / own, ec))
        {
            std::ofstream(saves / own / own, std::ios::binary).write(stats.data(), std::streamsize(stats.size()));
            LOGI("xam: %s starts from the rank earned here offline", own.c_str());
        }
        if (!online::Live()) return;
        const fs::path live = saves / "online" / "user" / hex(LocalOnlineXuid());
        if (!fs::exists(live / "mpdata", ec) && (fs::create_directories(live, ec), fs::is_directory(live, ec)))
        {
            std::ofstream(live / "mpdata", std::ios::binary).write(stats.data() + kLead, std::streamsize(kStored));
            LOGI("xam: the Live stats of %s start from the rank earned here offline", hex(LocalOnlineXuid()).c_str());
        }
    }

    // Who is at a controller. The first is the player above, signed in to
    // Live when the online service carries lobbies. The others are whoever
    // the sign-in screen put there (signin.h): a profile of this machine,
    // which is local and offline.
    struct Who
    {
        uint32_t state = 0;            // 0 nobody, 1 local, 2 Live
        uint64_t offline = 0, online = 0;
        std::string name;
    };
    Who WhoIs(uint32_t user)
    {
        Who who;
        if (user == kLocalUser)
        {
            static std::once_flag inherited;
            std::call_once(inherited, InheritOfflineStats);
            const bool live = online::Live();
            who.state = live ? kSignedInToLive : kSignedInLocally;
            who.offline = LocalXuid();
            who.online = live ? LocalOnlineXuid() : 0;
            who.name = LocalName();
            return who;
        }
        const signin::Player player = signin::At(user);
        if (player.signedIn)
        {
            who.state = kSignedInLocally;
            who.offline = 0xE000000000000000ull | player.id;
            who.name = player.name;
        }
        return who;
    }
}

void kernel::CompleteOverlapped(uint32_t address, uint32_t result)
{
    CompleteOverlappedEx(address, result, result, 0);
}

void kernel::CompleteOverlappedEx(uint32_t address, uint32_t result, uint32_t extendedError,
                                  uint32_t length)
{
    auto* overlapped = GuestPtr<XOverlapped>(address);
    if (!overlapped) return;
    overlapped->result = result;
    overlapped->length = length;
    overlapped->extendedError = extendedError;
    if (uint32_t event = overlapped->event)
        if (auto signal = LookupHandleAs<Event>(event)) signal->Set();
}

// XNotify. A listener asks for areas of notification -- system, Live, friends
// -- and the title pumps it once a frame. The area of a notification is in its
// id's top bits.
namespace
{
    struct NotifyListener : Object
    {
        uint64_t areas = 0;
        std::mutex lock;
        std::deque<std::pair<uint32_t, uint32_t>> waiting;   // id, param
        const char* TypeName() const override { return "notify-listener"; }
    };

    std::mutex g_listenersLock;
    std::vector<std::weak_ptr<NotifyListener>> g_listeners;

    constexpr uint32_t XN_LIVE_CONNECTIONCHANGED = 0x02000001;
    constexpr uint32_t XN_LIVE_INVITE_ACCEPTED = 0x02000002;
    constexpr uint32_t X_ONLINE_S_LOGON_CONNECTION_ESTABLISHED = 0x001510F0;
    constexpr uint64_t kAreaLive = 1ull << 1;
}

namespace
{
    uint64_t AreaOf(uint32_t id) { return 1ull << ((id >> 25) & 0x3F); }

    // False when nobody listens for it yet. The caller holds g_listenersLock.
    bool PostLocked(uint32_t id, uint32_t param)
    {
        bool heard = false;
        for (auto& weak : g_listeners)
            if (auto listener = weak.lock(); listener && (listener->areas & AreaOf(id)))
            {
                std::lock_guard l(listener->lock);
                listener->waiting.emplace_back(id, param);
                heard = true;
            }
        return heard;
    }

    // An invitation accepted before the title listens for Live -- as when the
    // console starts a game to take one up -- waits for its first listener.
    bool g_inviteUnheard = false;
}

void kernel::PostNotification(uint32_t id, uint32_t param)
{
    std::lock_guard g(g_listenersLock);
    PostLocked(id, param);
}

// (areas, version)
PPC_FUNC(__imp__XamNotifyCreateListener)
{
    auto listener = std::make_shared<NotifyListener>();
    listener->areas = ctx.r3.u64;
    // Signed in to Live, the connection came up before the title was there to
    // hear it; the console tells a new listener so. The title asks for its NAT
    // type and measures its line when it hears it.
    if (online::Live() && (listener->areas & kAreaLive))
        listener->waiting.emplace_back(XN_LIVE_CONNECTIONCHANGED, X_ONLINE_S_LOGON_CONNECTION_ESTABLISHED);
    {
        std::lock_guard g(g_listenersLock);
        std::erase_if(g_listeners, [](const auto& weak) { return weak.expired(); });
        g_listeners.push_back(listener);
        if (g_inviteUnheard && (listener->areas & AreaOf(XN_LIVE_INVITE_ACCEPTED)))
        {
            listener->waiting.emplace_back(XN_LIVE_INVITE_ACCEPTED, 0);
            g_inviteUnheard = false;
        }
    }
    ctx.r3.u64 = InsertHandle(listener);
}

// (listener, onlyThisId or 0, idOut, paramOut): 1 when one was taken.
PPC_FUNC(__imp__XNotifyGetNext)
{
    auto listener = LookupHandleAs<NotifyListener>(ctx.r3.u32);
    auto* id = GuestPtr<be32>(ctx.r5.u32);
    auto* param = GuestPtr<be32>(ctx.r6.u32);
    if (id) *id = 0;
    if (param) *param = 0;
    ctx.r3.u64 = 0;
    if (!listener) return;
    const uint32_t only = ctx.r4.u32;
    std::lock_guard l(listener->lock);
    for (auto it = listener->waiting.begin(); it != listener->waiting.end(); ++it)
    {
        if (only && it->first != only) continue;
        if (it->first == XN_LIVE_INVITE_ACCEPTED) LOGI("xam: the title heard of the accepted invitation");
        if (id) *id = it->first;
        if (param) *param = it->second;
        listener->waiting.erase(it);
        ctx.r3.u64 = 1;
        return;
    }
}

PPC_FUNC(__imp__XNotifyPositionUI) { ctx.r3.u64 = 0; }

// Zero for nobody, one for a local profile, two for a player on Live.
PPC_FUNC(__imp__XamUserGetSigninState)
{
    ctx.r3.u64 = WhoIs(ctx.r3.u32).state;
}

// (user, typeMask, xuidOut). Mask 1 asks for the offline XUID, 2 and 4 for the
// online one, which a player signed in to Live has.
PPC_FUNC(__imp__XamUserGetXUID)
{
    const Who who = WhoIs(ctx.r3.u32);
    if (!who.state) { ctx.r3.u64 = X_ERROR_NO_SUCH_USER; return; }
    if (auto* xuid = GuestPtr<be64>(ctx.r5.u32)) *xuid = who.online && (ctx.r4.u32 & 6) ? who.online : who.offline;
    ctx.r3.u64 = X_ERROR_SUCCESS;
}

PPC_FUNC(__imp__XamUserGetName)
{
    const Who who = WhoIs(ctx.r3.u32);
    if (!who.state) { ctx.r3.u64 = X_ERROR_NO_SUCH_USER; return; }
    if (auto* name = GuestPtr<char>(ctx.r4.u32))
    {
        uint32_t size = ctx.r5.u32;
        std::snprintf(name, size ? size : 1, "%s", who.name.c_str());
    }
    ctx.r3.u64 = X_ERROR_SUCCESS;
}

// (user, flags, infoOut). Flags 1 asks for the online XUID only, 2 for the
// offline one; with neither, a Live player is named by the online one.
PPC_FUNC(__imp__XamUserGetSigninInfo)
{
    // XUSER_SIGNIN_INFO { xuid, flags, state, guestNumber, sponsorIndex, name[16] }
    const Who who = WhoIs(ctx.r3.u32);
    if (!who.state) { ctx.r3.u64 = X_ERROR_NO_SUCH_USER; return; }
    if (auto* info = GuestPtr<be32>(ctx.r5.u32))
    {
        constexpr uint32_t kOfflineOnly = 2, kLiveEnabled = 1;
        std::memset(info, 0, 40);
        *GuestPtr<be64>(ctx.r5.u32) = who.online && !(ctx.r4.u32 & kOfflineOnly) ? who.online : who.offline;
        info[2] = who.online ? kLiveEnabled : 0;                      // flags
        info[3] = who.state;
        std::snprintf(reinterpret_cast<char*>(info) + 24, 16, "%s", who.name.c_str());
    }
    ctx.r3.u64 = X_ERROR_SUCCESS;
}

// Offline every Live privilege is denied, which is what "no gold" looks like;
// signed in to Live, the player has them all.
PPC_FUNC(__imp__XamUserCheckPrivilege)
{
    if (auto* result = GuestPtr<be32>(ctx.r5.u32)) *result = WhoIs(ctx.r3.u32).state == kSignedInToLive ? 1 : 0;
    ctx.r3.u64 = X_ERROR_SUCCESS;
}

PPC_FUNC(__imp__XamUserAreUsersFriends)
{
    if (auto* result = GuestPtr<be32>(ctx.r5.u32)) *result = 0;
    ctx.r3.u64 = X_ERROR_SUCCESS;
}

// The profile settings calls are in profile.cpp.

PPC_FUNC(__imp__XamUserCreateStatsEnumerator){ ctx.r3.u64 = X_ERROR_NOT_FOUND; }

// (panes, flags). The console's sign-in screen, which is signin.h's here; the
// title hears of what was chosen as a change of who is signed in.
PPC_FUNC(__imp__XamShowSigninUI)
{
    signin::Ask();
    ctx.r3.u64 = X_ERROR_SUCCESS;
}
// Choosing where to save. This is the dialog behind "Unable to Write to Default
// Save Device": until it names a device the title has nowhere to put a save, so
// it asks again before every level.
//
// The title accepts exactly one answer from this call. It is asynchronous, and
// the caller tests the return for ERROR_IO_PENDING and then polls
// XGetOverlappedResult; anything else -- success included -- it reads as a
// refusal and goes back to the prompt. So the choice is made here and reported
// through the overlapped block, and the call itself says "pending".
//
// (userIndex, contentType, contentFlags, bytesNeeded, deviceIdOut, overlapped)
PPC_FUNC(__imp__XamShowDeviceSelectorUI)
{
    // The hard disk, as the content layer in content.cpp reports it.
    if (auto* deviceId = GuestPtr<be32>(ctx.r7.u32)) *deviceId = kSaveDeviceId;
    const uint32_t overlapped = ctx.r8.u32;
    if (!overlapped) { ctx.r3.u64 = X_ERROR_SUCCESS; return; }
    CompleteOverlapped(overlapped, X_ERROR_SUCCESS);
    ctx.r3.u64 = X_ERROR_IO_PENDING;
}
PPC_FUNC(__imp__XamShowMessageBoxUIEx)     { ctx.r3.u64 = X_ERROR_NOT_FOUND; }
// The lobby's "Invite friends": the service's own picker, where it has one.
PPC_FUNC(__imp__XamShowFriendsUI)
{
    if (auto* service = online::Get()) service->InviteFriends();
    ctx.r3.u64 = X_ERROR_SUCCESS;
}
PPC_FUNC(__imp__XamShowGamerCardUIForXUID) { ctx.r3.u64 = X_ERROR_SUCCESS; }
PPC_FUNC(__imp__XamShowDirtyDiscErrorUI)
{
    LOGE("the title reported a dirty disc and asked for the error UI");
    ctx.r3.u64 = X_ERROR_SUCCESS;
}

// XAM's message ports. Everything the title asks of the multiplayer services --
// sessions, matchmaking, statistics -- arrives here as (app, message, buffer)
// rather than as its own import, so an entry point named XSessionCreate in the
// engine is app 0xFB message 0x000B0010 by the time it reaches the kernel.
// Answering "success" and writing nothing is not neutral: the title reads the
// session back out and gives up on what it finds.
namespace
{
    constexpr uint32_t kAppXGI = 0xFB;        // the game-invite / session app
    constexpr uint32_t kAppXLiveBase = 0xFC;  // Live itself: storage, invitations, NAT

    // What a message answers: its result, and for an asynchronous one the
    // extended error the caller reads from the overlapped block.
    struct Reply
    {
        uint32_t result = X_ERROR_SUCCESS;
        uint32_t extended = X_ERROR_SUCCESS;
    };
    Reply Result(uint32_t result) { return { result, result }; }

    // XSESSION_INFO, the block XSessionCreate fills in for the caller.
    struct XSessionInfo
    {
        uint8_t sessionId[8];      // 0,  XNKID
        uint8_t hostAddress[36];   // 8,  XNADDR
        uint8_t keyExchangeKey[16];// 44, XNKEY
    };
    static_assert(sizeof(XSessionInfo) == online::kSessionInfoSize, "XSESSION_INFO is 60 bytes");

    std::string Hex(const uint8_t* p, size_t n)
    {
        std::string text;
        char pair[3];
        for (size_t i = 0; i < n; i++)
        {
            std::snprintf(pair, sizeof pair, "%02x", p[i]);
            text += pair;
        }
        return text;
    }

    void RandomBytes(uint8_t* p, size_t n)
    {
        thread_local std::mt19937 rng{ std::random_device{}() };
        for (size_t i = 0; i < n; i++) p[i] = uint8_t(rng());
    }

    // XSESSION_CREATE_* flags.
    constexpr uint32_t kHost = 0x01, kPresence = 0x02, kInvitesDisabled = 0x100;
    constexpr uint32_t kLiveFeatures = 0x02 | 0x04 | 0x08 | 0x10;   // presence, stats, matchmaking, arbitration

    // Every session the title has made, by the session object it names them
    // with: what another machine needs to join one, and the order they came in.
    struct Session
    {
        uint32_t flags = 0;
        XSessionInfo info{};
        uint32_t publicSlots = 0, privateSlots = 0;
        uint8_t nonce[8]{};
        uint64_t made = 0;
    };
    std::mutex g_sessionLock;
    std::map<uint32_t, Session> g_sessions;
    uint64_t g_sessionsMade = 0;
    std::array<uint8_t, 8> g_joinable{};   // the id of the session last handed to the service

    // A new identity for a session this machine hosts, the way the console
    // makes one. The top bits of the id say what kind of session it is: clear
    // for system link, 0x80 for one peers hold over Live. A session id of all
    // zeroes is what the title reads as "the service never gave us one".
    void MakeHostInfo(XSessionInfo& info, bool live)
    {
        RandomBytes(info.sessionId, sizeof info.sessionId);
        info.sessionId[0] = live ? uint8_t(0x80 | (info.sessionId[0] & 0x0F))
                                 : uint8_t((info.sessionId[0] & 0x7F) | 0x01);
        kernel::TitleXnAddr(info.hostAddress);
        RandomBytes(info.keyExchangeKey, sizeof info.keyExchangeKey);
    }

    // What another machine types to join a system-link game: the console
    // command the title's own server browser issues, with what the host's reply
    // to a search carries -- XNADDR, key and id in hex, the slots and the nonce.
    void AdvertiseHosted(const Session& s)
    {
        auto* service = online::Get();
        if (!service) return;
        const std::string line = "connect " + Hex(s.info.hostAddress, 36) + " " +
                                 Hex(s.info.keyExchangeKey, 16) + " " + Hex(s.info.sessionId, 8) + " " +
                                 std::to_string(s.publicSlots) + " " + std::to_string(s.privateSlots) +
                                 " " + Hex(s.nonce, 8);
        LOGI("online: hosting; another machine joins with \"%s\"", line.c_str());
        service->Advertise(line);
    }

    // What a friend joins over Live: the newest session this machine hosts that
    // shows in its presence and takes invitations -- the party's while the
    // player is in the Xbox LIVE menu, the private match's once in its lobby.
    // Told to the service whenever the sessions change. The console line is
    // the title's own way in to the same place, logged for testing.
    void PublishJoinable()
    {
        if (!online::Live()) return;
        const Session* best = nullptr;
        online::Joinable joinable;
        {
            std::lock_guard g(g_sessionLock);
            for (const auto& [object, s] : g_sessions)
                if ((s.flags & kHost) && (s.flags & kPresence) && !(s.flags & kInvitesDisabled) &&
                    (!best || s.made > best->made))
                    best = &s;
            std::array<uint8_t, 8> id{};
            if (best) std::memcpy(id.data(), best->info.sessionId, 8);
            if (id == g_joinable) return;
            g_joinable = id;
            if (best) std::memcpy(joinable.session, &best->info, sizeof best->info);
        }
        if (best)
        {
            const auto& info = *reinterpret_cast<const XSessionInfo*>(joinable.session);
            LOGI("online: joinable; another machine joins with \"xpartyjoin %s %s %s\"",
                 Hex(info.hostAddress, 36).c_str(), Hex(info.keyExchangeKey, 16).c_str(),
                 Hex(info.sessionId, 8).c_str());
        }
        else
            LOGI("online: nothing to join");
        online::Get()->SetJoinable(best ? &joinable : nullptr);
    }

    // (session, flags, publicSlots, privateSlots, xuid, sessionInfoOut, nonceOut)
    Reply XgiSessionCreate(uint32_t buffer, uint32_t length)
    {
        if (length < 28) return Result(X_ERROR_INVALID_PARAMETER);
        const auto* words = GuestPtr<be32>(buffer);
        if (!words) return Result(X_ERROR_INVALID_PARAMETER);
        const uint32_t object = words[0], flags = words[1];

        // A session this console hosts on its own -- system link -- gets an
        // identity the title invents no differently than the console would.
        // One that wants Xbox Live needs a service that carries lobbies; without
        // one it is refused, and the title falls back to the offline path
        // instead of waiting on a service that never answers.
        const bool live = flags & kLiveFeatures;
        if (live && !online::Live())
            return Result(0x80155209);   // X_ONLINE_E_SESSION_NOT_LOGGED_ON

        auto* info = GuestPtr<XSessionInfo>(words[5]);
        auto* nonce = GuestPtr<uint8_t>(words[6]);
        // Joining someone else's session: the title passes the host's session
        // info and nonce in, from the game it found, and reads them back.
        const bool host = !flags || (flags & kHost);
        if (host)
        {
            if (info) MakeHostInfo(*info, live);
            if (nonce) RandomBytes(nonce, 8);
        }
        Session s;
        s.flags = flags;
        if (info) s.info = *info;
        if (nonce) std::memcpy(s.nonce, nonce, 8);
        s.publicSlots = words[2];
        s.privateSlots = words[3];
        {
            std::lock_guard g(g_sessionLock);
            s.made = ++g_sessionsMade;
            g_sessions[object] = s;
        }
        if (info) kernel::NoteSessionId(info->sessionId);
        if (host && info && nonce && !live) AdvertiseHosted(s);
        PublishJoinable();
        return {};
    }

    // (session, ...): the session goes, and with it what a friend could join.
    Reply XgiSessionDelete(uint32_t buffer)
    {
        if (const auto* words = GuestPtr<be32>(buffer))
        {
            std::lock_guard g(g_sessionLock);
            g_sessions.erase(words[0]);
        }
        PublishJoinable();
        return {};
    }

    // (session, flags, publicSlots, privateSlots)
    Reply XgiSessionModify(uint32_t buffer, uint32_t length)
    {
        const auto* words = GuestPtr<be32>(buffer);
        if (!words || length < 16) return Result(X_ERROR_INVALID_PARAMETER);
        {
            std::lock_guard g(g_sessionLock);
            auto it = g_sessions.find(words[0]);
            if (it != g_sessions.end())
            {
                // The flags that say who hosts and what the session uses are
                // fixed at creation; the rest can change.
                constexpr uint32_t kFixed = 0x3F;
                it->second.flags = (it->second.flags & kFixed) | (words[1] & ~kFixed);
                it->second.publicSlots = words[2];
                it->second.privateSlots = words[3];
            }
        }
        PublishJoinable();
        return {};
    }

    // Live storage, kept on this machine under saves/online: the title's own
    // files (title/, which nothing here publishes, so each is there and empty
    // -- the playlists and the message of the day), and each player's
    // (user/<xuid>/, the multiplayer rank and stats the title uploads).
    //
    // The console names them by server path, which XStorageBuildServerPath
    // makes and the title passes back: //title.<id>/t:<id>/<file> and
    // //tuser.<id>/u:<xuid>/<id>/<file>.
    constexpr uint32_t kFacilityPerTitle = 2, kFacilityPerUserTitle = 3;
    constexpr uint32_t X_ONLINE_E_STORAGE_FILE_NOT_FOUND = 0x8015C004;

    struct StorageFile
    {
        fs::path path;
        bool title = false;
    };

    bool StorageName(const std::string& name)
    {
        return !name.empty() && name != "." && name != ".." &&
               name.find_first_of("/\\:") == std::string::npos;
    }

    bool StoragePath(const std::string& server, StorageFile& out)
    {
        char title[16];
        std::snprintf(title, sizeof title, "%08x", kTitleId);
        const std::string titleRoot = std::string("//title.") + title + "/t:" + title + "/";
        const std::string userRoot = std::string("//tuser.") + title + "/u:";
        const fs::path root = SaveRoot() / "online";
        if (server.rfind(titleRoot, 0) == 0)
        {
            const std::string name = server.substr(titleRoot.size());
            if (!StorageName(name)) return false;
            out = { root / "title" / name, true };
            return true;
        }
        if (server.rfind(userRoot, 0) == 0)
        {
            const std::string rest = server.substr(userRoot.size());   // <xuid>/<title>/<file>
            const size_t a = rest.find('/'), b = a == std::string::npos ? a : rest.find('/', a + 1);
            if (b == std::string::npos || a != 16 || rest.compare(a + 1, b - a - 1, title) != 0)
                return false;
            const std::string xuid = rest.substr(0, a), name = rest.substr(b + 1);
            if (xuid.find_first_not_of("0123456789abcdef") != std::string::npos || !StorageName(name))
                return false;
            out = { root / "user" / xuid / name, false };
            return true;
        }
        return false;
    }

    std::string WideToAscii(const be16* p, size_t count)
    {
        std::string text;
        for (size_t i = 0; i < count && p[i]; i++)
        {
            const uint16_t c = p[i];
            text += c < 0x80 ? char(c) : '?';
        }
        return text;
    }

    // (XSTORAGE_BUILD_SERVER_PATH*): { user, xuid@8, facility@16, info@20,
    // infoSize@24, fileName@28, pathOut@32, pathLengthInOut@36 }
    Reply StorageBuildServerPath(uint32_t buffer)
    {
        auto* p = GuestPtr<uint8_t>(buffer);
        if (!p) return Result(0x80070057);   // E_INVALIDARG
        const uint32_t user = *reinterpret_cast<be32*>(p);
        const uint64_t named = *reinterpret_cast<be64*>(p + 8);
        const uint32_t facility = *reinterpret_cast<be32*>(p + 16);
        const uint32_t fileName = *reinterpret_cast<be32*>(p + 28);
        const uint32_t pathOut = *reinterpret_cast<be32*>(p + 32);
        auto* length = GuestPtr<be32>(*reinterpret_cast<be32*>(p + 36));
        const std::string name = GuestWideToUtf8(fileName, 256);
        if (!length || name.empty()) return Result(0x80070057);

        char path[256];
        if (facility == kFacilityPerTitle)
            std::snprintf(path, sizeof path, "//title.%08x/t:%08x/%s", kTitleId, kTitleId, name.c_str());
        else if (facility == kFacilityPerUserTitle)
        {
            const uint64_t xuid = user == kLocalUser ? LocalOnlineXuid() : named;
            std::snprintf(path, sizeof path, "//tuser.%08x/u:%016llx/%08x/%s", kTitleId,
                          (unsigned long long)xuid, kTitleId, name.c_str());
        }
        else
            return Result(0x80155301);   // X_ONLINE_E_STORAGE_INVALID_FACILITY

        const size_t chars = std::strlen(path) + 1;
        if (auto* out = GuestPtr<be16>(pathOut))
        {
            const size_t room = std::min<size_t>(*length, chars);
            for (size_t i = 0; i < room; i++) out[i] = i + 1 < chars ? uint16_t(uint8_t(path[i])) : 0;
        }
        *length = uint32_t(chars);
        return {};
    }

    // XLIVEBASE_ASYNC_MESSAGE { task }, and the task's marshalled request:
    // { user, pathChars, path (UTF-16), bufferSize, buffer }.
    struct StorageRequest
    {
        std::string path;
        uint32_t size = 0, buffer = 0;
        uint32_t results = 0, resultsSize = 0;
    };

    bool ReadStorageRequest(uint32_t message, StorageRequest& out)
    {
        const auto* async = GuestPtr<be32>(message);
        const auto* task = async ? GuestPtr<uint8_t>(async[0]) : nullptr;
        if (!task) return false;
        const uint32_t request = *reinterpret_cast<const be32*>(task + 0x18);
        const uint32_t requestSize = *reinterpret_cast<const be32*>(task + 0x1C);
        out.results = *reinterpret_cast<const be32*>(task + 0x2C);
        out.resultsSize = *reinterpret_cast<const be32*>(task + 0x30);
        const auto* words = GuestPtr<uint8_t>(request);
        if (!words || requestSize < 16) return false;
        const uint32_t chars = *reinterpret_cast<const be32*>(words + 4);
        if (8 + size_t(chars) * 2 + 8 > requestSize) return false;
        out.path = WideToAscii(reinterpret_cast<const be16*>(words + 8), chars);
        const uint8_t* tail = words + 8 + size_t(chars) * 2;
        out.size = *reinterpret_cast<const be32*>(tail);
        out.buffer = *reinterpret_cast<const be32*>(tail + 4);
        return true;
    }

    // XSTORAGE_DOWNLOAD_TO_MEMORY_RESULTS { bytesTotal, xuidOwner, ftCreated }
    Reply StorageDownload(uint32_t message)
    {
        StorageRequest request;
        StorageFile file;
        if (!ReadStorageRequest(message, request) || !StoragePath(request.path, file))
        {
            LOGW("online: storage download of an unknown path \"%s\"", request.path.c_str());
            return { kFunctionFailed, X_ONLINE_E_STORAGE_FILE_NOT_FOUND };
        }
        std::vector<char> bytes;
        std::error_code ec;
        if (fs::exists(file.path, ec))
        {
            std::ifstream in(file.path, std::ios::binary);
            bytes.assign(std::istreambuf_iterator<char>(in), {});
        }
        else if (!file.title)
        {
            LOGI("online: storage has no %s yet", request.path.c_str());
            return { kFunctionFailed, X_ONLINE_E_STORAGE_FILE_NOT_FOUND };
        }
        if (bytes.size() > request.size)
            return { kFunctionFailed, 0x8007007A };   // HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER)
        if (auto* to = GuestPtr<char>(request.buffer); to && !bytes.empty())
            std::memcpy(to, bytes.data(), bytes.size());
        if (auto* results = GuestPtr<uint8_t>(request.results); results && request.resultsSize >= 20)
        {
            std::memset(results, 0, 20);
            *reinterpret_cast<be32*>(results) = uint32_t(bytes.size());
            const uint64_t owner = file.title ? 0 : LocalOnlineXuid();
            for (int i = 0; i < 8; i++) results[4 + i] = uint8_t(owner >> (56 - 8 * i));
        }
        LOGI("online: storage download %s, %zu bytes", request.path.c_str(), bytes.size());
        return {};
    }

    Reply StorageUpload(uint32_t message)
    {
        StorageRequest request;
        StorageFile file;
        const char* from = nullptr;
        if (!ReadStorageRequest(message, request) || !StoragePath(request.path, file) || file.title ||
            !(from = GuestPtr<const char>(request.buffer)))
        {
            LOGW("online: storage upload refused for \"%s\"", request.path.c_str());
            return Result(0x80070005);   // E_ACCESSDENIED
        }
        std::error_code ec;
        fs::create_directories(file.path.parent_path(), ec);
        std::ofstream out(file.path, std::ios::binary | std::ios::trunc);
        out.write(from, request.size);
        if (!out) return Result(0x80004005);   // E_FAIL
        LOGI("online: storage upload %s, %u bytes", request.path.c_str(), request.size);
        return {};
    }

    // The invitation the player last accepted, as XINVITE_INFO:
    // { xuidInvitee, xuidInviter, titleId, hostInfo (XSESSION_INFO), fromGameInvite }.
    struct AcceptedInvite
    {
        bool any = false;
        uint8_t bytes[84]{};
    };
    std::mutex g_inviteLock;
    AcceptedInvite g_invite;

    // (task, X_ARGUMENT_LIST*): entries of { size, value } where value 0 points
    // at the user index and value 1 at the XINVITE_INFO to fill.
    Reply InviteGetAcceptedInfo(uint32_t arguments)
    {
        const auto* list = GuestPtr<uint8_t>(arguments);
        if (!list) return Result(0x80070057);
        const uint32_t userAt = uint32_t(*reinterpret_cast<const be64*>(list + 8));
        const uint32_t infoAt = uint32_t(*reinterpret_cast<const be64*>(list + 16 + 8));
        const auto* user = GuestPtr<be32>(userAt);
        auto* info = GuestPtr<uint8_t>(infoAt);
        if (!user || !info || *user != kLocalUser) return Result(0x80070057);
        std::lock_guard g(g_inviteLock);
        if (!g_invite.any) return Result(0x80155200);   // X_ONLINE_E_SESSION_NOT_FOUND
        std::memcpy(info, g_invite.bytes, sizeof g_invite.bytes);
        LOGI("xam: the title read the accepted invitation");
        return {};
    }

    Reply XLiveBase(uint32_t message, uint32_t param1, uint32_t param2)
    {
        switch (message)
        {
        case 0x00050009: return StorageDownload(param1);
        case 0x0005000B: return StorageUpload(param1);
        case 0x00058004:   // XOnlineGetLogonID
            if (auto* id = GuestPtr<be32>(param1)) *id = 1;
            return {};
        case 0x00058006:   // XOnlineGetNatType: open
            if (auto* type = GuestPtr<be32>(param1)) *type = 1;
            return {};
        case 0x0005800E:   // XUserMuteListQuery: nobody is muted
            if (auto* muted = GuestPtr<be32>(param2)) *muted = 0;
            return {};
        case 0x00058023: return InviteGetAcceptedInfo(param2);
        case 0x00058035: return StorageBuildServerPath(param1);
        default: return { X_ERROR_SUCCESS, X_ERROR_SUCCESS };
        }
    }

    bool Handled(uint32_t app, uint32_t message)
    {
        if (app == kAppXGI)
            return message == 0x000B0010 || message == 0x000B0011 || message == 0x000B0018;
        if (app == kAppXLiveBase)
            return message == 0x00050009 || message == 0x0005000B || message == 0x00058004 ||
                   message == 0x00058006 ||
                   message == 0x0005800E || message == 0x00058023 || message == 0x00058035;
        return false;
    }

    Reply XamMessage(uint32_t app, uint32_t message, uint32_t param1, uint32_t param2)
    {
        if (!Handled(app, message))
        {
            // Answered "success" with nothing written; named once so a run shows
            // what the title asked for.
            static std::mutex lock;
            static std::set<uint64_t> seen;
            std::lock_guard g(lock);
            if (seen.insert((uint64_t(app) << 32) | message).second)
                LOGI("xam: message %02x/%08x answered with success", app, message);
            return {};
        }
        if (app == kAppXGI)
        {
            switch (message)
            {
            case 0x000B0010: return XgiSessionCreate(param1, param2);
            case 0x000B0011: return XgiSessionDelete(param1);
            case 0x000B0018: return XgiSessionModify(param1, param2);
            }
        }
        return XLiveBase(message, param1, param2);
    }
}

void kernel::AcceptInvite(uint64_t inviterAccount, const uint8_t* session60, bool fromInvite)
{
    {
        std::lock_guard g(g_inviteLock);
        uint8_t* p = g_invite.bytes;
        std::memset(p, 0, sizeof g_invite.bytes);
        *reinterpret_cast<be64*>(p + 0) = LocalOnlineXuid();
        *reinterpret_cast<be64*>(p + 8) = OnlineXuid(inviterAccount);
        *reinterpret_cast<be32*>(p + 16) = kTitleId;
        std::memcpy(p + 20, session60, online::kSessionInfoSize);
        *reinterpret_cast<be32*>(p + 80) = fromInvite ? 1 : 0;
        g_invite.any = true;
    }
    std::lock_guard g(g_listenersLock);
    g_inviteUnheard = !PostLocked(XN_LIVE_INVITE_ACCEPTED, kLocalUser);
}

// A session is a kernel object the title names by handle and hands XAM by
// object address in every session message. Nothing here reads the object; it
// only has to be memory of its own.
namespace
{
    struct SessionObject : Object
    {
        uint32_t guest = 0;
        const char* TypeName() const override { return "session"; }
    };
}

// (handleOut)
PPC_FUNC(__imp__XamSessionCreateHandle)
{
    auto session = std::make_shared<SessionObject>();
    session->guest = kernel::AllocateGuest(64, 16);
    if (session->guest) std::memset(GuestPtr<uint8_t>(session->guest), 0, 64);
    const uint32_t handle = session->guest ? InsertHandle(session) : 0;
    if (auto* out = GuestPtr<be32>(ctx.r3.u32)) *out = handle;
    ctx.r3.u64 = handle ? X_ERROR_SUCCESS : X_ERROR_NOT_ENOUGH_MEMORY;
}

// (handle, objectOut)
PPC_FUNC(__imp__XamSessionRefObjByHandle)
{
    auto session = LookupHandleAs<SessionObject>(ctx.r3.u32);
    if (auto* out = GuestPtr<be32>(ctx.r4.u32)) *out = session ? session->guest : 0;
    ctx.r3.u64 = session ? X_ERROR_SUCCESS : X_ERROR_INVALID_HANDLE;
}

PPC_FUNC(__imp__XMsgInProcessCall)
{
    // (app, message, param1, param2)
    ctx.r3.u64 = XamMessage(ctx.r3.u32, ctx.r4.u32, ctx.r5.u32, ctx.r6.u32).result;
}

PPC_FUNC(__imp__XMsgStartIORequest)
{
    // (app, message, overlapped, buffer, length). The asynchronous form of the
    // same call: it finishes inline here, but the caller polls the overlapped
    // block, so the answer has to go there and the call itself say "pending".
    const Reply reply = XamMessage(ctx.r3.u32, ctx.r4.u32, ctx.r6.u32, ctx.r7.u32);
    const uint32_t overlapped = ctx.r5.u32;
    if (!overlapped) { ctx.r3.u64 = reply.result; return; }
    CompleteOverlappedEx(overlapped, reply.result, reply.extended, 0);
    ctx.r3.u64 = X_ERROR_IO_PENDING;
}

PPC_FUNC(__imp__XMsgCancelIORequest)  { ctx.r3.u64 = X_ERROR_SUCCESS; }

// Enumerators: the title asks XAM for a list -- content packages, Live's
// title servers, friends -- by a handle it then pages through. Nothing here
// has any of those to list, so every enumeration ends at once, which is what
// the console answers for a player with no downloaded content and a Live with
// no servers for the title.
namespace
{
    struct Enumerator : Object
    {
        uint32_t extra = 0;   // the caller's private block, XamCreateEnumeratorHandle's
        ~Enumerator() override { if (extra) kernel::FreeGuest(extra); }
        const char* TypeName() const override { return "enumerator"; }
    };

    uint32_t NewEnumerator(uint32_t extraSize)
    {
        auto enumerator = std::make_shared<Enumerator>();
        if (extraSize)
        {
            enumerator->extra = kernel::AllocateGuest(extraSize, 16);
            if (!enumerator->extra) return 0;
            std::memset(GuestPtr<uint8_t>(enumerator->extra), 0, extraSize);
        }
        return InsertHandle(enumerator);
    }

    constexpr uint32_t X_ERROR_NO_MORE_FILES = 0x12;
    constexpr uint32_t kXContentDataSize = 0x134;
}

// (user, app, openMessage, closeMessage, extraSize, itemCount, flags, handleOut)
PPC_FUNC(__imp__XamCreateEnumeratorHandle)
{
    const uint32_t handle = NewEnumerator(ctx.r7.u32);
    if (auto* out = GuestPtr<be32>(ctx.r10.u32)) *out = handle;
    ctx.r3.u64 = handle ? X_ERROR_SUCCESS : X_ERROR_NOT_ENOUGH_MEMORY;
}

// (handle, extraOut)
PPC_FUNC(__imp__XamGetPrivateEnumStructureFromHandle)
{
    auto enumerator = LookupHandleAs<Enumerator>(ctx.r3.u32);
    if (auto* out = GuestPtr<be32>(ctx.r4.u32)) *out = enumerator ? enumerator->extra : 0;
    ctx.r3.u64 = enumerator ? X_ERROR_SUCCESS : X_ERROR_INVALID_HANDLE;
}

// (user, device, contentType, flags, itemCount, bufferSizeOut, handleOut)
PPC_FUNC(__imp__XamContentCreateEnumerator)
{
    const uint32_t handle = NewEnumerator(0);
    if (auto* size = GuestPtr<be32>(ctx.r8.u32)) *size = ctx.r7.u32 * kXContentDataSize;
    if (auto* out = GuestPtr<be32>(ctx.r9.u32)) *out = handle;
    ctx.r3.u64 = handle ? X_ERROR_SUCCESS : X_ERROR_NOT_ENOUGH_MEMORY;
}

// (handle, flags, buffer, bufferSize, itemsOut, overlapped)
PPC_FUNC(__imp__XamEnumerate)
{
    if (!LookupHandleAs<Enumerator>(ctx.r3.u32)) { ctx.r3.u64 = X_ERROR_INVALID_HANDLE; return; }
    if (const uint32_t overlapped = ctx.r8.u32)
    {
        CompleteOverlappedEx(overlapped, kFunctionFailed, 0x80070000 | X_ERROR_NO_MORE_FILES, 0);
        ctx.r3.u64 = X_ERROR_IO_PENDING;
        return;
    }
    if (auto* items = GuestPtr<be32>(ctx.r7.u32)) *items = 0;
    ctx.r3.u64 = X_ERROR_NO_MORE_FILES;
}

// XamGetSystemVersion, XGetLanguage and XGetAVPack are in misc.cpp.

PPC_FUNC(__imp__XamAlloc)
{
    // (flags, size, outPointer)
    uint32_t address = kernel::AllocateGuest(ctx.r4.u32, 16);
    if (auto* out = GuestPtr<be32>(ctx.r5.u32)) *out = address;
    ctx.r3.u64 = address ? X_ERROR_SUCCESS : X_STATUS_NO_MEMORY;
}

PPC_FUNC(__imp__XamFree)
{
    kernel::FreeGuest(ctx.r3.u32);
    ctx.r3.u64 = X_ERROR_SUCCESS;
}

PPC_FUNC(__imp__ExGetXConfigSetting)
{
    uint32_t category = ctx.r3.u32, setting = ctx.r4.u32;
    uint32_t buffer = ctx.r5.u32, size = ctx.r6.u32;

    uint32_t value = 0;
    uint32_t width = 4;
    if (category == 0x0003)          // XCONFIG_USER_CATEGORY
    {
        switch (setting)
        {
        case 0x0001: value = 0;  width = 1; break;   // timezone-ish
        case 0x0002: value = 1;  width = 4; break;   // language: English
        case 0x0003: value = 0;  width = 4; break;   // video flags
        default: break;
        }
    }

    if (buffer && size >= width)
    {
        if (width == 1) *GuestPtr<uint8_t>(buffer) = uint8_t(value);
        else            *GuestPtr<be32>(buffer) = value;
    }
    if (auto* out = GuestPtr<be16>(ctx.r7.u32)) *out = uint16_t(width);
    ctx.r3.u64 = X_ERROR_SUCCESS;
}

// Steam, through the Steam client the player already runs.
//
// libsteam_api is a thin layer over steamclient.so, the library every Steam
// install carries: it opens it, asks it for versioned interfaces, and calls
// them. This does the same with nothing of Valve's built in or shipped. The
// interfaces are C++ objects, called here through their vtables by slot; the
// slots and the structures below are those of the Steamworks SDK's headers
// (the versions named with each), and Steam keeps every version it ever
// shipped, so a build keeps working as the client updates.
//
// The title runs as Spacewar, app 480, which every Steam account can run
// (MW2_STEAM_APPID for another). Players are SteamIDs and datagrams are
// ISteamNetworkingMessages, which punches through NAT or relays through Valve.
//
// Each player sits in a friends-only lobby of their own from the start. The
// lobby is the network the title's broadcasts reach, so a game one member
// hosts shows up in every other member's System Link list. F6, or the Xbox
// LIVE lobby's "Invite friends", opens the overlay's invitation; a friend who
// accepts leaves their lobby for this one. The host's lobby carries what joins
// its game: the Xbox LIVE party or private match it is in ("xsession", which
// the friend's copy takes as an accepted Live invitation), or else the console
// line of the system-link game it hosts ("connect", which the friend's copy
// types).
#include "service.h"
#include "../env.h"
#include "../log.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <filesystem>
#include <mutex>
#include <string>
#include <thread>

#include "../platform.h"
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#else
#include <unistd.h>
#endif

namespace
{
    using HSteamPipe = int32_t;
    using HSteamUser = int32_t;
    using SteamAPICall = uint64_t;

    // One virtual call. A CSteamID travels as the uint64 it holds: the class is
    // trivially copyable, so the ABI passes and returns it in a register.
    template <typename R, typename... A>
    R Call(void* object, int slot, A... args)
    {
        return (*reinterpret_cast<R (***)(void*, A...)>(object))[slot](object, args...);
    }

    // A call that returns a CSteamID. The Windows client is built with MSVC,
    // whose member functions return any class through a hidden pointer after
    // `this`, however small; elsewhere it comes back in a register.
    template <typename... A>
    uint64_t CallSteamId(void* object, int slot, A... args)
    {
#ifdef _WIN32
        uint64_t id = 0;
        (*reinterpret_cast<uint64_t* (***)(void*, uint64_t*, A...)>(object))[slot](object, &id, args...);
        return id;
#else
        return Call<uint64_t>(object, slot, args...);
#endif
    }

    void SetEnvironment(const char* name, const char* value)
    {
#ifdef _WIN32
        _putenv_s(name, value ? value : "");
#else
        if (value) setenv(name, value, 1);
        else unsetenv(name);
#endif
    }

    // Slots, from steam_api.json and the headers of the SDK version named.
    namespace client     // SteamClient023
    {
        constexpr int CreateSteamPipe = 0, ReleaseSteamPipe = 1, ConnectToGlobalUser = 2,
                      ReleaseUser = 4, GetUser = 5, GetFriends = 8, GetMatchmaking = 10,
                      GetGeneric = 12;
    }
    namespace user { constexpr int LoggedOn = 1, GetSteamID = 2; }   // SteamUser023
    namespace friends    // SteamFriends018
    {
        constexpr int GetPersonaName = 0, InviteDialog = 32, SetRichPresence = 41,
                      ClearRichPresence = 42;
    }
    namespace matchmaking   // SteamMatchMaking009
    {
        constexpr int CreateLobby = 13, JoinLobby = 14, LeaveLobby = 15, MemberCount = 17,
                      Member = 18, GetLobbyData = 19, SetLobbyData = 20, Owner = 35;
    }
    namespace messages { constexpr int Send = 0, Receive = 1, Accept = 2; }   // SteamNetworkingMessages002

    // Callback ids: the interface's base plus the structure's offset.
    constexpr int kCallCompleted = 703;          // SteamAPICallCompleted_t
    constexpr int kLobbyEnter = 504;             // LobbyEnter_t
    constexpr int kLobbyDataUpdate = 505;        // LobbyDataUpdate_t
    constexpr int kLobbyCreated = 513;           // LobbyCreated_t
    constexpr int kLobbyJoinRequested = 333;     // GameLobbyJoinRequested_t
    constexpr int kPresenceJoinRequested = 337;  // GameRichPresenceJoinRequested_t
    constexpr int kSessionRequest = 1251;        // SteamNetworkingMessagesSessionRequest_t

    constexpr int kResultOK = 1;                 // EResult
    constexpr uint32_t kEnterSuccess = 1;        // EChatRoomEnterResponse
    constexpr int kFriendsOnly = 1;              // ELobbyType
    constexpr int kMaxMembers = 18;              // the title's own sv_maxclients
    // Unreliable, sent at once, and a session that broke is started again
    // rather than refused.
    constexpr int kSendFlags = 0 | 1 | 32;

    // SteamNetworkingIdentity, packed to 1 byte as the SDK declares it.
#pragma pack(push, 1)
    struct Identity
    {
        int32_t type;        // ESteamNetworkingIdentityType, 16 = SteamID
        int32_t size;
        union
        {
            uint64_t steamId;
            uint8_t raw[128];
        };
    };
#pragma pack(pop)
    static_assert(sizeof(Identity) == 136);

    Identity SteamIdentity(uint64_t steamId)
    {
        Identity identity{};
        identity.type = 16;
        identity.size = 8;
        identity.steamId = steamId;
        return identity;
    }

    // The callback structures, packed as the SDK packs them: to 8 on Windows,
    // to 4 elsewhere. Of the ones read here only LobbyCreated's lobby moves.
#ifdef _WIN32
#pragma pack(push, 8)
#else
#pragma pack(push, 4)
#endif
    struct Message   // SteamNetworkingMessage_t
    {
        void* data;
        int32_t size;
        uint32_t connection;
        Identity peer;
        int64_t connectionUserData;
        int64_t received;
        int64_t number;
        void (*freeData)(Message*);
        void (*release)(Message*);
        int32_t channel;
        int32_t flags;
        int64_t userData;
        uint16_t lane;
        uint16_t pad;
    };
    struct CallbackMsg { HSteamUser user; int32_t id; uint8_t* param; int32_t size; };
    struct CallCompleted { SteamAPICall call; int32_t id; uint32_t size; };
    struct LobbyCreated { int32_t result; uint64_t lobby; };
    struct LobbyEnter { uint64_t lobby; uint32_t permissions; bool locked; uint32_t response; };
    struct LobbyDataUpdate { uint64_t lobby, member; uint8_t success; };
    struct LobbyJoinRequested { uint64_t lobby, friendId; };
    struct PresenceJoinRequested { uint64_t friendId; char connect[256]; };
    struct SessionRequest { Identity remote; };
#pragma pack(pop)
    static_assert(offsetof(Message, peer) == 16 && offsetof(Message, release) == 184 &&
                  offsetof(Message, channel) == 192);
    static_assert(offsetof(CallbackMsg, param) == 8);
#ifdef _WIN32
    static_assert(sizeof(Message) == 216 && sizeof(CallbackMsg) == 24 && sizeof(CallCompleted) == 16 &&
                  offsetof(LobbyCreated, lobby) == 8 && sizeof(LobbyEnter) == 24 &&
                  sizeof(LobbyJoinRequested) == 16 && sizeof(PresenceJoinRequested) == 264);
#else
    static_assert(sizeof(Message) == 212 && sizeof(CallbackMsg) == 20 && sizeof(CallCompleted) == 16 &&
                  offsetof(LobbyCreated, lobby) == 4 && sizeof(LobbyEnter) == 20 &&
                  sizeof(LobbyJoinRequested) == 16 && sizeof(PresenceJoinRequested) == 264);
#endif

    using CreateInterfaceFn = void* (*)(const char*, int*);
    using GetCallbackFn = bool (*)(HSteamPipe, CallbackMsg*);
    using FreeLastCallbackFn = void (*)(HSteamPipe);
    using GetCallResultFn = bool (*)(HSteamPipe, SteamAPICall, void*, int, int, bool*);

    // Where the player's Steam keeps its client library: the usual install, the
    // snap and the Flatpak, or MW2_STEAMCLIENT. On Windows, the folder the
    // registry says Steam is installed in.
    std::string FindClient()
    {
        if (const char* path = env::Text("MW2_STEAMCLIENT")) return path;
#ifdef _WIN32
        wchar_t folder[MAX_PATH];
        DWORD bytes = sizeof(folder);
        if (RegGetValueW(HKEY_CURRENT_USER, L"Software\\Valve\\Steam", L"SteamPath", RRF_RT_REG_SZ, nullptr,
                         folder, &bytes) != ERROR_SUCCESS)
            return {};
        std::error_code ec;
        const auto path = std::filesystem::path(folder) / "steamclient64.dll";
        return std::filesystem::exists(path, ec) ? path.string() : std::string();
#else
        const char* home = env::Text("HOME");
        if (!home) return {};
        const char* candidates[] = {
            "/.steam/sdk64/steamclient.so",
            "/.local/share/Steam/linux64/steamclient.so",
            "/.steam/steam/linux64/steamclient.so",
            "/snap/steam/common/.local/share/Steam/linux64/steamclient.so",
            "/.var/app/com.valvesoftware.Steam/.local/share/Steam/linux64/steamclient.so",
        };
        for (const char* candidate : candidates)
        {
            std::error_code ec;
            const std::string path = std::string(home) + candidate;
            if (std::filesystem::exists(path, ec)) return path;
        }
        return {};
#endif
    }

    // The SDL_ variables in the environment, to put back as they were.
    struct SdlSettings
    {
        std::vector<std::pair<std::string, std::string>> values;

        static SdlSettings Now()
        {
            SdlSettings settings;
            for (char** entry = environ; *entry; entry++)
            {
                const std::string text = *entry;
                const size_t equals = text.find('=');
                if (text.rfind("SDL_", 0) == 0 && equals != std::string::npos)
                    settings.values.emplace_back(text.substr(0, equals), text.substr(equals + 1));
            }
            return settings;
        }

        void Restore() const
        {
            for (const auto& [name, value] : Now().values)
            {
                const auto was = std::find_if(values.begin(), values.end(),
                                              [&](const auto& v) { return v.first == name; });
                if (was == values.end())
                {
                    LOGI("online: the Steam client set %s; this was not started by Steam, so it"
                         " is taken back", name.c_str());
                    SetEnvironment(name.c_str(), nullptr);
                }
                else if (was->second != value)
                    SetEnvironment(name.c_str(), was->second.c_str());
            }
        }
    };

    class Steam final : public online::Service
    {
    public:
        ~Steam() override
        {
            stopping_ = true;
            if (thread_.joinable()) thread_.join();
            if (lobby_) Call<void>(matchmaking_, matchmaking::LeaveLobby, lobby_.load());
            if (client_ && pipe_)
            {
                if (user_) Call<void>(client_, client::ReleaseUser, pipe_, user_);
                Call<bool>(client_, client::ReleaseSteamPipe, pipe_);
            }
        }

        bool Start() override
        {
            const std::string path = FindClient();
            if (path.empty()) { LOGE("online: no Steam install found (MW2_STEAMCLIENT names one)"); return false; }
            // The client reads which game this is from the environment, as it does
            // for a game libsteam_api started, and reads it when it is loaded: set
            // later, its networking asserts and has no interface to give.
            const std::string app = env::Text("MW2_STEAM_APPID") ? env::Text("MW2_STEAM_APPID") : "480";
            SetEnvironment("SteamAppId", app.c_str());
            SetEnvironment("SteamGameId", app.c_str());
            const SdlSettings launched = SdlSettings::Now();
            library_ = platform::OpenLibrary(path.c_str());
            if (!library_) { LOGE("online: could not load %s", path.c_str()); return false; }
            auto create = reinterpret_cast<CreateInterfaceFn>(platform::Symbol(library_, "CreateInterface"));
            getCallback_ = reinterpret_cast<GetCallbackFn>(platform::Symbol(library_, "Steam_BGetCallback"));
            freeLastCallback_ = reinterpret_cast<FreeLastCallbackFn>(platform::Symbol(library_, "Steam_FreeLastCallback"));
            getCallResult_ = reinterpret_cast<GetCallResultFn>(platform::Symbol(library_, "Steam_GetAPICallResult"));
            if (!create || !getCallback_ || !freeLastCallback_ || !getCallResult_)
            {
                LOGE("online: %s lacks the exports a client has", path.c_str());
                return false;
            }

            int result = 1;
            client_ = create("SteamClient023", &result);
            if (!client_) { LOGE("online: the Steam client refused its interface"); return false; }
            pipe_ = Call<HSteamPipe>(client_, client::CreateSteamPipe);
            user_ = pipe_ ? Call<HSteamUser>(client_, client::ConnectToGlobalUser, pipe_) : 0;
            if (!user_) { LOGE("online: Steam is not running, or nobody is logged in"); return false; }

            steamUser_ = Call<void*>(client_, client::GetUser, user_, pipe_, "SteamUser023");
            friends_ = Call<void*>(client_, client::GetFriends, user_, pipe_, "SteamFriends018");
            matchmaking_ = Call<void*>(client_, client::GetMatchmaking, user_, pipe_, "SteamMatchMaking009");
            messages_ = Call<void*>(client_, client::GetGeneric, user_, pipe_, "SteamNetworkingMessages002");
            if (!steamUser_ || !friends_ || !matchmaking_ || !messages_)
            {
                LOGE("online: the Steam client lacks an interface this needs (user %p, friends %p,"
                     " matchmaking %p, networking messages %p)", steamUser_, friends_, matchmaking_, messages_);
                return false;
            }
            // The client tells SDL to pass over every physical controller, as it
            // does in a game Steam started -- where Steam Input stands a virtual
            // one in for them. Nothing does here unless Steam started this, and
            // then it said so before the client loaded; what the client adds on
            // top would leave the title with no controller at all.
            launched.Restore();

            self_ = CallSteamId(steamUser_, user::GetSteamID);
            name_ = Call<const char*>(friends_, friends::GetPersonaName);
            LOGI("online: steam as \"%s\" (%016llx), app %s%s", name_.c_str(),
                 (unsigned long long)self_, app.c_str(),
                 Call<bool>(steamUser_, user::LoggedOn) ? "" : ", offline");

            createCall_ = Call<SteamAPICall>(matchmaking_, matchmaking::CreateLobby, kFriendsOnly, kMaxMembers);
            thread_ = std::thread([this] { Run(); });
            return true;
        }

        uint64_t LocalId() override { return self_; }
        uint64_t Account() override { return self_; }
        std::string LocalName() override { return name_; }

        bool Send(uint64_t peer, uint16_t fromPort, uint16_t toPort,
                  const void* bytes, size_t size) override
        {
            // The sender's port ahead of the title's bytes; the channel is the port
            // it is for.
            thread_local std::vector<uint8_t> packet;
            packet.resize(2 + size);
            packet[0] = uint8_t(fromPort >> 8);
            packet[1] = uint8_t(fromPort);
            std::memcpy(packet.data() + 2, bytes, size);
            const Identity to = SteamIdentity(peer);
            return Call<int>(messages_, messages::Send, &to, packet.data(), uint32_t(packet.size()),
                             kSendFlags, int(toPort)) == kResultOK;
        }

        bool Broadcast(uint16_t fromPort, uint16_t toPort, const void* bytes, size_t size) override
        {
            const uint64_t lobby = lobby_;
            if (!lobby) return false;
            const int count = Call<int>(matchmaking_, matchmaking::MemberCount, lobby);
            for (int i = 0; i < count; i++)
            {
                const uint64_t member = CallSteamId(matchmaking_, matchmaking::Member, lobby, i);
                if (member != self_) Send(member, fromPort, toPort, bytes, size);
            }
            return true;
        }

        bool Receive(uint16_t port, online::Datagram& out) override
        {
            Message* message = nullptr;
            if (Call<int>(messages_, messages::Receive, int(port), &message, 1) < 1 || !message)
                return false;
            const auto* data = static_cast<const uint8_t*>(message->data);
            const bool whole = message->size >= 2 && message->peer.type == 16;
            if (whole)
            {
                out.from = message->peer.steamId;
                out.fromPort = uint16_t((data[0] << 8) | data[1]);
                out.toPort = port;
                out.bytes.assign(data + 2, data + message->size);
            }
            message->release(message);
            return whole;
        }

        void Advertise(const std::string& connect) override
        {
            std::lock_guard g(lock_);
            advert_ = connect;
            PublishLocked();
        }

        bool NextJoin(std::string& connect) override
        {
            std::lock_guard g(lock_);
            if (joins_.empty()) return false;
            connect = std::move(joins_.front());
            joins_.pop_front();
            return true;
        }

        bool Lobbies() override { return true; }

        void SetJoinable(const online::Joinable* joinable) override
        {
            std::lock_guard g(lock_);
            session_.clear();
            if (joinable)
            {
                char pair[3];
                for (uint8_t byte : joinable->session)
                {
                    std::snprintf(pair, sizeof pair, "%02x", byte);
                    session_ += pair;
                }
            }
            PublishLocked();
        }

        bool NextInvite(online::Invite& out) override
        {
            std::lock_guard g(lock_);
            if (invites_.empty()) return false;
            out = invites_.front();
            invites_.pop_front();
            return true;
        }

        void InviteFriends() override
        {
            if (const uint64_t lobby = lobby_)
                Call<void>(friends_, friends::InviteDialog, lobby);
            else
                LOGW("online: no lobby yet to invite anyone to");
        }

    private:
        // Callbacks, read off the pipe the way libsteam_api's manual dispatch
        // does. Between frames is soon enough for anything here.
        void Run()
        {
            while (!stopping_)
            {
                CallbackMsg message;
                while (getCallback_(pipe_, &message))
                {
                    Handle(message);
                    freeLastCallback_(pipe_);
                }
                std::this_thread::sleep_for(std::chrono::milliseconds(10));
            }
        }

        void Handle(const CallbackMsg& message)
        {
            switch (message.id)
            {
            case kCallCompleted:
            {
                const auto& done = *reinterpret_cast<const CallCompleted*>(message.param);
                bool failed = false;
                if (done.call == createCall_)
                {
                    LobbyCreated created{};
                    if (getCallResult_(pipe_, done.call, &created, sizeof created, kLobbyCreated, &failed) &&
                        !failed && created.result == kResultOK)
                        Entered(created.lobby);
                    else
                        LOGW("online: Steam would not make a lobby (result %d)", created.result);
                }
                else if (done.call == joinCall_)
                {
                    LobbyEnter entered{};
                    if (getCallResult_(pipe_, done.call, &entered, sizeof entered, kLobbyEnter, &failed) &&
                        !failed && entered.response == kEnterSuccess)
                        Entered(entered.lobby);
                    else
                        LOGW("online: could not enter the friend's lobby (response %u)", entered.response);
                }
                break;
            }
            case kLobbyJoinRequested:
                Join(reinterpret_cast<const LobbyJoinRequested*>(message.param)->lobby);
                break;
            case kPresenceJoinRequested:
            {
                // "+connect_lobby <id>", as the rich presence below puts it.
                unsigned long long lobby = 0;
                const auto* request = reinterpret_cast<const PresenceJoinRequested*>(message.param);
                if (std::sscanf(request->connect, "+connect_lobby %llu", &lobby) == 1) Join(lobby);
                break;
            }
            case kLobbyDataUpdate:
            {
                const auto& update = *reinterpret_cast<const LobbyDataUpdate*>(message.param);
                if (update.lobby == lobby_ && update.member == update.lobby) Follow();
                break;
            }
            case kSessionRequest:
            {
                // Only from someone in this player's lobby: Spacewar is everyone's.
                const auto& request = *reinterpret_cast<const SessionRequest*>(message.param);
                if (request.remote.type == 16 && InLobby(request.remote.steamId))
                    Call<bool>(messages_, messages::Accept, &request.remote);
                break;
            }
            default:
                break;
            }
        }

        void Join(uint64_t lobby)
        {
            if (!lobby || lobby == lobby_) return;
            LOGI("online: invited; entering lobby %016llx", (unsigned long long)lobby);
            if (const uint64_t old = lobby_.exchange(0)) Call<void>(matchmaking_, matchmaking::LeaveLobby, old);
            joinCall_ = Call<SteamAPICall>(matchmaking_, matchmaking::JoinLobby, lobby);
        }

        void Entered(uint64_t lobby)
        {
            const uint64_t owner = CallSteamId(matchmaking_, matchmaking::Owner, lobby);
            const bool mine = owner == self_;
            {
                std::lock_guard g(lock_);
                lobby_ = lobby;
                owner_ = mine;
                followed_ = false;
                PublishLocked();
            }
            // Friends can join from their list, and an invitation that starts the
            // game says which lobby.
            char connect[64];
            std::snprintf(connect, sizeof connect, "+connect_lobby %llu", (unsigned long long)lobby);
            Call<bool>(friends_, friends::SetRichPresence, "connect", connect);
            LOGI("online: in lobby %016llx%s", (unsigned long long)lobby, mine ? ", its owner" : "");
            Follow();
        }

        // The owner's game, once per lobby entered: a friend who accepted an
        // invitation lands in it, and is not pulled back in each time the host
        // starts another.
        void Follow()
        {
            std::lock_guard g(lock_);
            if (owner_ || followed_ || !lobby_) return;
            online::Invite invite;
            if (ReadSession(Call<const char*>(matchmaking_, matchmaking::GetLobbyData, lobby_.load(), "xsession"),
                            invite.session))
            {
                invite.inviter = CallSteamId(matchmaking_, matchmaking::Owner, lobby_.load());
                invite.fromInvite = true;
                invites_.push_back(invite);
                followed_ = true;
                return;
            }
            const char* connect = Call<const char*>(matchmaking_, matchmaking::GetLobbyData, lobby_.load(), "connect");
            if (!connect || !*connect) return;
            joins_.push_back(connect);
            followed_ = true;
        }

        static bool ReadSession(const char* hex, uint8_t* session)
        {
            if (!hex || std::strlen(hex) != 2 * online::kSessionInfoSize) return false;
            for (size_t i = 0; i < online::kSessionInfoSize; i++)
            {
                unsigned byte;
                if (std::sscanf(hex + 2 * i, "%2x", &byte) != 1) return false;
                session[i] = uint8_t(byte);
            }
            return true;
        }

        void PublishLocked()
        {
            if (!owner_ || !lobby_) return;
            Call<bool>(matchmaking_, matchmaking::SetLobbyData, lobby_.load(), "connect", advert_.c_str());
            Call<bool>(matchmaking_, matchmaking::SetLobbyData, lobby_.load(), "xsession", session_.c_str());
        }

        bool InLobby(uint64_t player)
        {
            const uint64_t lobby = lobby_;
            if (!lobby) return false;
            const int count = Call<int>(matchmaking_, matchmaking::MemberCount, lobby);
            for (int i = 0; i < count; i++)
                if (CallSteamId(matchmaking_, matchmaking::Member, lobby, i) == player) return true;
            return false;
        }

        void* library_ = nullptr;
        void* client_ = nullptr;
        void* steamUser_ = nullptr;
        void* friends_ = nullptr;
        void* matchmaking_ = nullptr;
        void* messages_ = nullptr;
        GetCallbackFn getCallback_ = nullptr;
        FreeLastCallbackFn freeLastCallback_ = nullptr;
        GetCallResultFn getCallResult_ = nullptr;
        HSteamPipe pipe_ = 0;
        HSteamUser user_ = 0;
        uint64_t self_ = 0;
        std::string name_;

        std::thread thread_;
        std::atomic<bool> stopping_{ false };
        std::atomic<SteamAPICall> createCall_{ 0 }, joinCall_{ 0 };
        std::atomic<uint64_t> lobby_{ 0 };

        std::mutex lock_;
        bool owner_ = false, followed_ = false;
        std::string advert_;
        std::string session_;   // what joins this player's Live party or lobby, in hex
        std::deque<std::string> joins_;
        std::deque<online::Invite> invites_;
    };
}

std::unique_ptr<online::Service> online::MakeSteam() { return std::make_unique<Steam>(); }

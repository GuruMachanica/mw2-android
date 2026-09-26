#include "service.h"
#include "../log.h"
#include "../console.h"
#include "../kernel/kernel.h"

online::Service* online::Get()
{
    static Service* const service = [] {
        static std::unique_ptr<Service> made = Create();
        if (made && !made->Start())
        {
            LOGW("online: the service did not start; the title stays offline");
            made.reset();
        }
        return made.get();
    }();
    return service;
}

bool online::Live()
{
    static const bool live = [] {
        auto* service = Get();
        return service && service->Lobbies();
    }();
    return live;
}

// What the System Link menu runs when the player opens it, before its server
// list types the host's connect line. Connect loads the player's stats if they
// are not loaded, but only once it is connecting, which the title refuses.
//
// A player signed in to Live has the Live stats loaded from the start, and the
// title asks such a player which stats to play system link with. The answer
// here is the Live ones: they are there already, and the rank is then the same
// in a private match and in system link.
namespace
{
    constexpr const char* kSystemLinkMenu[] = {
        "xblive_rankedmatch 0", "xblive_privatematch 0", "exec default_systemlink.cfg",
        "exec default_720p.cfg", "exec dvar_defaults.cfg", "xrequiresignin",
    };
    constexpr const char* kUseLiveStats = "set useonlinestats 1";
}

void online::Frame()
{
    auto* service = Get();
    if (!service) return;
    Invite invite;
    if (service->NextInvite(invite))
    {
        LOGI("online: joining a friend's Xbox LIVE %s", invite.fromInvite ? "invitation" : "session");
        kernel::AcceptInvite(invite.inviter, invite.session, invite.fromInvite);
    }
    std::string connect;
    if (!service->NextJoin(connect)) return;
    LOGI("online: joining a friend's game");
    if (Live()) console::RunNow(kUseLiveStats);
    for (const char* command : kSystemLinkMenu) console::RunNow(command);
    console::RunNow(connect.c_str());
}

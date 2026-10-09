// Reading where the player stands, and walking them somewhere.
//
// The address chain is the one the title's own `viewpos` command walks
// (sub_821237C0 in the multiplayer), which is the only place in the image that
// turns "the local player" into an address without going through the renderer.
// title.h holds the four numbers; everything here is arithmetic on them.
#include <ppc_recomp_shared.h>
#include "title.h"
#include "diagnostics.h"
#include "env.h"
#include "guest.h"
#include "log.h"
#include "player.h"
#include "console.h"

#if MW2_DIAGNOSTICS

#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <mutex>
#include <string>
#include <thread>
#include <unistd.h>
#include <vector>

namespace
{
    using Clock = std::chrono::steady_clock;

    // A place on a route, and what was done there: nothing, d-pad left, or the
    // right trigger, aimed at `yaw` and `pitch`.
    enum class Act { Walk, Left, Fire };
    struct Point { float x = 0, y = 0; Act act = Act::Walk; float yaw = 0, pitch = 0;
                   bool view = false; };   // a walked point that says where the player looked
    using Route = std::vector<Point>;

    float ReadFloat(uint32_t address)
    {
        return std::bit_cast<float>(uint32_t(*GuestPtr<be32>(address)));
    }

    uint32_t ReadWord(uint32_t address) { return *GuestPtr<be32>(address); }

    // A route recorded by playing it, one point per line: x y z yaw pitch
    // (older routes stop at yaw). Walking a
    // route once and writing down where the player went gives a path that is,
    // by construction, walkable; points pressed by hand at corners walked into
    // walls, because they say nothing about the ground between them.
    Route ReadRouteFile(const std::string& path)
    {
        Route out;
        std::FILE* f = std::fopen(path.c_str(), "r");
        if (!f) { LOGW("player: no route file at %s", path.c_str()); return out; }
        char line[256];
        while (std::fgets(line, sizeof line, f))
        {
            if (line[0] == '#' || line[0] == '\n') continue;
            Point p;
            float z = 0;
            char word[8] = {};
            if (std::sscanf(line, "%7s %f %f %f %f %f", word, &p.x, &p.y, &z, &p.yaw,
                            &p.pitch) == 6 && (!std::strcmp(word, "left") || !std::strcmp(word, "fire")))
            {
                p.act = word[0] == 'l' ? Act::Left : Act::Fire;
                out.push_back(p);
            }
            else if (int n = std::sscanf(line, "%f %f %f %f %f", &p.x, &p.y, &z, &p.yaw, &p.pitch);
                     n >= 2)
            {
                p.view = n == 5;
                out.push_back(p);
            }
        }
        std::fclose(f);
        LOGI("player: route of %zu points read from %s", out.size(), path.c_str());
        return out;
    }

    // MW2_WALK_PATH=<file>[,<file>...]: every route named, in order. More than
    // one because the map spawns each team at its own end, and a route recorded
    // from one spawn starts three thousand units from the other: give a route
    // per spawn, and the nearest is the one walked.
    const std::vector<Route>& Routes()
    {
        static const std::vector<Route> all = [] {
            std::vector<Route> out;
            const char* text = env::Text("MW2_WALK_PATH");
            if (!text) return out;
            const std::string list(text);
            for (size_t at = 0; at <= list.size(); )
            {
                const size_t comma = std::min(list.find(',', at), list.size());
                if (comma > at)
                {
                    Route route = ReadRouteFile(list.substr(at, comma - at));
                    if (!route.empty()) out.push_back(std::move(route));
                }
                at = comma + 1;
            }
            return out;
        }();
        return all;
    }

    // The target, and how close counts as arrived.
    struct Target
    {
        bool set = false;
        bool facing = false;              // a yaw to hold once there was given
        float x = 0, y = 0, radius = 96.0f, yaw = 0;
    };

    // MW2_WALK_TO="x,y[,radius[,yaw]]".
    const Target& Requested()
    {
        static const Target target = [] {
            Target t;
            const char* text = env::Text("MW2_WALK_TO");
            if (!text) return t;
            char* end = nullptr;
            t.x = float(std::strtod(text, &end));
            if (!end || *end != ',') return t;
            t.y = float(std::strtod(end + 1, &end));
            if (end && *end == ',')
            {
                const float given = float(std::strtod(end + 1, &end));
                if (given > 0.0f) t.radius = given;
                if (end && *end == ',')
                {
                    t.yaw = float(std::strtod(end + 1, nullptr));
                    t.facing = true;
                }
            }
            t.set = true;
            LOGI("player: walking to %.1f %.1f, arriving within %.0f units, then %s", t.x, t.y,
                 t.radius, t.facing ? "holding the yaw given" : "turning on the spot");
            return t;
        }();
        return target;
    }

    bool TracingViewpos()
    {
        static const bool on = env::Flag("MW2_TRACE_VIEWPOS");
        return on;
    }

    // The guard on the menu presses, whose cost when wrong is quitting the
    // user's match: ground covered is the one test that separates "a menu is
    // up" from "the player is walking", and past it nothing is pressed. A walk
    // that wedged itself against a rock froze just like a menu, and was taken
    // for one.
    constexpr float kPlayingAfter = 300.0f;
    // A jump no one could have walked is a spawn or a respawn, not a step.
    constexpr float kTeleport = 1500.0f;

    struct State
    {
        // The route, which with recorded routes is only known once the player
        // has spawned: which one to walk, and where along it to join, both
        // depend on where they came up.
        Target goal;
        Route via;                        // the corners before the goal
        bool routeChosen = false;
        Point lastSeen;                   // for telling a respawn from a step
        bool seenOnce = false;
        size_t leg = 0;
        Clock::time_point legAt;

        // Progress on the current leg: the nearest the walk has managed, and
        // when. Reset with the leg, because the next corner is further away than
        // the last one was close.
        float best = 1e30f;
        Clock::time_point bestAt, escapeUntil;
        int escapeSide = 1;
        unsigned escapes = 0;
        float escapeAngle = 90.0f;

        // Menus. Before the player spawns the position reads a fixed placeholder
        // and never moves by so much as a float; a spawned player's never holds
        // still, even standing. So a position that has not moved at all is a
        // menu waiting to be dismissed.
        player::Where still;
        Clock::time_point stillAt;
        bool pressing = false, spawned = false, playing = false;
        // The team selection: the first menu met once the position has left
        // the origin it reads before anything is loaded -- the map's own
        // camera is behind it.
        unsigned teamScreen = 0, freezes = 0;
        // A player seen moving by a step: until then the sticks stay still,
        // because on a menu the left stick moves the selection.
        bool alive = false;
        unsigned upsSent = 0, upWindow = ~0u;   // MW2_TEAM_UP's taps, and the last one's window
        Clock::time_point pressingSince;
        float travelled = 0.0f;

        // The action at the current leg: when it began (zero while walking to
        // it), and when the aim was first good.
        Clock::time_point actAt, aimedAt, pressAt;

        bool everLocated = false, arrived = false, pausing = false;
        Point joinedFrom;                       // where the player stood when the route was chosen
        Clock::time_point pauseUntil, lastLog;
        float closest = 1e30f;
        player::Where last;
    };
    State g;

    const Target& Goal() { return Requested().set ? Requested() : g.goal; }

    void StartLeg(Clock::time_point now, float distance = 1e30f)
    {
        g.legAt = now;
        g.best = distance;
        g.bestAt = now;
    }

    // Join a route at whichever of its points the player came up nearest, on
    // whichever route that is: a spawn in the middle of a recorded route walks
    // the rest of it rather than going back to the beginning. Chosen again after
    // a respawn, which comes up somewhere else.
    void ChooseRoute(float x, float y)
    {
        if (Routes().empty()) return;
        const float dx = x - g.lastSeen.x, dy = y - g.lastSeen.y;
        if (g.seenOnce && dx * dx + dy * dy > kTeleport * kTeleport) g.routeChosen = false;
        g.lastSeen = { x, y };
        g.seenOnce = true;
        if (g.routeChosen) return;

        size_t bestRoute = 0, bestPoint = 0;
        float best = 1e30f;
        for (size_t r = 0; r < Routes().size(); r++)
            for (size_t i = 0; i < Routes()[r].size(); i++)
            {
                const float px = Routes()[r][i].x - x, py = Routes()[r][i].y - y;
                if (px * px + py * py < best) { best = px * px + py * py; bestRoute = r; bestPoint = i; }
            }
        const Route& route = Routes()[bestRoute];
        g.via.assign(route.begin() + long(bestPoint), route.end());
        // The route ends where the player stopped when it was recorded, unless
        // MW2_WALK_TO names somewhere else to go afterwards.
        // A route that ends on something done there keeps it as its last leg,
        // and stands there afterwards facing the way it was done.
        if (!Requested().set)
        {
            g.goal = Target{};
            g.goal.set = true;
            g.goal.x = g.via.back().x;
            g.goal.y = g.via.back().y;
            if (g.via.back().act == Act::Walk) g.via.pop_back();
            else { g.goal.facing = true; g.goal.yaw = g.via.back().yaw; }
        }
        g.routeChosen = true;
        g.joinedFrom = { x, y };
        g.leg = 0;
        StartLeg(Clock::now());
        LOGI("player: at %.1f %.1f -- route %zu of %zu, joining at point %zu (%.0f units away),"
             " %zu legs to %.1f %.1f", x, y, bestRoute + 1, Routes().size(), bestPoint,
             std::sqrt(best), g.via.size(), Goal().x, Goal().y);
    }

    // The degrees still to turn, the short way round. The title's yaw is degrees
    // counter-clockwise from +x, the same convention atan2 answers in.
    float ShortestTurn(float want, float have)
    {
        float turn = want - have;
        while (turn > 180.0f) turn -= 360.0f;
        while (turn < -180.0f) turn += 360.0f;
        return turn;
    }

    // The right stick deflection for a turn. It has to clear the title's own
    // dead zone before it turns the view at all: a gentle correction is simply
    // ignored, and the bot then walks past the target with its yaw frozen. Right
    // stick to the positive side looks right, which counts yaw *down*, so the
    // stick takes the opposite sign to the turn wanted -- the other way round
    // the loop is stable at exactly the wrong heading.
    short TurnStick(float degrees)
    {
        if (std::fabs(degrees) < 1.5f) return 0;
        const float want = std::clamp(degrees / 45.0f, -1.0f, 1.0f) * 28000.0f;
        const float least = 14000.0f;
        return short(-(std::fabs(want) < least ? std::copysign(least, want) : want));
    }

    // Tracks spawning and ground covered, and when the player has been frozen
    // long enough to be looking at a menu, presses A. True when it took the
    // controls this poll.
    //
    // A, and only ever A: a safety property, not a tactic. Ending the match
    // takes START, which opens the pause menu, or a direction, which walks a
    // selection onto "End Game"; a run that never sends either cannot quit the
    // game, whatever screen it is on and however wrong its guess about which
    // screen that is. A takes the team and class already selected, "Choose
    // Class" in the in-game menu, and "No" on the End Game dialog.
    //
    // The one exception, asked for by name: MW2_TEAM_UP=<1 or 2> taps Up
    // that many times on the team selection -- the first menu met once the map's
    // camera is up -- before the A, so the run takes a team rather than Auto-assign, spawns on
    // the same side every time and walks the same route. Nowhere else: the
    // first menu is not one a direction can end the match from.
    unsigned TeamUps()
    {
        static const unsigned ups =
            unsigned(std::min<uint64_t>(env::Number("MW2_TEAM_UP", 0), 2));
        return ups;
    }

    bool DismissMenus(const player::Where& here, short axes[4], player::Press& press)
    {
        const auto now = Clock::now();
        if (here.x != g.still.x || here.y != g.still.y || here.z != g.still.z)
        {
            if (g.stillAt.time_since_epoch().count())
            {
                // The route chosen before this was chosen from the placeholder
                // the position reads until there is a player, and the first real
                // movement is the spawn: choose again from there.
                if (!g.spawned && !Routes().empty())
                {
                    g.routeChosen = false;
                    ChooseRoute(here.x, here.y);
                }
                g.spawned = true;
                const float step = std::hypot(here.x - g.still.x, here.y - g.still.y);
                if (step < 500.0f) g.travelled += step;
                // A player is there after a step, or after the jump off the
                // team selection's camera: before anything is loaded the
                // position reads the origin, on the team selection the map's
                // camera, neither moves by a hair, and the jump from the origin
                // to that camera is the only one before the spawn.
                const bool fromOrigin = g.still.x == 0.0f && g.still.y == 0.0f;
                if (step < 500.0f || !fromOrigin) g.alive = true;
                if (!g.playing && g.travelled > kPlayingAfter)
                {
                    g.playing = true;
                    LOGI("player: %.0f units covered -- in the world now, so no more menu"
                         " presses for the rest of the run", g.travelled);
                }
            }
            g.still = here;
            g.stillAt = now;
            if (g.pressing) { g.pressing = false; LOGI("player: moving again"); }
            return false;
        }
        // How long a position has to hold before it is taken for a menu: a
        // spawned player's never holds for even a frame, so a few seconds is
        // plenty, and every one of them is waited through at every menu.
        if (now - g.stillAt <= std::chrono::seconds(g.spawned ? 3 : 2)) return false;

        if (!g.pressing)
        {
            g.pressing = true;
            g.freezes++;
            if (!g.teamScreen && (here.x != 0.0f || here.y != 0.0f)) g.teamScreen = g.freezes;
            g.pressingSince = now;
            LOGI("player: frozen at %.1f %.1f %.1f -- pressing to get past whatever is waiting",
                 here.x, here.y, here.z);
        }
        // The route starts when the player does.
        g.leg = 0;
        g.legAt = now;
        // Sticks still while a menu is up: a physical pad left plugged in
        // drifts, and a drifting stick moves the selection under the press.
        axes[0] = axes[1] = axes[2] = axes[3] = 0;
        // Slowly: a menu needs time to come up before the press meant for it
        // arrives, and one that arrives between two screens is lost.
        if (((now - g.stillAt) / std::chrono::milliseconds(600)) % 2 == 0)
        {
            // Which press of this menu it is, counting from the first, in the
            // same windows the presses are held for.
            const auto window = [&](Clock::time_point at) {
                return unsigned((at - g.stillAt) / std::chrono::milliseconds(600)) / 2;
            };
            // Taps counted as they are sent, not windows as they pass: the
            // first window can be half gone by the time the menu is noticed.
            const unsigned w = window(now);
            const bool teamScreen = g.freezes == g.teamScreen && !g.playing;
            const auto into = (now - g.stillAt) % std::chrono::milliseconds(1200);
            if (teamScreen && g.upsSent < TeamUps())
            {
                // A tap, not the whole window: a direction held repeats and
                // runs the selection down the list.
                if (into < std::chrono::milliseconds(100))
                {
                    press = player::Press::Up;
                    if (w != g.upWindow) { g.upWindow = w; g.upsSent++; }
                }
                else press = player::Press::None;
            }
            else if (teamScreen && g.upsSent && w == g.upWindow)
                press = player::Press::None;   // not the A in the last tap's window
            else press = player::Press::A;
        }
        return true;
    }

    // Moves on to the next corner once this one is reached -- generously, and on
    // a timer, because a corner that cannot be got to must not hold up the rest
    // of the route. Returns where to head for now.
    Point NextCorner(const player::Where& here, const Target& goal, Clock::time_point now)
    {
        if (g.legAt.time_since_epoch().count() == 0) g.legAt = now;
        if (g.leg >= g.via.size()) return { goal.x, goal.y };
        const Point corner = g.via[g.leg];
        // An action is left by Act, once done.
        if (corner.act != Act::Walk) return corner;
        const float reach = std::hypot(corner.x - here.x, corner.y - here.y);
        // A corner is there to get the route round a building, and leaving one
        // early because the target is nearer in a straight line walks into the
        // building the corner was named for.
        // MW2_WALK_REACH=<units>: how near counts. A route recorded with points
        // closer together than this is cut short at every turn. A point with
        // its view is walked straight at, so it can be held to closely.
        static const float given = float(env::Real("MW2_WALK_REACH"));
        const float near = given > 0.0f ? given : corner.view ? 24.0f : 140.0f;
        // Gone by counts as well: a point missed by more than that is behind,
        // and turning back for it circles it.
        const Point from = g.leg > 0 ? g.via[g.leg - 1] : g.joinedFrom;
        const bool passed = (here.x - corner.x) * (corner.x - from.x) +
                            (here.y - corner.y) * (corner.y - from.y) > 0.0f;
        if (reach >= near && !passed && now - g.legAt <= std::chrono::seconds(90)) return corner;

        LOGI("player: leaving corner %zu at %.1f %.1f, %.0f units from it", g.leg, here.x,
             here.y, reach);
        g.leg++;
        StartLeg(now);
        // MW2_WALK_PAUSE=<seconds>: stand still at every corner. A still camera
        // is the only one a flash can be told apart from motion on.
        static const double pause = env::Real("MW2_WALK_PAUSE");
        if (pause > 0.0)
            g.pauseUntil = now + std::chrono::duration_cast<Clock::duration>(
                                     std::chrono::duration<double>(pause));
        return g.leg < g.via.size() ? g.via[g.leg] : Point{ goal.x, goal.y };
    }

    // The pitch the right stick's Y has to push for. The title's pitch counts
    // down as positive, and stick up looks up, so like the turn the stick takes
    // the opposite sign.
    short PitchStick(float degrees) { return TurnStick(degrees); }

    // At a recorded `left` or `fire`: get to the place -- closely for a shot,
    // since the aim was taken from there -- stand, turn to the aim, press, and
    // wait for the switch or the round's flight. A place that cannot be got to
    // in twenty seconds is acted on from wherever the walk got. True while this
    // holds the controls.
    bool DoAction(const player::Where& here, Clock::time_point now, short axes[4],
                  player::Press& press)
    {
        if (g.leg >= g.via.size() || g.via[g.leg].act == Act::Walk) return false;
        const Point& at = g.via[g.leg];
        const float reach = std::hypot(at.x - here.x, at.y - here.y);
        const float close = at.act == Act::Fire ? 24.0f : 96.0f;
        if (!g.actAt.time_since_epoch().count())
        {
            if (reach > close && now - g.legAt < std::chrono::seconds(20)) return false;
            g.actAt = now;
            g.aimedAt = g.pressAt = {};
            LOGI("player: at %.1f %.1f %.1f, %.0f units from where the route %s -- aiming at yaw"
                 " %.1f pitch %.1f", here.x, here.y, here.z, reach,
                 at.act == Act::Fire ? "fired" : "pressed left", at.yaw, at.pitch);
        }
        axes[0] = axes[1] = 0;
        // Both angles read 0..360 -- pitch 290 is 70 degrees up -- so both go the short way.
        const float yaw = ShortestTurn(at.yaw, here.yaw), pitch = ShortestTurn(at.pitch, here.pitch);
        axes[2] = TurnStick(yaw);
        axes[3] = PitchStick(pitch);
        const bool aimed = at.act == Act::Left || (!axes[2] && !axes[3]);
        if (!aimed) g.aimedAt = {};
        else if (!g.aimedAt.time_since_epoch().count()) g.aimedAt = now;
        // Held on target a moment, so the view has stopped when the press comes;
        // an aim that will not settle is fired anyway after eight seconds.
        const bool settled = (g.aimedAt.time_since_epoch().count() &&
                              now - g.aimedAt > std::chrono::milliseconds(300)) ||
                             now - g.actAt > std::chrono::seconds(8);
        if (!settled) return true;
        if (!g.pressAt.time_since_epoch().count()) g.pressAt = now;
        static constexpr auto kPress = std::chrono::milliseconds(300);
        static constexpr auto kAfter = std::chrono::milliseconds(2500);
        if (now - g.pressAt < kPress)
        {
            press = at.act == Act::Fire ? player::Press::Fire : player::Press::Left;
            return true;
        }
        if (now - g.pressAt < kPress + kAfter) return true;
        LOGI("player: %s at %.1f %.1f %.1f, yaw %.1f pitch %.1f (asked %.1f %.1f)",
             at.act == Act::Fire ? "fired" : "pressed left", here.x, here.y, here.z, here.yaw,
             here.pitch, at.yaw, at.pitch);
        g.actAt = g.pressAt = {};
        g.leg++;
        StartLeg(now);
        return true;
    }

    // Progress is measured against the target, not the ground: a bot sliding
    // along a rock face moves as fast as one walking and gets nowhere. Nothing
    // gained in eight seconds means back off and go round -- alternating sides
    // and widening the angle, so a place that defeats a sidestep gets a
    // half-turn before another sidestep. Returns the bearing to walk on.
    float GoRound(float bearing, float distance, const player::Where& here,
                  Clock::time_point now, bool& backing, player::Press& press)
    {
        if (distance < g.best - 40.0f) { g.best = distance; g.bestAt = now; }
        if (g.bestAt.time_since_epoch().count() == 0) g.bestAt = now;
        backing = false;
        if (g.escapeUntil > now)
        {
            // Back off for the first part: turning on the spot against a rock
            // and walking again walks into the same rock.
            backing = g.escapeUntil - now > std::chrono::milliseconds(2500);
            if (((g.escapeUntil - now) / std::chrono::milliseconds(400)) % 2 == 0)
                press = player::Press::A;
            return bearing + g.escapeSide * g.escapeAngle;
        }
        if (now - g.bestAt > std::chrono::seconds(8))
        {
            static constexpr float kAngles[] = { 90.0f, 135.0f, 60.0f, 170.0f };
            g.escapeSide = -g.escapeSide;
            g.escapeAngle = kAngles[g.escapes % 4];
            g.escapes++;
            g.escapeUntil = now + std::chrono::milliseconds(4000);
            g.bestAt = now;
            g.best = distance;
            LOGI("player: no closer than %.0f units for eight seconds at %.1f %.1f %.1f;"
                 " backing off and going round to the %s at %.0f degrees", distance,
                 here.x, here.y, here.z, g.escapeSide < 0 ? "left" : "right", g.escapeAngle);
        }
        return bearing;
    }
}

bool player::Walking() { return Goal().set || !Routes().empty(); }
bool player::Wanted()  { return Walking() || TracingViewpos(); }
bool player::Arrived() { return g.arrived; }
bool player::Pausing() { return g.pausing; }

// How long the walk has been getting no nearer. Zero until the player has
// spawned and started walking.
double player::SecondsSinceProgress()
{
    if (!g.spawned || !Goal().set || g.bestAt.time_since_epoch().count() == 0) return 0.0;
    return std::chrono::duration<double>(Clock::now() - g.bestAt).count();
}

// Writing down a route while someone walks it, on a thread of its own, so
// nothing about the game's input or timing changes. A point is kept when the
// player has moved far enough from the last one to be a separate leg: closer
// and the replay spends its time declaring legs reached, further and it cuts
// corners through walls.
namespace
{
    // The route being recorded, shared by the thread that writes the places
    // and the input poll that writes what was pressed at them.
    std::mutex g_recordLock;
    std::FILE* g_record = nullptr;
}

void player::SawPad(uint16_t buttons, uint8_t rightTrigger)
{
    static uint16_t was = 0;
    static bool pulled = false;
    constexpr uint16_t kLeft = 0x0004;
    const bool left = (buttons & kLeft) && !(was & kLeft);
    const bool fire = rightTrigger > 128 && !pulled;
    was = buttons;
    pulled = rightTrigger > 128;
    if (!left && !fire) return;
    Where here;
    if (!Locate(here)) return;
    const char* what = fire ? "fire" : "left";
    LOGI("player: %s at %.1f %.1f %.1f, yaw %.2f pitch %.2f", fire ? "fired" : "pressed left",
         here.x, here.y, here.z, here.yaw, here.pitch);
    std::lock_guard held(g_recordLock);
    if (!g_record) return;
    std::fprintf(g_record, "%s %.1f %.1f %.1f %.2f %.2f\n", what, here.x, here.y, here.z,
                 here.yaw, here.pitch);
    std::fflush(g_record);
}

// A flight: where the camera was and when, twenty times a second, and the
// replay puts it back there with the title's own setviewpos every few
// milliseconds -- through the air and through walls, which no pad can be made
// to do, and to the same places at the same moments every run. Only where the
// title takes setviewpos, which the multiplayer one does not.
namespace
{
    struct Moment { double t; player::Where at; };

    // The seconds count from the first poll that finds a player, in the
    // recording and in the replay alike.
    void RecordFlight(const char* path)
    {
        std::FILE* f = std::fopen(path, "w");
        if (!f) { LOGE("player: cannot write the flight to %s", path); return; }
        std::fprintf(f, "# seconds x y z yaw pitch -- recorded flight, replay with MW2_FLY_PATH\n");
        LOGI("player: recording the flight to %s", path);
        std::thread([f] {
            Clock::time_point from{};
            for (;;)
            {
                std::this_thread::sleep_for(std::chrono::milliseconds(50));
                player::Where here;
                if (!player::Locate(here)) continue;
                const auto now = Clock::now();
                if (from.time_since_epoch().count() == 0) from = now;
                std::fprintf(f, "%.3f %.1f %.1f %.1f %.2f %.2f\n",
                             std::chrono::duration<double>(now - from).count(), here.x, here.y,
                             here.z, here.yaw, here.pitch);
                std::fflush(f);
            }
        }).detach();
    }

    float Between(float a, float b, float part) { return a + (b - a) * part; }
    // Angles the short way round, so 350 to 10 passes through 0.
    float Turned(float a, float b, float part) { return a + ShortestTurn(b, a) * part; }

    void Fly(const char* path)
    {
        std::vector<Moment> flight;
        if (std::FILE* f = std::fopen(path, "r"))
        {
            char line[256];
            Moment m;
            while (std::fgets(line, sizeof line, f))
                if (std::sscanf(line, "%lf %f %f %f %f %f", &m.t, &m.at.x, &m.at.y, &m.at.z,
                                &m.at.yaw, &m.at.pitch) == 6)
                    flight.push_back(m);
            std::fclose(f);
        }
        if (flight.size() < 2) { LOGW("player: no flight to replay in %s", path); return; }
        LOGI("player: flight of %zu moments over %.1f s read from %s", flight.size(),
             flight.back().t, path);
        std::thread([flight = std::move(flight)] {
            player::Where here;
            while (!player::Locate(here)) std::this_thread::sleep_for(std::chrono::milliseconds(5));
            const auto from = Clock::now();
            LOGI("player: the flight starts");
            size_t i = 0;
            for (;;)
            {
                const double t = std::chrono::duration<double>(Clock::now() - from).count();
                if (t >= flight.back().t) break;
                while (flight[i + 1].t <= t) i++;
                const Moment& a = flight[i];
                const Moment& b = flight[i + 1];
                const float part = float((t - a.t) / (b.t - a.t));
                char text[160];
                std::snprintf(text, sizeof text, "setviewpos %.1f %.1f %.1f %.2f %.2f",
                              Between(a.at.x, b.at.x, part), Between(a.at.y, b.at.y, part),
                              // The title's teleport lifts whoever it moves by one unit.
                              Between(a.at.z, b.at.z, part) - 1.0f, Turned(a.at.yaw, b.at.yaw, part),
                              Turned(a.at.pitch, b.at.pitch, part));
                console::Place(text);
                std::this_thread::sleep_for(std::chrono::milliseconds(4));
            }
            if (player::Locate(here))
                LOGI("player: the flight is over, at %.1f %.1f %.1f yaw %.1f pitch %.1f; it was"
                     " recorded ending at %.1f %.1f %.1f yaw %.1f pitch %.1f", here.x, here.y,
                     here.z, here.yaw, here.pitch, flight.back().at.x, flight.back().at.y,
                     flight.back().at.z, flight.back().at.yaw, flight.back().at.pitch);
            g.arrived = true;
        }).detach();
    }
}

void player::Record()
{
    if (const char* flight = env::Text("MW2_RECORD_FLIGHT")) RecordFlight(flight);
    if (const char* flight = env::Text("MW2_FLY_PATH")) Fly(flight);
    const char* path = env::Text("MW2_RECORD_PATH");
    if (!path) return;
    const float spacing = float(env::Real("MW2_RECORD_SPACING", 110.0));
    std::FILE* f = std::fopen(path, "w");
    if (!f) { LOGE("player: cannot write the route to %s", path); return; }
    std::fprintf(f, "# x y z yaw pitch -- recorded route, replay with MW2_WALK_PATH;"
                    " `left`/`fire` lines are presses\n");
    std::fflush(f);
    g_record = f;
    LOGI("player: recording the route to %s, a point every %.0f units", path, spacing);
    std::thread([f, spacing] {
        const long header = std::ftell(f);
        Where last{};
        bool have = false;
        size_t kept = 0;
        for (;;)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
            Where here;
            if (!Locate(here)) continue;
            const float dx = here.x - last.x, dy = here.y - last.y;
            const float square = dx * dx + dy * dy;
            if (have && square < spacing * spacing) continue;
            std::lock_guard held(g_recordLock);
            // The route starts at the spawn: what came before it is the menu, or
            // a life that ended.
            if (have && square > kTeleport * kTeleport)
            {
                LOGI("player: spawned at %.1f %.1f -- the route starts here", here.x, here.y);
                std::fseek(f, header, SEEK_SET);
                if (ftruncate(fileno(f), header) != 0) { /* best effort */ }
                kept = 0;
            }
            std::fprintf(f, "%.1f %.1f %.1f %.1f %.1f\n", here.x, here.y, here.z, here.yaw,
                         here.pitch);
            std::fflush(f);   // a run that ends in a crash still leaves its route
            last = here; have = true;
            if (++kept % 25 == 0) LOGI("player: %zu route points so far", kept);
        }
    }).detach();
}

bool player::Locate(Where& out)
{
    if (!T_DATA_ClientStates) return false;          // not derived for this title

    // The title's own viewpos walks a local-client index into a table of slots
    // and multiplies by the state size. The index reads -1 here for the length of
    // a match and the answer still comes out right, because a client with one
    // local player is slot zero and zero is where the array starts -- so the
    // indirection is not worth reproducing.
#ifdef T_CLIENT_STATES_ARE_HERE
    const uint32_t client = T_DATA_ClientStates;
#else
    const uint32_t client = ReadWord(T_DATA_ClientStates);
#endif
    if (!client) return false;
    // The same field viewpos checks before printing: zero until there is a player.
    if (!ReadWord(client + T_CLIENT_VALID)) return false;

    out.x = ReadFloat(client + T_CLIENT_ORIGIN);
    out.y = ReadFloat(client + T_CLIENT_ORIGIN + 4);
    out.z = ReadFloat(client + T_CLIENT_ORIGIN + 8);
    out.pitch = ReadFloat(client + T_CLIENT_ANGLES);
    out.yaw = ReadFloat(client + T_CLIENT_ANGLES + 4);
    // A state being written as it is read, or one that has never been written.
    if (!std::isfinite(out.x) || !std::isfinite(out.y) || !std::isfinite(out.yaw))
        return false;
    return std::fabs(out.x) < 1e6f && std::fabs(out.y) < 1e6f;
}

bool player::Steer(short axes[4], Press& press)
{
    press = Press::None;
    if (!Wanted()) return false;
    Where here;
    if (!Locate(here)) return false;
    ChooseRoute(here.x, here.y);
    const Target& goal = Goal();
    if (!goal.set && !TracingViewpos()) return false;
    const auto now = Clock::now();
    g.everLocated = true;
    g.last = here;

    // Arrival before the menu check: a bot that has arrived and is holding
    // still would otherwise be taken for a menu and press.
    const bool standing = g.spawned && std::hypot(goal.x - here.x, goal.y - here.y) <= goal.radius;
    // Nor while aiming: a player standing still to take a shot is not a menu.
    const bool acting = g.actAt.time_since_epoch().count() != 0;
    if (!standing && !acting && DismissMenus(here, axes, press)) return true;
    if (!g.alive)
    {
        // The team selection shows the map's camera, which reads like a player
        // standing somewhere: steering then ran the selection up the list.
        axes[0] = axes[1] = axes[2] = axes[3] = 0;
        return true;
    }

    if (TracingViewpos() && now - g.lastLog > std::chrono::seconds(1))
    {
        g.lastLog = now;
        LOGI("player: at %.1f %.1f %.1f, yaw %.1f pitch %.1f", here.x, here.y, here.z,
             here.yaw, here.pitch);
    }
    if (!goal.set) return false;

    const Point to = NextCorner(here, goal, now);
    if (now < g.pauseUntil)
    {
        // Standing, and not counted as getting nowhere.
        axes[0] = axes[1] = axes[2] = axes[3] = 0;
        g.legAt = now;
        g.bestAt = now;
        g.pausing = true;
        return true;
    }
    g.pausing = false;
    if (DoAction(here, now, axes, press)) return true;

    const float dx = to.x - here.x, dy = to.y - here.y;
    const float distance = std::sqrt(dx * dx + dy * dy);
    // Only once there is a player: before the spawn the position is a fixed
    // point, and its distance is not an approach the run made.
    const float toGoal = std::hypot(goal.x - here.x, goal.y - here.y);
    if (g.spawned && toGoal < g.closest) g.closest = toGoal;

    if (g.leg >= g.via.size() && distance <= goal.radius)
    {
        if (!g.arrived)
        {
            g.arrived = true;
            LOGI("player: arrived at %.1f %.1f %.1f, %.0f units from the target",
                 here.x, here.y, here.z, distance);
        }
        // With a yaw given, hold it; without one, turn slowly and forever, so one
        // run sees the whole horizon from here.
        axes[0] = axes[1] = axes[3] = 0;
        axes[2] = goal.facing ? TurnStick(ShortestTurn(goal.yaw, here.yaw)) : short(6000);
        return true;
    }
    g.arrived = false;

    bool backing = false;
    const float bearing = GoRound(std::atan2(dy, dx) * 57.2957795f, distance, here, now,
                                  backing, press);
    const float turn = ShortestTurn(bearing, here.yaw);
    // Turn hard when far off and walk whenever the target is anywhere ahead:
    // turning while walking follows a curve, which gets out of the corners that
    // turning on the spot gets stuck in.
    axes[2] = TurnStick(turn);
    axes[1] = backing ? short(-30000) : (std::fabs(turn) < 60.0f ? short(32000) : short(12000));
    // Slowly onto the spot a shot was taken from: at a run the walk circles
    // a point it has to stand within a couple of feet of.
    if (!backing && g.leg < g.via.size() && g.via[g.leg].act != Act::Walk && distance < 150.0f)
        axes[1] = std::min<short>(axes[1], 12000);
    axes[0] = 0;
    axes[3] = 0;
    // A point recorded with its view: look where the player looked and move
    // straight at the point with the left stick, whichever way that is from
    // the view. Turning to face each point instead swings wide of it, and the
    // walk then meets what the player went round. Not while going round
    // something itself, which steers by turning.
    if (to.view && !backing && g.escapeUntil <= now)
    {
        const float off = ShortestTurn(std::atan2(dy, dx) * 57.2957795f, here.yaw) / 57.2957795f;
        axes[0] = short(-32000.0f * std::sin(off));
        axes[1] = short(32000.0f * std::cos(off));
        axes[2] = TurnStick(ShortestTurn(to.yaw, here.yaw));
        axes[3] = PitchStick(ShortestTurn(to.pitch, here.pitch));
    }
    return true;
}

void player::Report()
{
    if (!Goal().set && !TracingViewpos()) return;
    if (!g.everLocated)
    {
        LOGI("player: never located -- the run did not reach the world");
        return;
    }
    LOGI("player: last at %.1f %.1f %.1f, yaw %.1f; closest approach %.0f units,"
         " %u times going round something%s",
         g.last.x, g.last.y, g.last.z, g.last.yaw, g.closest == 1e30f ? 0.0f : g.closest,
         g.escapes, g.arrived ? " (arrived)" : "");
}
#endif

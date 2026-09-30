# Multiplayer

The disc carries two programs. `default.xex` is the campaign and special ops;
`default_mp.xex` is the multiplayer, a separate build of the same engine with its
own fastfiles, menus and maps. The runtime is the same for both; what differs is
the recompiled tree it is linked against and the table of guest addresses it
hooks.

    TITLE=mp ./build.sh
    MW2_CONSOLE="8:map mp_afghan" ./build-mp/mw2 mw2/default_mp.pe mw2/game

## One runtime, two titles

| | campaign | multiplayer |
|---|---|---|
| executable | `mw2/default.xex` | `mw2/default_mp.xex` |
| flat image | `mw2/default.pe` | `mw2/default_mp.pe` |
| recompiler config | `config/MW2.toml` | `config/MW2MP.toml` |
| switch tables | `config/mw2_switch_tables.toml` | `config/mw2mp_switch_tables.toml` |
| generated C++ | `ppc/` | `ppc_mp/` |
| build directory | `build/` (`build-release/`) | `build-mp/` (`build-mp-release/`) |

`build.sh` takes `TITLE=sp` (the default) or `TITLE=mp`. CMake takes
`-DMW2_TITLE=sp|mp`, which selects the recompiled tree and, for `mp`, defines
`MW2_TITLE_MP`. The Python tools make the same choice through the `MW2_TITLE`
environment variable (`tools/title.py`), which reads the PE section table from
the image because the two executables lay their sections out differently.

`config/MW2MP.toml` has its own `[main]` block: the multiplayer's addresses of
the register save/restore helpers and of `setjmp`/`longjmp`, and its own list
of jump-table functions (`tools/fixbounds.py`).

### `runtime/title.h`

Every function in the two images sits at a different address. `runtime/title.h`
is the only place the runtime names guest addresses; everything else refers to
`T_*` entries through macros:

| macro | expands to |
|---|---|
| `GUEST_FUNC(T_x)` | the recompiled function, `sub_<addr>` |
| `GUEST_ORIG(T_x)` | the original once hooked, `__imp__sub_<addr>` |
| `GUEST_HOOK(T_x) { ... }` | declares the original and defines the hook |
| `GUEST_ADDR(T_x)`, `GUEST_NAME(T_x)` | the address as a number, and as a log string |

A function entry is bare hex so it can be pasted onto `sub_`. A data entry
(`T_DATA_*`) is an ordinary constant and is zero where the address is not known
for a title; code that reads one checks for zero. A function not located in one
title has no entry there, and the hook naming it is compiled out under `#ifdef`
(`T_DB_MissingAsset` in the multiplayer). The client-state offsets used by the
walk autopilot are known only for the multiplayer, since the campaign accepts
`setviewpos`; the save-device table is known only for the campaign.

### `tools/find_in_title.py`

Locates the other executable's copy of a function by code, not by name. The two
images are one engine linked twice, so a function's instructions match except
for what the linker filled in: branch displacements and the 16-bit halves of
absolute addresses. Masking those out of the first N words gives a signature;
a unique match with the same `.pdata` size is the same function.

    tools/find_in_title.py 820C3390 8227CF18     # campaign -> multiplayer
    tools/find_in_title.py --table               # every T_ entry in title.h
    tools/find_in_title.py --reverse 823FF900    # multiplayer -> campaign

Several matches mean the first words are a common prologue; `--words` uses more.
A unique match of a different size needs reading before it is trusted.

## What the multiplayer needs from the runtime

**Every fastfile.** The campaign loads the level it is told to; the multiplayer
chooses its own map and zones. A zone whose file is missing makes the title
report a dirty disc and fail, so `build.sh` and the installer extract every
`.ff` and `.pak` on the disc (about 5.9 GB), and the campaign's Bink movies
beside them ([gameplay.md](gameplay.md#movies)); the multiplayer plays none.

**A network link.** The multiplayer refuses to start any match without one, and
a system-link match is how it reaches a map. `XNetGetEthernetLinkStatus`
(`runtime/kernel/net.cpp`) reports an active 100 Mb/s full-duplex link in the
multiplayer build and no link in the campaign build; `MW2_NET_LINK=0|1`
overrides either.

**Sessions through XAM.** The title's session, matchmaking and statistics calls
reach the kernel as XAM messages through `XMsgStartIORequest`, not as imports of
their own. `XSessionCreate` is app `0xFB`, message `0x000B0010`, with a 28-byte
buffer `{ session, flags, public slots, private slots, xuid, session info out,
nonce out }`. `runtime/kernel/xam.cpp` fills the 60-byte `XSESSION_INFO`: an
8-byte session id, the 36-byte `XNADDR` from `XNetGetTitleXnAddr`, and a 16-byte
key. It must be filled: the title reads the session back, and an all-zero id is
treated as a Live error (`Com_Error(XBOXLIVE_LIVEERROR)`). A session id's top
bits mark its kind: clear for system link, `0x80` for a Live session. A session
asking for Live features (presence, stats, matchmaking, arbitration) is refused
with `X_ONLINE_E_SESSION_NOT_LOGGED_ON` unless the online service carries
lobbies, and the title then takes its offline path.

**Occlusion queries.** The renderer issues them (the sun glare test) and a job
worker polls for the result, so `EVENT_WRITE_ZPD` must always write its
sample-count record. See [rendering.md](rendering.md).

**No `setviewpos`.** The multiplayer refuses it, so a spot is reached by walking
there (`MW2_WALK_TO`, `MW2_WALK_PATH`; [switches.md](switches.md)).

## The online service

What the title's network calls reach is a backend chosen at build time,
declared in `runtime/online/service.h`. The kernel side (`kernel/net.cpp`,
`kernel/xam.cpp`) keeps everything Xbox-shaped -- `XNADDR`s, session keys,
sockets, ports -- and asks the service only for what a service does:

| call | purpose |
|---|---|
| `Start()` | log in; false leaves the title offline |
| `LocalId()` | where other players reach this one; unique and stable for the run |
| `Account()` | who the player is, stable across runs; the XUIDs are built from it |
| `LocalName()` | the name other players see (the title shows 15 characters) |
| `Send`, `Broadcast`, `Receive` | unreliable datagrams, addressed by the title's own port numbers; broadcast reaches everyone who could join, never self |
| `Advertise`, `NextJoin`, `InviteFriends` | optional: system-link invitations as the title's `connect` console line |
| `Lobbies`, `SetJoinable`, `NextInvite` | optional: Xbox LIVE parties and private matches |

    ONLINE=none  TITLE=mp ./build.sh    # default: system link on this machine
    ONLINE=lan   TITLE=mp ./build.sh    # plain UDP between machines
    ONLINE=steam TITLE=mp ./build.sh    # through the player's Steam client

A backend is one file, `runtime/online/<name>.cpp`, defining `online::Create()`;
`ONLINE=<name>` (CMake `MW2_ONLINE`) builds it. `none` returns no service, and
the title's sockets are host UDP sockets, enough for system link on one machine.

With a service built in, the title's sockets are the service's and nothing is
bound on the host, so several copies can run on one machine. A peer's 64-bit id
travels inside its `XNADDR` (in `abOnline`, behind the tag `MW2O`), and
`XNetXnAddrToInAddr` hands the title a stand-in IPv4 address in `10.0.0.0/8`
for it. Datagrams to a stand-in address or to broadcast go to the service;
datagrams to this machine's own address come straight back.

`online::Frame()` runs once a frame on the title's main thread (from
`XamInputGetState`). It hands an accepted Live invitation to the kernel, or, for
a system-link join, types the commands the System Link menu would run followed
by the host's `connect` line.

A system-link host logs the line another machine joins with:
`online: hosting; another machine joins with "connect <xnaddr> <key> <id>
<public> <private> <nonce>"` -- the same command the title's server browser
issues after a search. `MW2_TRACE_ONLINE=1` logs every datagram through the
service (diagnostic builds).

### LAN

`runtime/online/lan.cpp`: plain UDP on the local network. Each copy sends from a
port of its own, the first free one above the shared port; broadcasts go to the
shared port, `MW2_LAN_PORT` (3074). A peer id is the IPv4 address in the top
bits and the port in the low 16. The player is `MW2_NAME`, or the login name.
The account is a hash of the name plus the copy's port slot, so a second copy
on one machine is a second player.

Every copy announces who it is and what can be joined once a second on the
shared port. `MW2_LAN_JOIN=<name>` joins that player's party or lobby as soon as
it is seen, as choosing a friend and "Join Session" does on the console. The
lobby's "Invite friends" invites every player seen; a copy started with
`MW2_LAN_ACCEPT=1` accepts.

### Steam

`runtime/online/steam.cpp` talks to the Steam client the player already runs.
It loads the client library from the install -- the usual location, the snap,
the Flatpak, or `MW2_STEAMCLIENT` on Linux; `steamclient64.dll` from the
registry's `SteamPath` on Windows -- and calls its versioned interfaces through
their vtables, as `libsteam_api` does. Nothing of Valve's is built in or
shipped; the Steamworks SDK is a reference for slots and structures only.

The game runs as Spacewar, app 480 (`MW2_STEAM_APPID`). The app id is put in the
environment before the library loads, because the client reads it at load time
and its networking has no interface to give otherwise. Environment variables the
client adds for SDL are taken back, since they would hide every physical
controller from a game Steam did not start.

- Players are SteamIDs; datagrams are `ISteamNetworkingMessages`, with the
  channel carrying the title's port.
- Every player starts in a friends-only lobby of their own. The lobby is what
  the title's broadcasts reach, so a game a member hosts shows in every other
  member's System Link list. Networking sessions are accepted only from lobby
  members, since Spacewar is shared by everyone.
- F6, or the Xbox LIVE lobby's "Invite friends", opens the overlay's
  invitation; a friend can also be invited from Steam's friend list. Accepting
  moves the friend into the host's lobby.
- The host's lobby data carries what joins its game: `xsession`, the Xbox LIVE
  party or private match the host is in, which the friend's copy takes as an
  accepted Live invitation; otherwise `connect`, the host's system-link join
  line, which the friend's copy types. Either is acted on once per lobby
  entered.
- Steam cannot launch the game from an invitation (it would start Spacewar), so
  the friend must already be running it.

## Xbox LIVE private matches

A service whose `Lobbies()` is true (lan and steam) has the player signed in to
Xbox LIVE, which opens PLAY ONLINE: the party, PRIVATE MATCH, the lobby, START
GAME. No Live service is involved; `runtime/kernel/xam.cpp` answers what the
title asks:

| | signed in to Live | offline (`none`) |
|---|---|---|
| sign-in state | 2, Live-enabled | 1, local |
| XUID | online `0x0009` over the account's low 48 bits; offline `0xE0...` over the same bits | offline `0xE0...` |
| privileges | all granted | all denied |

Signed in, every new notification listener for the Live area hears
`XN_LIVE_CONNECTIONCHANGED` (connection established), since the connection came
up before the title was listening. `XOnlineGetNatType` reports an open NAT.

**Sessions** are kept by session object. The newest one this machine hosts with
presence and invitations enabled -- the party's in the Xbox LIVE menu, the
private match's in its lobby -- is the joinable session; its 60-byte
`XSESSION_INFO` is handed to the service (`SetJoinable`) whenever sessions
change. The host logs the console line that joins it:
`online: joinable; another machine joins with "xpartyjoin <xnaddr> <key> <id>"`.

**Invitations** the service returns (`NextInvite`) become the console's accepted
invitation: `XN_LIVE_INVITE_ACCEPTED` is posted, then `XInviteGetAcceptedInfo`
returns it. One accepted before the title listens waits for its first Live
listener.

**Live storage** is on this machine under `saves/online/` (see
[saves.md](saves.md)). The title names files by server path
(`//title.<id>/t:<id>/<file>`, `//tuser.<id>/u:<xuid>/<id>/<file>`):

| directory | contents |
|---|---|
| `title/` | the title's own files -- message of the day, `playlists.info`. Nothing publishes them, so each reads as empty |
| `user/<xuid>/` | what the title uploads: the player's multiplayer rank and stats (`mpdata`), starting at level 1 |

Enumerations of Live title servers and downloadable content end at once, empty.

When a Live-signed-in player joins a system-link game, the title asks which
stats to use; the automatic join answers Live (`set useonlinestats 1`), so the
rank is the same in private matches and system link. With `none`, the Live menu
refuses as signed out.

## Switches

| switch | effect |
|---|---|
| `TITLE=sp\|mp` | `build.sh`: which executable to build |
| `ONLINE=none\|lan\|steam` | `build.sh`: which online service to build in |
| `MW2_NET_LINK=0\|1` | Ethernet link reported down or up (default: up in the multiplayer, down in the campaign) |
| `MW2_NAME` | lan: the player's name |
| `MW2_LAN_PORT` | lan: the shared broadcast port (3074) |
| `MW2_LAN_JOIN=<name>` | lan: join that player's party or lobby when seen |
| `MW2_LAN_ACCEPT=1` | lan: accept invitations |
| `MW2_STEAMCLIENT=<path>` | steam: the client library to load |
| `MW2_STEAM_APPID` | steam: the app id to run as (480) |
| `MW2_TRACE_ONLINE=1` | log every datagram (diagnostic builds) |

The full list is in [switches.md](switches.md).

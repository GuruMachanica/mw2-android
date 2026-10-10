package com.mw2.recomp

import android.content.Context
import android.content.SharedPreferences

/**
 * Everything the player can change, in one place, with the defaults a weak
 * phone wants. Most of these end up as one of the runtime's MW2_* switches
 * (docs/switches.md) the moment a run starts.
 */
class Prefs(context: Context) {

    private val store: SharedPreferences =
        context.applicationContext.getSharedPreferences("mw2", Context.MODE_PRIVATE)

    // ---- graphics ---------------------------------------------------------

    /**
     * The fraction of the screen the game actually renders at. The surface is
     * told to be that many pixels (SurfaceHolder.setFixedSize) and the
     * compositor scales it up, which costs nothing: the phone's display
     * pipeline does that anyway. At 0.7 a 1080p phone renders 756p, close to
     * the console's own, and it is the single biggest thing a weak device can
     * be given.
     */
    var resolutionScale: Float
        get() = store.getFloat(KEY_RESOLUTION, 0f).let { if (it <= 0f) 0.7f else it }
        set(value) = store.edit().putFloat(KEY_RESOLUTION, value.coerceIn(0.35f, 1.0f)).apply()

    /**
     * Internal Vulkan render scale multiplier (MW2_SCALE):
     * 1 = 1x native base dimensions, 2 = 2x multiplier, 3 = 3x multiplier.
     */
    var renderScale: Int
        get() = store.getInt(KEY_RENDER_SCALE, 1).coerceIn(1, 3)
        set(value) = store.edit().putInt(KEY_RENDER_SCALE, value.coerceIn(1, 3)).apply()

    /** Multisampling. Off by default: it is pure cost on a tiled GPU. */
    var multisampling: Boolean
        get() = store.getBoolean(KEY_MSAA, false)
        set(value) = store.edit().putBoolean(KEY_MSAA, value).apply()

    /**
     * How much of the phone's memory the texture cache may hold. Zero means
     * "let the runtime decide from the device"
     * (runtime/gpu/vulkan/texture_cache.cpp).
     */
    var textureBudgetMB: Int
        get() = store.getInt(KEY_TEXTURE_MB, 0)
        set(value) = store.edit().putInt(KEY_TEXTURE_MB, value).apply()

    var showStats: Boolean
        get() = store.getBoolean(KEY_SHOW_STATS, true)
        set(value) = store.edit().putBoolean(KEY_SHOW_STATS, value).apply()

    /**
     * Ask the display for 60 Hz rather than its highest rate. The console's
     * frame is a 60 Hz frame; at 120 the phone shows every one of ours twice
     * and burns twice the power doing it.
     */
    var prefer60Hz: Boolean
        get() = store.getBoolean(KEY_60HZ, true)
        set(value) = store.edit().putBoolean(KEY_60HZ, value).apply()

    // ---- sound ------------------------------------------------------------

    var audioEnabled: Boolean
        get() = store.getBoolean(KEY_AUDIO, true)
        set(value) = store.edit().putBoolean(KEY_AUDIO, value).apply()

    // ---- controls ---------------------------------------------------------

    /** The on-screen pad. Off is for playing with a physical controller. */
    var touchControls: Boolean
        get() = store.getBoolean(KEY_TOUCH, true)
        set(value) = store.edit().putBoolean(KEY_TOUCH, value).apply()

    /**
     * Whether a physical controller is listened to at all. Off is not a
     * nicety: a phone that reports an accessory, or its own sensors, as a
     * gamepad pushes a stick nobody is touching, and the character walks into
     * a wall for the whole match with nothing on screen to explain it.
     */
    var gamepadEnabled: Boolean
        get() = store.getBoolean(KEY_GAMEPAD, true)
        set(value) = store.edit().putBoolean(KEY_GAMEPAD, value).apply()

    var vibration: Boolean
        get() = store.getBoolean(KEY_VIBRATION, true)
        set(value) = store.edit().putBoolean(KEY_VIBRATION, value).apply()

    var lookSensitivityX: Float
        get() = store.getFloat(KEY_LOOK_X, 1.0f)
        set(value) = store.edit().putFloat(KEY_LOOK_X, value.coerceIn(0.2f, 4.0f)).apply()

    var lookSensitivityY: Float
        get() = store.getFloat(KEY_LOOK_Y, 1.0f)
        set(value) = store.edit().putFloat(KEY_LOOK_Y, value.coerceIn(0.2f, 4.0f)).apply()

    /** 0 is raw, 1 is very smooth. A little hides the touchscreen's jitter. */
    var lookSmoothing: Float
        get() = store.getFloat(KEY_LOOK_SMOOTH, 0.35f)
        set(value) = store.edit().putFloat(KEY_LOOK_SMOOTH, value.coerceIn(0f, 0.9f)).apply()

    var invertLook: Boolean
        get() = store.getBoolean(KEY_LOOK_INVERT, false)
        set(value) = store.edit().putBoolean(KEY_LOOK_INVERT, value).apply()

    /** How far a fast flick pushes the stick: 1.0 reaches the edge readily. */
    var lookSaturation: Float
        get() = store.getFloat(KEY_LOOK_SATURATION, 1.0f)
        set(value) = store.edit().putFloat(KEY_LOOK_SATURATION, value.coerceIn(0.3f, 3.0f)).apply()

    // ---- the graphics driver ------------------------------------------------

    /** The folder of the driver the player picked, or "" for the system's. */
    var driverDirectory: String
        get() = store.getString(KEY_DRIVER_DIR, "") ?: ""
        set(value) = store.edit().putString(KEY_DRIVER_DIR, value).apply()

    var driverLibrary: String
        get() = store.getString(KEY_DRIVER_LIB, "") ?: ""
        set(value) = store.edit().putString(KEY_DRIVER_LIB, value).apply()

    // ---- where the game lives ------------------------------------------------

    /** Set once the files are in place; empty means "not installed yet". */
    var gameDirectory: String
        get() = store.getString(KEY_GAME_DIR, "") ?: ""
        set(value) = store.edit().putString(KEY_GAME_DIR, value).apply()

    /** The folder the file browser last showed, so it opens where it left off. */
    var lastBrowsed: String
        get() = store.getString(KEY_LAST_BROWSED, "") ?: ""
        set(value) = store.edit().putString(KEY_LAST_BROWSED, value).apply()

    /** Shown once, the first time the player opens the app. */
    var seenWelcome: Boolean
        get() = store.getBoolean(KEY_WELCOME, false)
        set(value) = store.edit().putBoolean(KEY_WELCOME, value).apply()

    var autoLaunch: Boolean
        get() = store.getBoolean(KEY_AUTO_LAUNCH, true)
        set(value) = store.edit().putBoolean(KEY_AUTO_LAUNCH, value).apply()

    companion object {
        private const val KEY_RESOLUTION = "resolutionScale"
        private const val KEY_RENDER_SCALE = "renderScale"
        private const val KEY_MSAA = "multisampling"
        private const val KEY_TEXTURE_MB = "textureBudgetMB"
        private const val KEY_SHOW_STATS = "showStats"
        private const val KEY_60HZ = "prefer60Hz"
        private const val KEY_AUDIO = "audio"
        private const val KEY_TOUCH = "touchControls"
        private const val KEY_GAMEPAD = "gamepad"
        private const val KEY_VIBRATION = "vibration"
        private const val KEY_LOOK_X = "lookX"
        private const val KEY_LOOK_Y = "lookY"
        private const val KEY_LOOK_SMOOTH = "lookSmoothing"
        private const val KEY_LOOK_INVERT = "lookInvert"
        private const val KEY_LOOK_SATURATION = "lookSaturation"
        private const val KEY_DRIVER_DIR = "driverDirectory"
        private const val KEY_DRIVER_LIB = "driverLibrary"
        private const val KEY_GAME_DIR = "gameDirectory"
        private const val KEY_LAST_BROWSED = "lastBrowsed"
        private const val KEY_WELCOME = "seenWelcome"
        private const val KEY_AUTO_LAUNCH = "autoLaunch"
    }
}

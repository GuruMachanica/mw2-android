package com.mw2.recomp

import android.annotation.SuppressLint
import android.app.Activity
import android.app.ActivityManager
import android.content.ComponentCallbacks2
import android.content.Context
import android.content.Intent
import android.content.IntentFilter
import android.content.res.Configuration
import android.graphics.Color
import android.graphics.Typeface
import android.graphics.drawable.GradientDrawable
import android.os.BatteryManager
import android.os.Build
import android.os.Bundle
import android.os.Handler
import android.os.Looper
import android.os.Process
import android.os.VibrationEffect
import android.os.Vibrator
import android.os.VibratorManager
import android.view.Gravity
import android.view.KeyEvent
import android.view.MotionEvent
import android.view.SurfaceHolder
import android.view.SurfaceView
import android.view.View
import android.view.ViewGroup
import android.view.WindowManager
import android.os.SystemClock
import java.io.File
import java.util.Locale
import android.widget.Button
import android.widget.FrameLayout
import android.widget.LinearLayout
import android.widget.SeekBar
import android.widget.TextView
import androidx.activity.OnBackPressedCallback
import androidx.appcompat.app.AlertDialog
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.SwitchCompat
import androidx.core.view.WindowCompat
import androidx.core.view.WindowInsetsCompat
import androidx.core.view.WindowInsetsControllerCompat
import kotlin.math.max
import kotlin.math.roundToInt

/**
 * The run itself: a surface for the renderer, the pad drawn over it, and the
 * few decisions only the app can make -- when to pause, when to let go of
 * the surface, and when the whole thing ends.
 *
 * It lives in its own process (":game" in the manifest). Ending a run means
 * killing that process: the guest is inside recompiled code that cannot be
 * unwound and a driver mid-frame does not survive its device disappearing,
 * so there is nothing to tidy up and everything to lose by trying. Killing
 * the process is instant, cannot fail, and cannot crash -- and the launcher,
 * in the other process, is still there afterwards.
 */
class GameActivity : AppCompatActivity(), NativeListener {

    private lateinit var prefs: Prefs
    private lateinit var surfaceView: SurfaceView
    private lateinit var overlay: TouchOverlayView
    private lateinit var root: FrameLayout
    private lateinit var hudContainer: FrameLayout
    private lateinit var statsText: TextView
    private lateinit var hudExpandedCard: LinearLayout
    private lateinit var hudExpandedText: TextView
    private var hudIsExpanded = false
    private lateinit var menuButton: Button
    private var editPanel: EditPanel? = null

    private val pads = GamepadInput()
    private val handler = Handler(Looper.getMainLooper())
    private var vibrator: Vibrator? = null
    private var lastRumble = 0

    private val statsValues = FloatArray(6)
    private var started = false
    private var cachedRendererInfo = ""

    private var cpuUsagePercent = -1f
    private var lastCpuTotal = 0L
    private var lastCpuIdle = 0L
    private var lastProcTime = 0L
    private var lastProcSampleTime = 0L
    @Volatile private var monitoringActive = true
    private var monitorThread: Thread? = null

    private fun startHardwareMonitor() {
        monitoringActive = true
        monitorThread = Thread {
            while (monitoringActive) {
                sampleCpu()
                try {
                    Thread.sleep(1000)
                } catch (_: InterruptedException) {
                    break
                }
            }
        }.apply {
            isDaemon = true
            name = "mw2-hw-monitor"
            start()
        }
    }

    private fun sampleCpu() {
        try {
            val statFile = File("/proc/stat")
            if (statFile.exists()) {
                val line = statFile.bufferedReader().use { it.readLine() }
                if (line != null && line.startsWith("cpu ")) {
                    val parts = line.split("\\s+".toRegex())
                    if (parts.size >= 5) {
                        val user = parts[1].toLong()
                        val nice = parts[2].toLong()
                        val sys = parts[3].toLong()
                        val idle = parts[4].toLong()
                        val iowait = if (parts.size > 5) parts[5].toLong() else 0L
                        val total = user + nice + sys + idle + iowait
                        val idleTotal = idle + iowait
                        if (lastCpuTotal > 0 && total > lastCpuTotal) {
                            val dTotal = total - lastCpuTotal
                            val dIdle = idleTotal - lastCpuIdle
                            cpuUsagePercent = ((dTotal - dIdle).toFloat() / dTotal.toFloat()) * 100f
                        }
                        lastCpuTotal = total
                        lastCpuIdle = idleTotal
                        return
                    }
                }
            }
        } catch (_: Exception) {}

        try {
            val statFile = File("/proc/self/stat")
            if (statFile.exists()) {
                val line = statFile.readText().trim()
                val rParen = line.lastIndexOf(')')
                if (rParen > 0) {
                    val rest = line.substring(rParen + 2).split(" ")
                    val utime = rest[11].toLong()
                    val stime = rest[12].toLong()
                    val procTime = utime + stime
                    val now = SystemClock.elapsedRealtime()
                    if (lastProcSampleTime > 0 && now > lastProcSampleTime) {
                        val dTimeMs = now - lastProcSampleTime
                        val dTicks = procTime - lastProcTime
                        val dProcMs = dTicks * 10L
                        val cores = Runtime.getRuntime().availableProcessors().coerceAtLeast(1)
                        val pct = (dProcMs.toFloat() / (dTimeMs * cores).toFloat()) * 100f
                        cpuUsagePercent = pct.coerceIn(0f, 100f)
                    }
                    lastProcTime = procTime
                    lastProcSampleTime = now
                    return
                }
            }
        } catch (_: Exception) {}

        cpuUsagePercent = -1f
    }

    private fun getDeviceTemp(): Float {
        var fallbackTemp = 0f
        for (i in 0..19) {
            val typeFile = File("/sys/class/thermal/thermal_zone$i/type")
            val tempFile = File("/sys/class/thermal/thermal_zone$i/temp")
            if (tempFile.exists()) {
                try {
                    val raw = tempFile.readText().trim().toLongOrNull() ?: continue
                    val c = if (raw > 1000) raw / 1000f else raw.toFloat()
                    if (c in 20.0f..105.0f) {
                        val typeName = if (typeFile.exists()) typeFile.readText().trim().lowercase() else ""
                        if (typeName.contains("cpu") || typeName.contains("soc") ||
                            typeName.contains("ap") || typeName.contains("tsens") ||
                            typeName.contains("mtktscpu")) {
                            return c
                        }
                        if (fallbackTemp == 0f) fallbackTemp = c
                    }
                } catch (_: Exception) {}
            }
        }
        if (fallbackTemp > 0f) return fallbackTemp

        try {
            val filter = IntentFilter(Intent.ACTION_BATTERY_CHANGED)
            val batteryIntent = registerReceiver(null, filter)
            val temp = batteryIntent?.getIntExtra(BatteryManager.EXTRA_TEMPERATURE, 0) ?: 0
            if (temp > 0) return temp / 10.0f
        } catch (_: Exception) {}
        return 0f
    }

    private fun getMemoryStats(): Pair<Int, Int> {
        return try {
            val actManager = getSystemService(Context.ACTIVITY_SERVICE) as? ActivityManager
            val memInfo = ActivityManager.MemoryInfo()
            actManager?.getMemoryInfo(memInfo)
            val totalMb = (memInfo.totalMem / (1024 * 1024)).toInt()
            val jvm = Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory()
            val nativeMem = android.os.Debug.getNativeHeapAllocatedSize()
            val appMb = ((jvm + nativeMem) / (1024 * 1024)).toInt()
            Pair(appMb, totalMb)
        } catch (_: Exception) {
            Pair(0, 0)
        }
    }

    private fun getBatteryStats(): Triple<Float, Boolean, Int> {
        return try {
            val filter = IntentFilter(Intent.ACTION_BATTERY_CHANGED)
            val intent = registerReceiver(null, filter)
            val raw = intent?.getIntExtra(BatteryManager.EXTRA_TEMPERATURE, 0) ?: 0
            val tempC = if (raw > 0) raw / 10.0f else 0.0f
            val status = intent?.getIntExtra(BatteryManager.EXTRA_STATUS, -1) ?: -1
            val isCharging = status == BatteryManager.BATTERY_STATUS_CHARGING ||
                             status == BatteryManager.BATTERY_STATUS_FULL
            val level = intent?.getIntExtra(BatteryManager.EXTRA_LEVEL, -1) ?: -1
            Triple(tempC, isCharging, level)
        } catch (_: Exception) {
            Triple(0f, false, -1)
        }
    }

    private val statsTick = object : Runnable {
        override fun run() {
            if (prefs.showStats && NativeBridge.isLoaded()) {
                NativeBridge.nativeStats(statsValues)
                if (cachedRendererInfo.isEmpty()) {
                    try {
                        cachedRendererInfo = NativeBridge.nativeRendererInfo()
                    } catch (_: Throwable) {
                        cachedRendererInfo = "Vulkan | Mali Fallback | Native"
                    }
                }

                val fps = statsValues[0].roundToInt()
                val texMb = statsValues[1].roundToInt()
                val resW = statsValues[2].roundToInt()
                val resH = statsValues[3].roundToInt()
                val frameTimeMs = if (statsValues[4] > 0.01f) statsValues[4] else if (fps > 0) 1000f / fps else 0f
                val framesPresented = statsValues[5].toLong()

                val temp = getDeviceTemp()
                val (appMb, totalMb) = getMemoryStats()
                val (battTemp, isCharging, battPct) = getBatteryStats()
                val cpuStr = if (cpuUsagePercent >= 0f) String.format(Locale.US, "%.0f%%", cpuUsagePercent) else "N/A"

                val tempPart = if (temp > 0f) String.format(Locale.US, " · %.0f°C", temp) else ""
                val ramPart = if (appMb > 0) String.format(Locale.US, " · RAM %dM", appMb) else ""
                val ftPart = if (frameTimeMs > 0f) String.format(Locale.US, " · %.1fms", frameTimeMs) else ""

                statsText.text = String.format(
                    Locale.US,
                    "%d FPS%s  •  CPU %s%s%s  •  Tex %dMB  [▼ HUD]",
                    fps, ftPart, cpuStr, tempPart, ramPart, texMb
                )

                if (hudIsExpanded) {
                    val parts = cachedRendererInfo.split("|")
                    val devName = if (parts.isNotEmpty() && parts[0].isNotEmpty()) parts[0] else "Vulkan Device"
                    val renderMode = if (parts.size > 1) parts[1] else "Vulkan 1.1 Legacy RenderPass"
                    val tcMode = if (parts.size > 2) parts[2] else "CPU Decompress Fallback"

                    val battStr = if (battTemp > 0f) {
                        val chg = if (isCharging) " (Chg $battPct%)" else if (battPct >= 0) " ($battPct%)" else ""
                        String.format(Locale.US, "%.1f°C%s", battTemp, chg)
                    } else "N/A"

                    val ramStr = if (totalMb > 0) String.format(Locale.US, "%d MB (App) / %d MB (Total)", appMb, totalMb)
                                 else if (appMb > 0) "$appMb MB" else "N/A"
                    val cpuTempStr = if (temp > 0f) String.format(Locale.US, "%.0f°C", temp) else "N/A"

                    hudExpandedText.text = buildString {
                        append("FPS / FRAME TIME\n")
                        append(String.format(Locale.US, "  ▶ %d FPS   (%.1f ms)\n", fps, frameTimeMs))
                        append(String.format(Locale.US, "  Presented: %,d frames\n\n", framesPresented))

                        append("CPU & SYSTEM\n")
                        append("  Utilization: $cpuStr (${Runtime.getRuntime().availableProcessors()} Cores)\n")
                        append("  SoC/Thermal: $cpuTempStr  ·  Battery: $battStr\n\n")

                        append("GPU & VULKAN\n")
                        append("  Device: $devName\n")
                        append("  Backend: $renderMode\n")
                        append("  Textures: $texMb MB  ·  $tcMode\n\n")

                        append("MEMORY & VIEWPORT\n")
                        append("  App / System Total RAM: $ramStr\n")
                        append("  Internal Render: ${resW}×${resH}  •  Refresh: ${refreshHz().roundToInt()} Hz\n")
                    }
                }
            }
            handler.postDelayed(this, 500)
        }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        prefs = Prefs(this)

        Trail.note(this, "game: starting")
        if (!NativeBridge.load()) {
            fail(getString(R.string.error_library, NativeBridge.loadError() ?: "?"))
            return
        }

        buildUi()
        goFullscreen()
        window.addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON)
        // The phone throttles itself sooner but settles at a rate it can
        // hold, which is what a game wants: a steady 30 beats 60 that falls
        // to 20 whenever the chassis warms up.
        window.setSustainedPerformanceMode(true)
        if (prefs.prefer60Hz) {
            val attributes = window.attributes
            attributes.preferredRefreshRate = 60f
            window.attributes = attributes
        }

        vibrator = if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.S) {
            (getSystemService(Context.VIBRATOR_MANAGER_SERVICE) as? VibratorManager)?.defaultVibrator
        } else {
            @Suppress("DEPRECATION")
            getSystemService(Context.VIBRATOR_SERVICE) as? Vibrator
        }

        NativeBridge.listener = this
        NativeBridge.nativeInit(
            filesDir.absolutePath,
            (getExternalFilesDir(null) ?: filesDir).absolutePath,
            cacheDir.absolutePath,
            applicationInfo.nativeLibraryDir,
            this,
        )

        applyOptions()
        applyDriver()

        onBackPressedDispatcher.addCallback(this, object : OnBackPressedCallback(true) {
            override fun handleOnBackPressed() {
                if (overlay.editing) endEditing(save = true) else showMenu()
            }
        })

        val gameDirectory = prefs.gameDirectory
        if (gameDirectory.isEmpty() || !NativeBridge.nativeGameInstalled(gameDirectory)) {
            fail(getString(R.string.error_not_installed))
            return
        }
        Trail.note(this, "game: handing over to the runtime")
        if (!NativeBridge.nativeStart(gameDirectory)) {
            fail(NativeBridge.nativeStatus().ifEmpty { getString(R.string.error_start) })
            return
        }
        started = true
        Trail.clear(this)
        pads.setEnabled(prefs.gamepadEnabled)
        pads.refreshDevices()
        startHardwareMonitor()
        handler.post(statsTick)
    }

    // ---- the screen ---------------------------------------------------------

    @SuppressLint("SetTextI18n")
    private fun buildUi() {
        root = FrameLayout(this)
        root.setBackgroundColor(Color.BLACK)

        surfaceView = SurfaceView(this)
        surfaceView.holder.addCallback(object : SurfaceHolder.Callback {
            override fun surfaceCreated(holder: SurfaceHolder) = Unit

            override fun surfaceChanged(holder: SurfaceHolder, format: Int, width: Int, height: Int) {
                // The renderer draws at a fraction of the screen and the
                // display scales it up for free -- the single biggest thing
                // a weak phone can be given. setFixedSize comes back here
                // with the new size, which is when the runtime is told.
                val scale = prefs.resolutionScale
                val wantedWidth = max(320, (surfaceView.width * scale).roundToInt())
                val wantedHeight = max(240, (surfaceView.height * scale).roundToInt())
                if (width != wantedWidth || height != wantedHeight) {
                    holder.setFixedSize(wantedWidth, wantedHeight)
                    return
                }
                NativeBridge.nativeSurfaceChanged(holder.surface, width, height, refreshHz())
            }

            override fun surfaceDestroyed(holder: SurfaceHolder) {
                // Blocking on purpose: the presenter has to let go of this
                // window before Android takes it away, and the runtime waits
                // for the acknowledgement (runtime/android/window.cpp).
                NativeBridge.nativeSurfaceDestroyed()
            }
        })
        root.addView(
            surfaceView,
            FrameLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT,
            )
        )

        overlay = TouchOverlayView(this)
        overlay.layout = ControlLayout.load(this)
        overlay.visibility = if (prefs.touchControls) View.VISIBLE else View.GONE
        overlay.onLayoutEdited = { overlay.layout.save(this) }
        overlay.onSelectionChanged = { editPanel?.show(it) }
        root.addView(
            overlay,
            FrameLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT,
            )
        )

        hudContainer = FrameLayout(this)
        hudContainer.visibility = if (prefs.showStats) View.VISIBLE else View.GONE

        statsText = TextView(this)
        statsText.setTextColor(Color.argb(245, 224, 242, 254))
        statsText.textSize = 10f
        statsText.typeface = Typeface.MONOSPACE
        statsText.setPadding(pad(10), pad(4), pad(10), pad(4))
        val pillBg = GradientDrawable().apply {
            setColor(Color.argb(215, 15, 23, 42))
            cornerRadius = pad(10).toFloat()
            setStroke(pad(1), Color.argb(80, 56, 189, 248))
        }
        statsText.background = pillBg
        statsText.setOnClickListener {
            hudIsExpanded = true
            statsText.visibility = View.GONE
            hudExpandedCard.visibility = View.VISIBLE
        }
        hudContainer.addView(
            statsText,
            FrameLayout.LayoutParams(
                ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT,
                Gravity.TOP or Gravity.START,
            )
        )

        hudExpandedCard = LinearLayout(this).apply {
            orientation = LinearLayout.VERTICAL
            val cardBg = GradientDrawable().apply {
                setColor(Color.argb(235, 15, 23, 42))
                cornerRadius = pad(12).toFloat()
                setStroke(pad(1), Color.argb(120, 56, 189, 248))
            }
            background = cardBg
            setPadding(pad(14), pad(10), pad(14), pad(10))
            visibility = View.GONE
            setOnClickListener {
                hudIsExpanded = false
                hudExpandedCard.visibility = View.GONE
                statsText.visibility = View.VISIBLE
            }
        }

        val hudHeader = LinearLayout(this).apply {
            orientation = LinearLayout.HORIZONTAL
            gravity = Gravity.CENTER_VERTICAL
        }
        val hudTitle = TextView(this).apply {
            text = "MW2 ANDROID · PERFORMANCE"
            setTextColor(Color.argb(255, 56, 189, 248))
            textSize = 11f
            typeface = Typeface.DEFAULT_BOLD
        }
        val hudCollapseBtn = TextView(this).apply {
            text = "  [▲ Close]"
            setTextColor(Color.argb(200, 148, 163, 184))
            textSize = 10f
            typeface = Typeface.MONOSPACE
            setOnClickListener {
                hudIsExpanded = false
                hudExpandedCard.visibility = View.GONE
                statsText.visibility = View.VISIBLE
            }
        }
        hudHeader.addView(hudTitle, LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1f))
        hudHeader.addView(hudCollapseBtn, LinearLayout.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT))
        hudExpandedCard.addView(hudHeader)

        hudExpandedText = TextView(this).apply {
            setTextColor(Color.argb(240, 226, 232, 240))
            textSize = 9.5f
            typeface = Typeface.MONOSPACE
            setPadding(0, pad(6), 0, 0)
        }
        hudExpandedCard.addView(hudExpandedText)

        hudContainer.addView(
            hudExpandedCard,
            FrameLayout.LayoutParams(
                pad(320), ViewGroup.LayoutParams.WRAP_CONTENT,
                Gravity.TOP or Gravity.START,
            )
        )

        root.addView(
            hudContainer,
            FrameLayout.LayoutParams(
                ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT,
                Gravity.TOP or Gravity.START,
            ).apply { topMargin = pad(6); marginStart = pad(8) }
        )

        menuButton = smallButton(getString(R.string.menu)) { showMenu() }
        root.addView(
            menuButton,
            FrameLayout.LayoutParams(
                ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT,
                Gravity.TOP or Gravity.END,
            ).apply { topMargin = pad(6); marginEnd = pad(6) }
        )

        setContentView(root)
    }

    private fun smallButton(label: String, onClick: () -> Unit): Button {
        val button = Button(this)
        button.text = label
        button.textSize = 11f
        button.alpha = 0.55f
        button.setPadding(pad(12), pad(4), pad(12), pad(4))
        button.minHeight = pad(34)
        button.minWidth = pad(64)
        button.setOnClickListener { onClick() }
        return button
    }

    private fun pad(dp: Int): Int = (dp * resources.displayMetrics.density).roundToInt()

    private fun refreshHz(): Float {
        val shown = if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) display
        else {
            @Suppress("DEPRECATION")
            windowManager.defaultDisplay
        }
        val hz = shown?.refreshRate ?: 60f
        return if (hz < 20f) 60f else hz
    }

    private fun goFullscreen() {
        WindowCompat.setDecorFitsSystemWindows(window, false)
        val controller = WindowInsetsControllerCompat(window, window.decorView)
        controller.hide(WindowInsetsCompat.Type.systemBars())
        controller.systemBarsBehavior =
            WindowInsetsControllerCompat.BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P) {
            // The attributes have to be handed back for a change to take.
            val attributes = window.attributes
            if (attributes.layoutInDisplayCutoutMode !=
                WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES
            ) {
                attributes.layoutInDisplayCutoutMode =
                    WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES
                window.attributes = attributes
            }
        }
    }

    // ---- what the runtime is told before it starts -----------------------------

    private fun applyOptions() {
        // Everything here is one of the runtime's own switches
        // (docs/switches.md); the app just fills them in.
        NativeBridge.nativeSetOption("MW2_FULLSCREEN", "1")
        NativeBridge.nativeSetOption("MW2_NO_AUDIO", if (prefs.audioEnabled) "" else "1")
        NativeBridge.nativeSetOption("MW2_NO_MSAA", if (prefs.multisampling) "" else "1")
        NativeBridge.nativeSetOption(
            "MW2_TEXTURE_BUDGET_MB",
            if (prefs.textureBudgetMB > 0) prefs.textureBudgetMB.toString() else "",
        )
        // Both caches live in the app's own folder and make the second start
        // of a level far quicker than the first.
        NativeBridge.nativeSetOption("MW2_PIPELINE_CACHE", "${filesDir.absolutePath}/pipeline.cache")
        NativeBridge.nativeSetOption("MW2_SHADER_CACHE", "${filesDir.absolutePath}/shaders")

        NativeBridge.nativeLookSettings(
            prefs.lookSensitivityX, prefs.lookSensitivityY,
            prefs.lookSmoothing, prefs.invertLook, prefs.lookSaturation,
        )
        NativeBridge.nativePadEnabled(prefs.gamepadEnabled)
    }

    private fun applyDriver() {
        val directory = prefs.driverDirectory
        val library = prefs.driverLibrary
        if (directory.isNotEmpty() && library.isNotEmpty()) {
            NativeBridge.nativeSelectDriver(directory, library)
        } else {
            NativeBridge.nativeSelectDriver("", "")
        }
    }

    // ---- the pause menu ----------------------------------------------------------

    private fun showMenu() {
        val items = arrayOf(
            getString(R.string.resume),
            getString(R.string.edit_controls),
            if (prefs.touchControls) getString(R.string.hide_touch_controls)
            else getString(R.string.show_touch_controls),
            if (prefs.gamepadEnabled) getString(R.string.disable_gamepad)
            else getString(R.string.enable_gamepad),
            if (prefs.showStats) getString(R.string.hide_stats) else getString(R.string.show_stats),
            getString(R.string.quit),
        )
        AlertDialog.Builder(this)
            .setTitle(R.string.paused)
            .setItems(items) { dialog, which ->
                when (which) {
                    0 -> dialog.dismiss()
                    1 -> beginEditing()
                    2 -> setTouchControls(!prefs.touchControls)
                    3 -> setGamepad(!prefs.gamepadEnabled)
                    4 -> setStats(!prefs.showStats)
                    5 -> confirmQuit()
                }
            }
            .setOnDismissListener { goFullscreen() }
            .show()
    }

    private fun setTouchControls(on: Boolean) {
        prefs.touchControls = on
        overlay.releaseEverything()
        overlay.visibility = if (on) View.VISIBLE else View.GONE
    }

    private fun setGamepad(on: Boolean) {
        prefs.gamepadEnabled = on
        pads.setEnabled(on)
    }

    private fun setStats(on: Boolean) {
        prefs.showStats = on
        hudContainer.visibility = if (on) View.VISIBLE else View.GONE
    }

    private fun confirmQuit() {
        AlertDialog.Builder(this)
            .setTitle(R.string.quit)
            .setMessage(R.string.quit_explained)
            .setNegativeButton(R.string.cancel, null)
            .setPositiveButton(R.string.quit) { _, _ -> quit() }
            .setOnDismissListener { goFullscreen() }
            .show()
    }

    private fun quit() {
        overlay.layout.save(this)
        if (NativeBridge.isLoaded()) NativeBridge.nativeRequestStop()
        finishAndRemoveTask()
        // The only way to end a guest that is inside recompiled code. The
        // launcher is another process and carries on.
        handler.postDelayed({ Process.killProcess(Process.myPid()) }, 120)
    }

    private fun fail(message: String) {
        AlertDialog.Builder(this)
            .setTitle(R.string.cannot_start)
            .setMessage(message)
            .setCancelable(false)
            .setPositiveButton(R.string.close) { _, _ ->
                finish()
                handler.postDelayed({ Process.killProcess(Process.myPid()) }, 80)
            }
            .show()
    }

    // ---- editing the pad -----------------------------------------------------------

    private fun beginEditing() {
        if (!prefs.touchControls) setTouchControls(true)
        overlay.editing = true
        overlay.select(null)
        menuButton.visibility = View.GONE
        if (editPanel == null) editPanel = EditPanel()
        editPanel?.attach()
        NativeBridge.nativeSetPaused(true)
    }

    private fun endEditing(save: Boolean) {
        overlay.editing = false
        overlay.select(null)
        editPanel?.detach()
        menuButton.visibility = View.VISIBLE
        if (save) overlay.layout.save(this)
        NativeBridge.nativeSetPaused(false)
        goFullscreen()
    }

    /**
     * The editor's own strip along the bottom. Everything on it acts on
     * whichever control is selected; dragging and pinching happen on the
     * control itself.
     */
    private inner class EditPanel {
        private val view: View = layoutInflater.inflate(R.layout.edit_panel, root, false)
        private val title: TextView = view.findViewById(R.id.edit_title)
        private val size: SeekBar = view.findViewById(R.id.edit_size)
        private val opacity: SeekBar = view.findViewById(R.id.edit_opacity)
        private val visible: SwitchCompat = view.findViewById(R.id.edit_visible)
        private val toggle: SwitchCompat = view.findViewById(R.id.edit_toggle)
        private val snap: SwitchCompat = view.findViewById(R.id.edit_snap)
        private var current: ControlElement? = null
        private var attached = false

        init {
            size.max = 100
            opacity.max = 100
            size.setOnSeekBarChangeListener(object : SeekBar.OnSeekBarChangeListener {
                override fun onProgressChanged(bar: SeekBar, value: Int, fromUser: Boolean) {
                    if (!fromUser) return
                    val element = current ?: return
                    val smallest = if (element.kind == ControlKind.LOOK) 120f else 36f
                    val largest = if (element.kind == ControlKind.LOOK) 900f else 200f
                    element.sizeDp = smallest + (largest - smallest) * (value / 100f)
                    overlay.refresh()
                }

                override fun onStartTrackingTouch(bar: SeekBar) = Unit
                override fun onStopTrackingTouch(bar: SeekBar) {
                    overlay.layout.save(this@GameActivity)
                }
            })
            opacity.setOnSeekBarChangeListener(object : SeekBar.OnSeekBarChangeListener {
                override fun onProgressChanged(bar: SeekBar, value: Int, fromUser: Boolean) {
                    if (!fromUser) return
                    val element = current ?: return
                    element.alpha = (value / 100f).coerceIn(0.05f, 1f)
                    overlay.refresh()
                }

                override fun onStartTrackingTouch(bar: SeekBar) = Unit
                override fun onStopTrackingTouch(bar: SeekBar) {
                    overlay.layout.save(this@GameActivity)
                }
            })
            visible.setOnCheckedChangeListener { _, checked ->
                val element = current ?: return@setOnCheckedChangeListener
                element.visible = checked
                overlay.refresh()
                overlay.layout.save(this@GameActivity)
            }
            toggle.setOnCheckedChangeListener { _, checked ->
                val element = current ?: return@setOnCheckedChangeListener
                element.toggle = checked
                overlay.layout.save(this@GameActivity)
            }
            snap.setOnCheckedChangeListener { _, checked -> overlay.snapToGrid = checked }
            view.findViewById<Button>(R.id.edit_reset_one).setOnClickListener {
                val element = current ?: return@setOnClickListener
                overlay.layout.reset(element.id)
                overlay.select(overlay.layout.find(element.id))
                overlay.refresh()
                overlay.layout.save(this@GameActivity)
            }
            view.findViewById<Button>(R.id.edit_reset_all).setOnClickListener {
                AlertDialog.Builder(this@GameActivity)
                    .setTitle(R.string.reset_all)
                    .setMessage(R.string.reset_all_explained)
                    .setNegativeButton(R.string.cancel, null)
                    .setPositiveButton(R.string.reset) { _, _ ->
                        overlay.layout.resetAll()
                        overlay.select(null)
                        overlay.refresh()
                        overlay.layout.save(this@GameActivity)
                    }
                    .show()
            }
            view.findViewById<Button>(R.id.edit_done).setOnClickListener { endEditing(save = true) }
        }

        fun attach() {
            if (attached) return
            root.addView(
                view,
                FrameLayout.LayoutParams(
                    ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT,
                    Gravity.BOTTOM,
                )
            )
            attached = true
            show(null)
        }

        fun detach() {
            if (!attached) return
            root.removeView(view)
            attached = false
        }

        fun show(element: ControlElement?) {
            current = element
            if (element == null) {
                title.setText(R.string.edit_pick_one)
                size.isEnabled = false
                opacity.isEnabled = false
                visible.isEnabled = false
                toggle.isEnabled = false
                return
            }
            title.text = getString(R.string.edit_selected, element.label)
            size.isEnabled = true
            opacity.isEnabled = true
            visible.isEnabled = true
            toggle.isEnabled = element.kind == ControlKind.BUTTON || element.kind == ControlKind.TRIGGER
            val smallest = if (element.kind == ControlKind.LOOK) 120f else 36f
            val largest = if (element.kind == ControlKind.LOOK) 900f else 200f
            size.progress = (((element.sizeDp - smallest) / (largest - smallest)) * 100f)
                .roundToInt().coerceIn(0, 100)
            opacity.progress = (element.alpha * 100f).roundToInt().coerceIn(0, 100)
            visible.isChecked = element.visible
            toggle.isChecked = element.toggle
        }
    }

    // ---- input ------------------------------------------------------------------------

    override fun dispatchKeyEvent(event: KeyEvent): Boolean {
        // The dialogs and the editor come first; a pad should not fire a gun
        // through a menu.
        if (started && !overlay.editing && pads.onKey(event)) return true
        return super.dispatchKeyEvent(event)
    }

    override fun onGenericMotionEvent(event: MotionEvent): Boolean {
        if (started && !overlay.editing && pads.onMotion(event)) return true
        return super.onGenericMotionEvent(event)
    }

    // ---- lifecycle ---------------------------------------------------------------------

    override fun onResume() {
        super.onResume()
        goFullscreen()
        if (!started) return
        NativeBridge.nativeSetPaused(false)
        // A trim while the window was away may have cut the texture cache.
        // Without this it stays cut, and every texture is uploaded again on
        // every draw for the rest of the run.
        NativeBridge.nativeRestoreMemory()
        pads.setEnabled(prefs.gamepadEnabled)
        pads.refreshDevices()
        handler.post(statsTick)
    }

    override fun onPause() {
        super.onPause()
        if (!started) return
        // Nothing is presented while the activity is away, the mixer is
        // muted, and the touch pad lets go of whatever was held -- a trigger
        // stuck down through a phone call would empty a magazine into a wall.
        NativeBridge.nativeSetPaused(true)
        overlay.releaseEverything()
        handler.removeCallbacks(statsTick)
        overlay.layout.save(this)
    }

    override fun onWindowFocusChanged(hasFocus: Boolean) {
        super.onWindowFocusChanged(hasFocus)
        if (hasFocus) goFullscreen()
    }

    override fun onConfigurationChanged(newConfig: Configuration) {
        super.onConfigurationChanged(newConfig)
        goFullscreen()
    }

    override fun onTrimMemory(level: Int) {
        super.onTrimMemory(level)
        // The texture cache is the only thing here big enough to be worth
        // giving back, and it can rebuild what it drops
        // (runtime/android/perf.cpp).
        // UI_HIDDEN (20) says the window went away, not that memory is
        // short, and it arrives on every switch away. It is passed on so the
        // runtime can say so in the log, but the levels that mean pressure
        // while running are RUNNING_LOW and RUNNING_CRITICAL.
        if (NativeBridge.isLoaded() && level >= ComponentCallbacks2.TRIM_MEMORY_RUNNING_LOW) {
            NativeBridge.nativeTrimMemory(level)
        }
    }

    override fun onDestroy() {
        super.onDestroy()
        monitoringActive = false
        monitorThread?.interrupt()
        monitorThread = null
        handler.removeCallbacksAndMessages(null)
        NativeBridge.listener = null
        if (started && !isChangingConfigurations) {
            // The activity is going for good: the run goes with it.
            NativeBridge.nativeRequestStop()
            Process.killProcess(Process.myPid())
        }
    }

    // ---- what the runtime tells the app ---------------------------------------------------

    override fun onRumble(user: Int, lowFrequency: Int, highFrequency: Int) {
        if (!prefs.vibration || user != 0) return
        val strength = max(lowFrequency, highFrequency)
        // Only on a change, and the runtime only calls on a change, so this
        // is not a vibration started sixty times a second.
        if (strength == lastRumble) return
        lastRumble = strength
        val device = vibrator ?: return
        handler.post {
            try {
                if (strength <= 0) {
                    device.cancel()
                } else {
                    val amplitude = (strength * 255 / 65535).coerceIn(1, 255)
                    device.vibrate(VibrationEffect.createOneShot(160, amplitude))
                }
            } catch (_: Throwable) {
                // A phone that refuses to vibrate is not a reason to stop
                // playing.
            }
        }
    }

    override fun onStatus(text: String) {
        handler.post {
            if (isFinishing) return@post
            if (text.startsWith("GPU lacks") || text.startsWith("Failed to") || text.startsWith("No Vulkan")) {
                AlertDialog.Builder(this)
                    .setTitle("Renderer Notice")
                    .setMessage("$text\n\nYour device GPU does not provide Vulkan 1.3 or VK_KHR_dynamic_rendering. The game will run in headless mode without video output. Check the log for details.")
                    .setPositiveButton("View Log") { _, _ ->
                        finish()
                    }
                    .setNegativeButton("Continue Headless", null)
                    .show()
            } else if (text.isNotEmpty() && prefs.showStats) {
                statsText.text = text
            }
        }
    }

    companion object {
        /** Started by the launcher once the files are in place. */
        fun start(activity: Activity) {
            activity.startActivity(Intent(activity, GameActivity::class.java))
        }
    }
}

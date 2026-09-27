package com.mw2.recomp

import android.annotation.SuppressLint
import android.app.Activity
import android.content.ComponentCallbacks2
import android.content.Context
import android.content.Intent
import android.content.res.Configuration
import android.graphics.Color
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
import android.widget.Button
import android.widget.FrameLayout
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
    private lateinit var statsText: TextView
    private lateinit var menuButton: Button
    private var editPanel: EditPanel? = null

    private val pads = GamepadInput()
    private val handler = Handler(Looper.getMainLooper())
    private var vibrator: Vibrator? = null
    private var lastRumble = 0

    private val statsValues = FloatArray(4)
    private var started = false

    private val statsTick = object : Runnable {
        override fun run() {
            if (prefs.showStats && NativeBridge.isLoaded()) {
                NativeBridge.nativeStats(statsValues)
                statsText.text = getString(
                    R.string.stats_line,
                    statsValues[0], statsValues[1].roundToInt(),
                    statsValues[2].roundToInt(), statsValues[3].roundToInt(),
                )
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

        statsText = TextView(this)
        statsText.setTextColor(Color.argb(200, 180, 255, 180))
        statsText.textSize = 11f
        statsText.setPadding(pad(10), pad(4), pad(10), pad(4))
        statsText.visibility = if (prefs.showStats) View.VISIBLE else View.GONE
        root.addView(
            statsText,
            FrameLayout.LayoutParams(
                ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT,
                Gravity.TOP or Gravity.START,
            )
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
        statsText.visibility = if (on) View.VISIBLE else View.GONE
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
            if (!isFinishing && text.isNotEmpty() && prefs.showStats) {
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

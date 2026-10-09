package com.mw2.recomp

import android.content.Intent
import android.os.Bundle
import android.widget.Button
import android.widget.ScrollView
import android.widget.TextView
import androidx.appcompat.app.AlertDialog
import androidx.appcompat.app.AppCompatActivity
import java.io.File

/**
 * The launcher: is the game installed, which driver will be used, and the
 * button that starts it. It runs in its own process, separate from the game
 * (see the manifest), so that ending a run -- which means killing the
 * game's process -- leaves this one standing.
 *
 * It is written so that it cannot fail to appear. The native library is not
 * needed to draw this screen and is loaded in a guarded step afterwards: a
 * library that will not load leaves a launcher that says so, with the log
 * and the last crash still reachable, rather than an app that vanishes.
 */
class MainActivity : AppCompatActivity() {

    private lateinit var prefs: Prefs
    private lateinit var status: TextView
    private lateinit var footer: TextView
    private lateinit var play: Button
    private lateinit var installButton: Button
    private lateinit var directLaunchSwitch: androidx.appcompat.widget.SwitchCompat
    private var detectedIsoFile: File? = null
    private var nativeReady = false
    private var hasAutoLaunched = false

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        prefs = Prefs(this)

        status = findViewById(R.id.status)
        footer = findViewById(R.id.footer)
        play = findViewById(R.id.play)
        installButton = findViewById(R.id.install)
        directLaunchSwitch = findViewById(R.id.direct_launch_switch)

        directLaunchSwitch.isChecked = prefs.autoLaunch
        directLaunchSwitch.setOnCheckedChangeListener { _, isChecked ->
            prefs.autoLaunch = isChecked
        }

        play.setOnClickListener {
            val gameDirectory = prefs.gameDirectory
            val installed = gameDirectory.isNotEmpty() && safely(false) {
                NativeBridge.nativeGameInstalled(gameDirectory)
            }
            if (installed) {
                startGame()
            } else if (detectedIsoFile != null) {
                val intent = Intent(this, InstallActivity::class.java).apply {
                    putExtra(InstallActivity.EXTRA_INITIAL_PATH, detectedIsoFile!!.absolutePath)
                    putExtra(InstallActivity.EXTRA_AUTO_START, true)
                }
                startActivity(intent)
            } else {
                startActivity(Intent(this, InstallActivity::class.java))
            }
        }
        installButton.setOnClickListener {
            startActivity(Intent(this, InstallActivity::class.java))
        }
        findViewById<Button>(R.id.driver).setOnClickListener {
            startActivity(Intent(this, DriverActivity::class.java))
        }
        findViewById<Button>(R.id.settings).setOnClickListener {
            startActivity(Intent(this, SettingsActivity::class.java))
        }
        findViewById<Button>(R.id.log).setOnClickListener { showLog() }

        // Whatever killed the app last time, shown before anything else is
        // attempted -- it may well be about to happen again.
        val crash = Trail.lastCrash(this)
        if (crash.isNotEmpty()) showLastCrash(crash)

        // The library is loaded after the screen exists, so a failure here
        // is reported rather than fatal. The breadcrumb is what identifies a
        // native crash inside the load itself, which no handler can catch.
        Trail.note(this, "launcher: loading the runtime library")
        nativeReady = NativeBridge.load()
        if (nativeReady) {
            Trail.note(this, "launcher: library loaded, initialising")
            try {
                NativeBridge.nativeInit(
                    filesDir.absolutePath,
                    (getExternalFilesDir(null) ?: filesDir).absolutePath,
                    cacheDir.absolutePath,
                    applicationInfo.nativeLibraryDir,
                    null,
                )
            } catch (error: Throwable) {
                nativeReady = false
                NativeBridge.noteInitFailure(error.message ?: error.toString())
            }
        }
        Trail.clear(this)
    }

    override fun onResume() {
        super.onResume()
        refresh()
    }

    private fun refresh() {
        if (!nativeReady) {
            status.text = getString(
                R.string.status_library_missing,
                NativeBridge.loadError() ?: getString(R.string.unknown_reason),
            )
            play.isEnabled = false
            footer.text = getString(
                R.string.footer, device(), getString(R.string.driver_system),
                BuildConfig.BUILD_SHA, BuildConfig.BUILD_STAMP,
            )
            return
        }

        val gameDirectory = prefs.gameDirectory
        val installed = gameDirectory.isNotEmpty() && safely(false) {
            NativeBridge.nativeGameInstalled(gameDirectory)
        }

        if (installed) {
            play.isEnabled = true
            play.text = "▶ LAUNCH GAME"
            status.text = "Status: Game Ready\nLocation: $gameDirectory"
            installButton.visibility = android.view.View.GONE
            directLaunchSwitch.visibility = android.view.View.VISIBLE

            if (prefs.autoLaunch && !hasAutoLaunched) {
                hasAutoLaunched = true
                startGame()
                return
            }
        } else {
            val candidateIsos = listOf(
                File("/sdcard/Download/mw2.iso"),
                File("/sdcard/Download/Call of Duty - Modern Warfare 2 (USA, Europe).iso"),
                File(getExternalFilesDir(null) ?: filesDir, "mw2.iso")
            )
            detectedIsoFile = candidateIsos.firstOrNull { it.exists() && it.length() > 500_000_000L }

            if (detectedIsoFile != null) {
                play.isEnabled = true
                play.text = "⚡ INSTALL & PLAY"
                status.text = "Game Disc Detected:\n${detectedIsoFile!!.name}\nReady for one-click setup."
                installButton.visibility = android.view.View.VISIBLE
                installButton.text = "Choose Another Source"
            } else {
                play.isEnabled = false
                play.text = getString(R.string.play)
                status.text = getString(R.string.status_not_installed)
                installButton.visibility = android.view.View.VISIBLE
                installButton.text = getString(R.string.install_game)
            }
            directLaunchSwitch.visibility = android.view.View.GONE
        }

        applyDriverChoice()
        footer.text = getString(
            R.string.footer, device(), currentDriverName(),
            BuildConfig.BUILD_SHA, BuildConfig.BUILD_STAMP,
        )
    }

    private fun device(): String =
        "${android.os.Build.MANUFACTURER} ${android.os.Build.MODEL}, " +
            "Android ${android.os.Build.VERSION.RELEASE}"

    /** A native call that must not take the launcher with it if it fails. */
    private fun <T> safely(fallback: T, call: () -> T): T = try {
        call()
    } catch (_: Throwable) {
        fallback
    }

    private fun applyDriverChoice() {
        val directory = prefs.driverDirectory
        val library = prefs.driverLibrary
        if (directory.isNotEmpty() && library.isNotEmpty() && File(directory, library).exists()) {
            safely(Unit) { NativeBridge.nativeSelectDriver(directory, library) }
        } else {
            // A driver that was deleted from underneath the setting.
            if (directory.isNotEmpty()) {
                prefs.driverDirectory = ""
                prefs.driverLibrary = ""
            }
            safely(Unit) { NativeBridge.nativeSelectDriver("", "") }
        }
    }

    private fun currentDriverName(): String {
        val directory = prefs.driverDirectory
        if (directory.isEmpty()) return getString(R.string.driver_system)
        return File(directory).name
    }

    private fun startGame() {
        if (!nativeReady) return
        GameActivity.start(this)
    }

    private fun showLastCrash(crash: String) {
        AlertDialog.Builder(this)
            .setTitle(R.string.last_crash)
            .setMessage(crash.take(4000))
            .setPositiveButton(R.string.close) { _, _ -> Trail.forgetCrash(this) }
            .setNeutralButton(R.string.share) { _, _ -> share(crash) }
            .show()
    }

    private fun showLog() {
        val text = buildString {
            // The run's log first: when something goes wrong it is almost
            // always the interesting one, and the launcher's own is short.
            for (name in listOf("game.log", "launcher.log")) {
                val file = File(filesDir, name)
                if (!file.exists()) continue
                append("===== ").append(name).append(" =====\n")
                append(file.readTextTail(60_000)).append("\n\n")
            }
            for (name in listOf("last-crash-game.txt", "last-crash-launcher.txt")) {
                val file = File(filesDir, name)
                if (file.exists()) {
                    append("===== ").append(name).append(" =====\n")
                    append(file.readTextTail(8_000)).append("\n\n")
                }
            }
            if (nativeReady) {
                val tail = safely("") { NativeBridge.nativeLogTail() }
                if (tail.isNotBlank()) append("===== this session =====\n").append(tail)
            }
        }.ifBlank { getString(R.string.log_empty) }

        val body = TextView(this)
        body.setPadding(32, 24, 32, 24)
        body.textSize = 10f
        body.setTextIsSelectable(true)
        body.text = text
        val scroll = ScrollView(this)
        scroll.addView(body)
        AlertDialog.Builder(this)
            .setTitle(R.string.view_log)
            .setView(scroll)
            .setPositiveButton(R.string.close, null)
            .setNeutralButton(R.string.share) { _, _ -> share(text) }
            .show()
    }

    private fun share(text: String) {
        val intent = Intent(Intent.ACTION_SEND)
        intent.type = "text/plain"
        intent.putExtra(Intent.EXTRA_SUBJECT, "MW2 log")
        intent.putExtra(Intent.EXTRA_TEXT, text.takeLast(200_000))
        startActivity(Intent.createChooser(intent, getString(R.string.share)))
    }
}

/** The end of a file, which is the part of a log anyone wants. */
fun File.readTextTail(bytes: Int): String = try {
    val length = length()
    if (length <= bytes) readText()
    else inputStream().use { stream ->
        stream.skip(length - bytes)
        stream.readBytes().toString(Charsets.UTF_8)
    }
} catch (_: Throwable) {
    ""
}

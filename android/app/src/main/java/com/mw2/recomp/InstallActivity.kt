package com.mw2.recomp

import android.app.Activity
import android.content.Intent
import android.net.Uri
import android.os.Bundle
import android.os.Handler
import android.os.Looper
import android.os.StatFs
import android.provider.OpenableColumns
import android.view.View
import android.widget.Button
import android.widget.ProgressBar
import android.widget.TextView
import androidx.activity.OnBackPressedCallback
import androidx.activity.result.contract.ActivityResultContracts
import androidx.appcompat.app.AlertDialog
import androidx.appcompat.app.AppCompatActivity
import java.io.File
import kotlin.concurrent.thread

/**
 * Copying the player's own copy of the game into the app's storage.
 *
 * The work is the runtime's (runtime/install/install.cpp): it reads a disc
 * image or a folder, copies what the game needs, checks every file against
 * a known hash as it goes, and can be interrupted and carried on later.
 * This screen is a source, a progress bar and a cancel button.
 *
 * Two ways to name the source, because Android has two and neither covers
 * everyone:
 *
 *   Files      the system picker. No permission at all, works with a phone
 *              whose storage is locked down, and works with cloud entries --
 *              but it hands over a document rather than a path, so the file
 *              has to be copied into the app's folder before the installer
 *              can read it. That costs the disc image's size again.
 *   Browse     a plain directory listing over real paths. Nothing is copied
 *              twice, and a folder of already-extracted files can be used
 *              as it stands -- but reading outside the app's own folder
 *              needs the all-files permission.
 */
class InstallActivity : AppCompatActivity() {

    private lateinit var prefs: Prefs
    private lateinit var sourceText: TextView
    private lateinit var progress: ProgressBar
    private lateinit var progressText: TextView
    private lateinit var begin: Button
    private lateinit var choose: Button
    private lateinit var pick: Button
    private lateinit var cancel: Button

    private val handler = Handler(Looper.getMainLooper())
    private var source: String = ""

    @Volatile
    private var running = false

    @Volatile
    private var copying = false

    private val values = LongArray(2)

    private val browse = registerForActivityResult(
        ActivityResultContracts.StartActivityForResult()
    ) { result ->
        if (result.resultCode != Activity.RESULT_OK) return@registerForActivityResult
        val path = result.data?.getStringExtra(FileBrowserActivity.EXTRA_PATH)
            ?: return@registerForActivityResult
        useSource(path)
    }

    private val document = registerForActivityResult(
        ActivityResultContracts.StartActivityForResult()
    ) { result ->
        if (result.resultCode != Activity.RESULT_OK) return@registerForActivityResult
        val uri = result.data?.data ?: return@registerForActivityResult
        importDocument(uri)
    }

    private val tick = object : Runnable {
        override fun run() {
            if (!running) return
            val file = NativeBridge.nativeInstallProgress(values)
            val done = values[0]
            val total = values[1]
            val percent = if (total > 0) ((done * 100) / total).toInt() else 0
            progress.progress = if (total > 0) ((done * 1000) / total).toInt() else 0
            progressText.text = getString(R.string.installing, file, percent)
            handler.postDelayed(this, 250)
        }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_install)
        prefs = Prefs(this)
        title = getString(R.string.install_game)

        sourceText = findViewById(R.id.source)
        progress = findViewById(R.id.progress)
        progressText = findViewById(R.id.progress_text)
        begin = findViewById(R.id.begin)
        choose = findViewById(R.id.choose)
        pick = findViewById(R.id.pick)
        cancel = findViewById(R.id.cancel)

        sourceText.text = getString(R.string.no_source)

        pick.setOnClickListener {
            val intent = Intent(Intent.ACTION_OPEN_DOCUMENT)
            intent.addCategory(Intent.CATEGORY_OPENABLE)
            intent.type = "*/*"
            document.launch(intent)
        }
        choose.setOnClickListener {
            browse.launch(Intent(this, FileBrowserActivity::class.java))
        }
        begin.setOnClickListener { start() }
        cancel.setOnClickListener {
            if (running && NativeBridge.isLoaded()) NativeBridge.nativeCancelInstall()
            copying = false
            cancel.isEnabled = false
        }

        onBackPressedDispatcher.addCallback(this, object : OnBackPressedCallback(true) {
            override fun handleOnBackPressed() {
                if (!running && !copying) {
                    finish()
                    return
                }
                AlertDialog.Builder(this@InstallActivity)
                    .setMessage(R.string.install_running_warning)
                    .setNegativeButton(R.string.cancel, null)
                    .setPositiveButton(R.string.close) { _, _ ->
                        copying = false
                        if (NativeBridge.isLoaded()) NativeBridge.nativeCancelInstall()
                    }
                    .show()
            }
        })

        val initial = intent.getStringExtra(EXTRA_INITIAL_PATH)
        if (!initial.isNullOrEmpty() && File(initial).exists()) {
            useSource(initial)
            if (intent.getBooleanExtra(EXTRA_AUTO_START, false)) {
                start()
            }
        }
    }

    companion object {
        const val EXTRA_INITIAL_PATH = "initial_path"
        const val EXTRA_AUTO_START = "auto_start"
    }

    private fun useSource(path: String) {
        source = path
        sourceText.text = getString(R.string.chosen, path)
        begin.isEnabled = NativeBridge.isLoaded()
    }

    private fun gameDirectory(): File {
        // The app's own external folder: no permission needed to write it,
        // it survives an update, and it goes when the app is uninstalled --
        // which is what a player expects of seven gigabytes.
        val base = getExternalFilesDir(null) ?: filesDir
        return File(base, "game")
    }

    // ---- bringing a document in ------------------------------------------------

    /**
     * A document provider hands over a stream, not a path, and the runtime's
     * installer reads paths. So it is copied in first -- with the size said
     * out loud, because for a disc image this is gigabytes and the phone
     * needs room for both copies at once.
     */
    private fun importDocument(uri: Uri) {
        val name = documentName(uri)
        val size = documentSize(uri)
        val target = File(getExternalFilesDir(null) ?: filesDir, "import")
        target.mkdirs()
        val destination = File(target, name)

        val free = StatFs(target.absolutePath).availableBytes
        val needed = if (size > 0) size + 7L * 1024 * 1024 * 1024 else 0L
        val message = if (size > 0) {
            getString(
                R.string.import_explained,
                android.text.format.Formatter.formatFileSize(this, size),
                android.text.format.Formatter.formatFileSize(this, free),
            )
        } else {
            getString(R.string.import_explained_unknown)
        }

        AlertDialog.Builder(this)
            .setTitle(R.string.import_file)
            .setMessage(message)
            .setNegativeButton(R.string.cancel, null)
            .setPositiveButton(R.string.import_file) { _, _ ->
                if (needed > 0 && free < needed) {
                    AlertDialog.Builder(this)
                        .setMessage(
                            getString(
                                R.string.no_space,
                                android.text.format.Formatter.formatFileSize(this, free),
                            )
                        )
                        .setPositiveButton(R.string.close, null)
                        .show()
                }
                copyIn(uri, destination, size)
            }
            .show()
    }

    private fun copyIn(uri: Uri, destination: File, size: Long) {
        copying = true
        setBusy(true)
        progress.isIndeterminate = size <= 0
        thread(name = "import") {
            var failure: String? = null
            var copied = 0L
            try {
                contentResolver.openInputStream(uri).use { input ->
                    if (input == null) throw IllegalStateException("no stream")
                    destination.outputStream().use { output ->
                        val buffer = ByteArray(1 shl 20)
                        var shown = 0L
                        while (copying) {
                            val read = input.read(buffer)
                            if (read <= 0) break
                            output.write(buffer, 0, read)
                            copied += read
                            if (copied - shown > 8L * 1024 * 1024) {
                                shown = copied
                                val done = copied
                                handler.post {
                                    if (size > 0) progress.progress = ((done * 1000) / size).toInt()
                                    progressText.text = getString(
                                        R.string.copying,
                                        android.text.format.Formatter.formatFileSize(this, done),
                                    )
                                }
                            }
                        }
                    }
                }
                if (!copying) {
                    destination.delete()
                    failure = getString(R.string.install_cancelled)
                }
            } catch (error: Throwable) {
                destination.delete()
                failure = error.message ?: "copy failed"
            }
            handler.post {
                copying = false
                progress.isIndeterminate = false
                setBusy(false)
                if (failure == null) {
                    progressText.text = ""
                    useSource(destination.absolutePath)
                } else {
                    progressText.text = failure
                }
            }
        }
    }

    private fun documentName(uri: Uri): String {
        var name: String? = null
        try {
            contentResolver.query(uri, null, null, null, null)?.use { cursor ->
                val column = cursor.getColumnIndex(OpenableColumns.DISPLAY_NAME)
                if (column >= 0 && cursor.moveToFirst()) name = cursor.getString(column)
            }
        } catch (_: Throwable) {
        }
        val cleaned = (name ?: uri.lastPathSegment ?: "source.iso")
            .substringAfterLast('/')
            .map { if (it.isLetterOrDigit() || it == '.' || it == '-' || it == '_') it else '_' }
            .joinToString("")
        return cleaned.ifEmpty { "source.iso" }
    }

    private fun documentSize(uri: Uri): Long {
        try {
            contentResolver.query(uri, null, null, null, null)?.use { cursor ->
                val column = cursor.getColumnIndex(OpenableColumns.SIZE)
                if (column >= 0 && cursor.moveToFirst() && !cursor.isNull(column)) {
                    return cursor.getLong(column)
                }
            }
        } catch (_: Throwable) {
        }
        return 0
    }

    // ---- installing ---------------------------------------------------------------

    private fun start() {
        if (!NativeBridge.isLoaded() || running) return
        val target = gameDirectory()
        target.mkdirs()

        val free = StatFs(target.absolutePath).availableBytes
        if (free < 7L * 1024 * 1024 * 1024) {
            AlertDialog.Builder(this)
                .setTitle(R.string.install_game)
                .setMessage(
                    getString(
                        R.string.no_space,
                        android.text.format.Formatter.formatFileSize(this, free),
                    )
                )
                .setNegativeButton(R.string.cancel, null)
                .setPositiveButton(R.string.begin_install) { _, _ -> reallyStart(target) }
                .show()
            return
        }
        reallyStart(target)
    }

    private fun reallyStart(target: File) {
        running = true
        setBusy(true)
        handler.post(tick)

        // The runtime's installer blocks: it is copying gigabytes. It runs
        // on a thread of its own and the screen polls it.
        thread(name = "install") {
            val error = try {
                NativeBridge.nativeInstall(source, target.absolutePath)
            } catch (failure: Throwable) {
                failure.message ?: "unexpected failure"
            }
            handler.post { finished(error, target) }
        }
    }

    private fun setBusy(busy: Boolean) {
        begin.isEnabled = !busy && source.isNotEmpty() && NativeBridge.isLoaded()
        choose.isEnabled = !busy
        pick.isEnabled = !busy
        progress.visibility = if (busy) View.VISIBLE else View.GONE
        cancel.visibility = if (busy) View.VISIBLE else View.GONE
        cancel.isEnabled = busy
    }

    private fun finished(error: String?, target: File) {
        running = false
        handler.removeCallbacks(tick)
        setBusy(false)

        if (error == null) {
            prefs.gameDirectory = target.absolutePath
            progressText.text = getString(R.string.install_done)
            // The imported copy has done its job and is the size of a disc.
            File(getExternalFilesDir(null) ?: filesDir, "import").deleteRecursively()
            if (intent.getBooleanExtra(EXTRA_AUTO_START, false)) {
                GameActivity.start(this)
                finish()
            } else {
                AlertDialog.Builder(this)
                    .setTitle(R.string.install_game)
                    .setMessage(R.string.install_done)
                    .setPositiveButton(R.string.play) { _, _ ->
                        GameActivity.start(this)
                        finish()
                    }
                    .setNegativeButton(R.string.close) { _, _ -> finish() }
                    .show()
            }
        } else {
            progressText.text = getString(R.string.install_failed, error)
            AlertDialog.Builder(this)
                .setTitle(R.string.install_game)
                .setMessage(getString(R.string.install_failed, error))
                .setPositiveButton(R.string.close, null)
                .show()
        }
    }

    override fun onDestroy() {
        super.onDestroy()
        handler.removeCallbacksAndMessages(null)
        copying = false
        // An install that outlives its screen would write into a folder
        // nobody is watching; it is stopped, and what was copied is kept
        // for next time.
        if (running && NativeBridge.isLoaded()) NativeBridge.nativeCancelInstall()
    }
}

package com.mw2.recomp

import android.content.Intent
import android.net.Uri
import android.os.Build
import android.os.Bundle
import android.os.Environment
import android.provider.Settings
import android.view.View
import android.view.ViewGroup
import android.widget.BaseAdapter
import android.widget.Button
import android.widget.LinearLayout
import android.widget.ListView
import android.widget.TextView
import androidx.appcompat.app.AlertDialog
import androidx.appcompat.app.AppCompatActivity
import java.io.File
import kotlin.math.roundToInt

/**
 * Picking the disc image, or the folder its files were unpacked into.
 *
 * The runtime's installer reads a real path: it opens the image, walks it
 * and copies out of it, which the document-provider world cannot do without
 * copying the whole seven gigabytes somewhere first. So this is a plain
 * directory listing over the file system the app can see, and a button that
 * asks for the permission needed to see more of it.
 */
class FileBrowserActivity : AppCompatActivity() {

    private lateinit var prefs: Prefs
    private lateinit var here: TextView
    private lateinit var entries: ListView
    private lateinit var grant: Button

    private var folder: File = Environment.getExternalStorageDirectory()
    private var children: List<File> = emptyList()
    private var hasParent = false

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_browser)
        prefs = Prefs(this)

        here = findViewById(R.id.here)
        entries = findViewById(R.id.entries)
        grant = findViewById(R.id.grant)

        val remembered = prefs.lastBrowsed
        if (remembered.isNotEmpty() && File(remembered).isDirectory) folder = File(remembered)

        findViewById<Button>(R.id.pick_here).setOnClickListener { pick(folder) }
        grant.setOnClickListener { askForStorage() }

        entries.setOnItemClickListener { _, _, position, _ ->
            val chosen = children.getOrNull(position) ?: return@setOnItemClickListener
            if (chosen.isDirectory) {
                folder = chosen
                prefs.lastBrowsed = chosen.absolutePath
                refresh()
            } else {
                pick(chosen)
            }
        }
        refresh()
    }

    private fun refresh() {
        here.text = folder.absolutePath
        val listed = folder.listFiles()
        val visible = (listed ?: emptyArray()).filter { !it.name.startsWith(".") }
        // Folders first, then the images; everything else is noise on a
        // screen whose only job is finding one of the two.
        val folders = visible.filter { it.isDirectory }.sortedBy { it.name.lowercase() }
        val images = visible.filter { it.isFile && looksLikeImage(it) }
            .sortedBy { it.name.lowercase() }
        val parent = folder.parentFile
        hasParent = parent != null && parent.canRead()
        children = buildList {
            if (hasParent && parent != null) add(parent)
            addAll(folders)
            addAll(images)
        }
        entries.adapter = Adapter()

        val canRead = listed != null
        grant.visibility = if (canRead && !needsPermission()) View.GONE else View.VISIBLE
        if (!canRead) {
            here.text = getString(R.string.storage_explained, packageName)
        }
    }

    private fun looksLikeImage(file: File): Boolean {
        val name = file.name.lowercase()
        return name.endsWith(".iso") || name.endsWith(".img") || name.endsWith(".bin")
    }

    private fun needsPermission(): Boolean =
        Build.VERSION.SDK_INT >= Build.VERSION_CODES.R && !Environment.isExternalStorageManager()

    private fun askForStorage() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            AlertDialog.Builder(this)
                .setMessage(getString(R.string.storage_explained, packageName))
                .setNegativeButton(R.string.cancel, null)
                .setPositiveButton(R.string.allow_storage) { _, _ ->
                    try {
                        startActivity(
                            Intent(
                                Settings.ACTION_MANAGE_APP_ALL_FILES_ACCESS_PERMISSION,
                                Uri.parse("package:$packageName"),
                            )
                        )
                    } catch (_: Throwable) {
                        try {
                            startActivity(Intent(Settings.ACTION_MANAGE_ALL_FILES_ACCESS_PERMISSION))
                        } catch (_: Throwable) {
                        }
                    }
                }
                .show()
        } else {
            requestPermissions(arrayOf(android.Manifest.permission.READ_EXTERNAL_STORAGE), 1)
        }
    }

    override fun onRequestPermissionsResult(
        requestCode: Int,
        permissions: Array<out String>,
        grantResults: IntArray,
    ) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults)
        refresh()
    }

    override fun onResume() {
        super.onResume()
        refresh()
    }

    private fun pick(file: File) {
        val intent = Intent()
        intent.putExtra(EXTRA_PATH, file.absolutePath)
        setResult(RESULT_OK, intent)
        finish()
    }

    private inner class Adapter : BaseAdapter() {
        override fun getCount(): Int = children.size
        override fun getItem(position: Int): Any = children[position]
        override fun getItemId(position: Int): Long = position.toLong()

        override fun getView(position: Int, convertView: View?, parent: ViewGroup): View {
            val row = (convertView as? LinearLayout) ?: LinearLayout(this@FileBrowserActivity).apply {
                orientation = LinearLayout.VERTICAL
                val margin = (10 * resources.displayMetrics.density).roundToInt()
                setPadding(margin, margin, margin, margin)
                addView(TextView(this@FileBrowserActivity).apply { id = android.R.id.text1; textSize = 15f })
                addView(TextView(this@FileBrowserActivity).apply { id = android.R.id.text2; textSize = 11f })
            }
            val file = children[position]
            val title = row.findViewById<TextView>(android.R.id.text1)
            val detail = row.findViewById<TextView>(android.R.id.text2)
            if (position == 0 && hasParent) {
                title.setText(R.string.up_one)
                detail.text = file.absolutePath
            } else {
                title.text = file.name
                detail.text = if (file.isDirectory) ""
                else android.text.format.Formatter.formatFileSize(this@FileBrowserActivity, file.length())
            }
            return row
        }
    }

    companion object {
        const val EXTRA_PATH = "path"
    }
}

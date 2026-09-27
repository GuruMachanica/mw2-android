package com.mw2.recomp

import android.app.Activity
import android.content.Intent
import android.os.Bundle
import android.view.View
import android.view.ViewGroup
import android.widget.BaseAdapter
import android.widget.Button
import android.widget.LinearLayout
import android.widget.ListView
import android.widget.TextView
import android.widget.Toast
import androidx.activity.result.contract.ActivityResultContracts
import androidx.appcompat.app.AlertDialog
import androidx.appcompat.app.AppCompatActivity
import kotlin.math.roundToInt

/**
 * Choosing which Vulkan the game talks to: the one the phone shipped with,
 * or a driver the player imported as a zip. On Adreno hardware a current
 * Turnip build is often a large step up, and a phone whose vendor stopped
 * updating it has no other way to get one.
 */
class DriverActivity : AppCompatActivity() {

    private lateinit var prefs: Prefs
    private lateinit var store: DriverStore
    private lateinit var current: TextView
    private lateinit var list: ListView
    private var drivers: List<DriverStore.Driver> = emptyList()

    private val pickZip = registerForActivityResult(
        ActivityResultContracts.StartActivityForResult()
    ) { result ->
        if (result.resultCode != Activity.RESULT_OK) return@registerForActivityResult
        val uri = result.data?.data ?: return@registerForActivityResult
        when (val outcome = store.import(uri, uri.lastPathSegment ?: "driver")) {
            is DriverStore.Outcome.Imported -> {
                Toast.makeText(
                    this, getString(R.string.driver_imported, outcome.driver.name), Toast.LENGTH_LONG
                ).show()
                choose(outcome.driver)
            }

            is DriverStore.Outcome.Failed -> {
                AlertDialog.Builder(this)
                    .setTitle(R.string.import_driver)
                    .setMessage(outcome.reason)
                    .setPositiveButton(R.string.close, null)
                    .show()
            }
        }
        refresh()
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_driver)
        prefs = Prefs(this)
        store = DriverStore(this)
        title = getString(R.string.graphics_driver)

        current = findViewById(R.id.driver_current)
        list = findViewById(R.id.driver_list)

        findViewById<Button>(R.id.import_driver).setOnClickListener {
            val intent = Intent(Intent.ACTION_OPEN_DOCUMENT)
            intent.addCategory(Intent.CATEGORY_OPENABLE)
            // Some file providers label a zip as octet-stream, so everything
            // is offered rather than the player being told there is nothing
            // to pick.
            intent.type = "*/*"
            intent.putExtra(
                Intent.EXTRA_MIME_TYPES,
                arrayOf("application/zip", "application/octet-stream", "*/*"),
            )
            pickZip.launch(intent)
        }

        list.setOnItemClickListener { _, _, position, _ ->
            if (position == 0) chooseSystem() else choose(drivers[position - 1])
        }
        list.setOnItemLongClickListener { _, _, position, _ ->
            if (position > 0) confirmRemove(drivers[position - 1])
            true
        }
        refresh()
    }

    private fun refresh() {
        drivers = store.list()
        current.text = getString(R.string.driver_in_use, chosenName())
        list.adapter = Adapter()
    }

    private fun chosenName(): String {
        val directory = prefs.driverDirectory
        if (directory.isEmpty()) return getString(R.string.driver_system)
        return drivers.firstOrNull { it.directory.absolutePath == directory }?.name
            ?: getString(R.string.driver_system)
    }

    private fun chooseSystem() {
        prefs.driverDirectory = ""
        prefs.driverLibrary = ""
        if (NativeBridge.isLoaded()) NativeBridge.nativeSelectDriver("", "")
        refresh()
    }

    private fun choose(driver: DriverStore.Driver) {
        prefs.driverDirectory = driver.directory.absolutePath
        prefs.driverLibrary = driver.library
        if (NativeBridge.isLoaded()) {
            NativeBridge.nativeSelectDriver(driver.directory.absolutePath, driver.library)
        }
        refresh()
    }

    private fun confirmRemove(driver: DriverStore.Driver) {
        AlertDialog.Builder(this)
            .setTitle(driver.name)
            .setMessage(driver.description)
            .setNegativeButton(R.string.cancel, null)
            .setPositiveButton(R.string.driver_remove) { _, _ ->
                if (prefs.driverDirectory == driver.directory.absolutePath) chooseSystem()
                store.remove(driver)
                Toast.makeText(this, R.string.driver_removed, Toast.LENGTH_SHORT).show()
                refresh()
            }
            .show()
    }

    /** The system's driver, then every imported one. */
    private inner class Adapter : BaseAdapter() {
        override fun getCount(): Int = drivers.size + 1
        override fun getItem(position: Int): Any =
            if (position == 0) "system" else drivers[position - 1]

        override fun getItemId(position: Int): Long = position.toLong()

        override fun getView(position: Int, convertView: View?, parent: ViewGroup): View {
            val row = (convertView as? LinearLayout) ?: LinearLayout(this@DriverActivity).apply {
                orientation = LinearLayout.VERTICAL
                val margin = (12 * resources.displayMetrics.density).roundToInt()
                setPadding(margin, margin, margin, margin)
                addView(TextView(this@DriverActivity).apply { id = android.R.id.text1; textSize = 15f })
                addView(TextView(this@DriverActivity).apply { id = android.R.id.text2; textSize = 11f })
            }
            val title = row.findViewById<TextView>(android.R.id.text1)
            val detail = row.findViewById<TextView>(android.R.id.text2)

            val chosenDirectory = prefs.driverDirectory
            if (position == 0) {
                title.text = getString(R.string.driver_system)
                detail.text = if (NativeBridge.isLoaded()) {
                    try {
                        NativeBridge.nativeDriverDescription()
                    } catch (_: Throwable) {
                        ""
                    }
                } else ""
                row.alpha = if (chosenDirectory.isEmpty()) 1f else 0.6f
            } else {
                val driver = drivers[position - 1]
                title.text = driver.name
                detail.text = buildString {
                    if (driver.version.isNotEmpty()) append(driver.version)
                    if (driver.vendor.isNotEmpty()) {
                        if (isNotEmpty()) append(" · ")
                        append(driver.vendor)
                    }
                    if (driver.author.isNotEmpty()) {
                        if (isNotEmpty()) append(" · ")
                        append(driver.author)
                    }
                    if (driver.description.isNotEmpty()) {
                        if (isNotEmpty()) append('\n')
                        append(driver.description)
                    }
                }
                row.alpha = if (chosenDirectory == driver.directory.absolutePath) 1f else 0.6f
            }
            return row
        }
    }
}

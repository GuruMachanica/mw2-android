package com.mw2.recomp

import android.os.Bundle
import android.widget.Button
import android.widget.SeekBar
import android.widget.TextView
import androidx.appcompat.app.AlertDialog
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.SwitchCompat
import kotlin.math.roundToInt

/**
 * Everything the player can change outside a run. Each setting is written
 * the moment it is touched: there is no "apply", because there is nothing
 * to apply to -- the values are read when a run starts.
 */
class SettingsActivity : AppCompatActivity() {

    private lateinit var prefs: Prefs

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_settings)
        prefs = Prefs(this)
        title = getString(R.string.settings)

        // ---- picture ----
        val resolutionLabel: TextView = findViewById(R.id.resolution_label)
        val resolution: SeekBar = findViewById(R.id.resolution)
        resolution.max = 65                       // 35% to 100%
        resolution.progress = ((prefs.resolutionScale * 100f) - 35f).roundToInt().coerceIn(0, 65)
        resolutionLabel.text = getString(R.string.resolution, resolution.progress + 35)
        resolution.setOnSeekBarChangeListener(object : Simple() {
            override fun onProgressChanged(bar: SeekBar, value: Int, fromUser: Boolean) {
                resolutionLabel.text = getString(R.string.resolution, value + 35)
                if (fromUser) prefs.resolutionScale = (value + 35) / 100f
            }
        })

        val renderScaleLabel: TextView = findViewById(R.id.render_scale_label)
        val renderScale: SeekBar = findViewById(R.id.render_scale)
        renderScale.max = 2 // 0 = 1x, 1 = 2x, 2 = 3x
        renderScale.progress = (prefs.renderScale - 1).coerceIn(0, 2)
        renderScaleLabel.text = getString(R.string.render_scale, renderScale.progress + 1)
        renderScale.setOnSeekBarChangeListener(object : Simple() {
            override fun onProgressChanged(bar: SeekBar, value: Int, fromUser: Boolean) {
                renderScaleLabel.text = getString(R.string.render_scale, value + 1)
                if (fromUser) prefs.renderScale = value + 1
            }
        })

        switch(R.id.msaa, prefs.multisampling) { prefs.multisampling = it }
        switch(R.id.prefer60, prefs.prefer60Hz) { prefs.prefer60Hz = it }
        switch(R.id.stats, prefs.showStats) { prefs.showStats = it }

        val textureLabel: TextView = findViewById(R.id.texture_label)
        val texture: SeekBar = findViewById(R.id.texture_budget)
        // 0 means "let the runtime decide"; then 128 MB steps to 2 GB.
        texture.max = 15
        texture.progress = if (prefs.textureBudgetMB <= 0) 0
        else (prefs.textureBudgetMB / 128).coerceIn(1, 15)
        textureLabel.text = textureText(texture.progress)
        texture.setOnSeekBarChangeListener(object : Simple() {
            override fun onProgressChanged(bar: SeekBar, value: Int, fromUser: Boolean) {
                textureLabel.text = textureText(value)
                if (fromUser) prefs.textureBudgetMB = if (value == 0) 0 else value * 128
            }
        })

        // ---- sound ----
        switch(R.id.audio, prefs.audioEnabled) { prefs.audioEnabled = it }

        // ---- controls ----
        switch(R.id.touch, prefs.touchControls) { prefs.touchControls = it }
        switch(R.id.gamepad, prefs.gamepadEnabled) { prefs.gamepadEnabled = it }
        switch(R.id.vibration, prefs.vibration) { prefs.vibration = it }
        switch(R.id.invert, prefs.invertLook) { prefs.invertLook = it }

        slider(
            R.id.look_x, R.id.look_x_label, prefs.lookSensitivityX,
            { getString(R.string.look_x, it) }, { prefs.lookSensitivityX = it },
        )
        slider(
            R.id.look_y, R.id.look_y_label, prefs.lookSensitivityY,
            { getString(R.string.look_y, it) }, { prefs.lookSensitivityY = it },
        )

        val smoothingLabel: TextView = findViewById(R.id.smoothing_label)
        val smoothing: SeekBar = findViewById(R.id.smoothing)
        smoothing.max = 90
        smoothing.progress = (prefs.lookSmoothing * 100f).roundToInt().coerceIn(0, 90)
        smoothingLabel.text = getString(R.string.smoothing, smoothing.progress)
        smoothing.setOnSeekBarChangeListener(object : Simple() {
            override fun onProgressChanged(bar: SeekBar, value: Int, fromUser: Boolean) {
                smoothingLabel.text = getString(R.string.smoothing, value)
                if (fromUser) prefs.lookSmoothing = value / 100f
            }
        })

        // ---- the game files ----
        val paths: TextView = findViewById(R.id.paths)
        paths.text = if (prefs.gameDirectory.isEmpty()) getString(R.string.paths_none)
        else getString(R.string.paths_line, prefs.gameDirectory)

        findViewById<Button>(R.id.forget).setOnClickListener {
            AlertDialog.Builder(this)
                .setTitle(R.string.forget_install)
                .setMessage(R.string.forget_explained)
                .setNegativeButton(R.string.cancel, null)
                .setPositiveButton(R.string.reset) { _, _ ->
                    prefs.gameDirectory = ""
                    paths.text = getString(R.string.paths_none)
                }
                .show()
        }
    }

    private fun textureText(step: Int): String =
        if (step == 0) getString(R.string.texture_budget_auto)
        else getString(R.string.texture_budget, step * 128)

    private fun switch(id: Int, initial: Boolean, onChange: (Boolean) -> Unit) {
        val view: SwitchCompat = findViewById(id)
        view.isChecked = initial
        view.setOnCheckedChangeListener { _, checked -> onChange(checked) }
    }

    /** A 0.2 to 4.0 slider with a label that follows it. */
    private fun slider(
        sliderId: Int,
        labelId: Int,
        initial: Float,
        label: (Float) -> String,
        onChange: (Float) -> Unit,
    ) {
        val text: TextView = findViewById(labelId)
        val bar: SeekBar = findViewById(sliderId)
        bar.max = 38                                     // 0.2 .. 4.0 in tenths
        bar.progress = ((initial - 0.2f) * 10f).roundToInt().coerceIn(0, 38)
        text.text = label(initial)
        bar.setOnSeekBarChangeListener(object : Simple() {
            override fun onProgressChanged(view: SeekBar, value: Int, fromUser: Boolean) {
                val amount = 0.2f + value / 10f
                text.text = label(amount)
                if (fromUser) onChange(amount)
            }
        })
    }

    /** The two methods nobody ever needs, out of the way. */
    private abstract class Simple : SeekBar.OnSeekBarChangeListener {
        override fun onStartTrackingTouch(bar: SeekBar) = Unit
        override fun onStopTrackingTouch(bar: SeekBar) = Unit
    }
}

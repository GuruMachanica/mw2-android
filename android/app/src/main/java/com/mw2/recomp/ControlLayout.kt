package com.mw2.recomp

import android.content.Context
import org.json.JSONArray
import org.json.JSONObject
import java.io.File

/** What a control does when it is touched. */
enum class ControlKind {
    /** A round button that holds one of the pad's bits while it is down. */
    BUTTON,

    /** A round button that holds a trigger down (0..255). */
    TRIGGER,

    /** Four-way pad: the bit depends on which quarter is touched. */
    DPAD,

    /** The left stick: a base with a knob that follows the finger. */
    STICK,

    /** The look area: a region where dragging turns the view. */
    LOOK,
}

/**
 * One thing on screen. Positions are fractions of the window so a layout
 * made on one phone still makes sense on another, and sizes are in
 * density-independent pixels so a button is the same size in millimetres on
 * every screen.
 */
data class ControlElement(
    val id: String,
    val kind: ControlKind,
    /** The pad bit (BUTTON), or which trigger (TRIGGER: 0 left, 1 right). */
    val value: Int,
    val label: String,
    var xFrac: Float,
    var yFrac: Float,
    var sizeDp: Float,
    var alpha: Float = 0.45f,
    var visible: Boolean = true,
    /** Tap to hold, tap again to let go. For aiming down sights and crouch. */
    var toggle: Boolean = false,
)

/**
 * The whole on-screen pad: what it is, where it came from, and how it is
 * kept. Saved as json in the app's own folder, so a layout survives an
 * update, and one bad file never stops the game starting -- it falls back to
 * the defaults instead.
 */
class ControlLayout private constructor(val elements: MutableList<ControlElement>) {

    fun find(id: String): ControlElement? = elements.firstOrNull { it.id == id }

    fun resetAll() {
        val fresh = defaults()
        elements.clear()
        elements.addAll(fresh.elements)
    }

    fun reset(id: String) {
        val fresh = defaults().find(id) ?: return
        val index = elements.indexOfFirst { it.id == id }
        if (index >= 0) elements[index] = fresh
    }

    fun toJson(): String {
        val array = JSONArray()
        for (element in elements) {
            val item = JSONObject()
            item.put("id", element.id)
            item.put("x", element.xFrac.toDouble())
            item.put("y", element.yFrac.toDouble())
            item.put("size", element.sizeDp.toDouble())
            item.put("alpha", element.alpha.toDouble())
            item.put("visible", element.visible)
            item.put("toggle", element.toggle)
            array.put(item)
        }
        val root = JSONObject()
        root.put("version", FORMAT_VERSION)
        root.put("elements", array)
        return root.toString(2)
    }

    fun save(context: Context) {
        try {
            val file = File(context.filesDir, FILE_NAME)
            // Written beside and moved into place: a layout being saved as
            // the process is killed must not leave a half-written file that
            // the next start cannot read.
            val temporary = File(context.filesDir, "$FILE_NAME.part")
            temporary.writeText(toJson())
            if (!temporary.renameTo(file)) {
                file.writeText(toJson())
                temporary.delete()
            }
        } catch (_: Throwable) {
            // A layout that cannot be saved is a small loss; crashing over
            // it would be a large one.
        }
    }

    companion object {
        private const val FILE_NAME = "controls.json"
        private const val FORMAT_VERSION = 1

        fun load(context: Context): ControlLayout {
            val layout = defaults()
            val file = File(context.filesDir, FILE_NAME)
            if (!file.exists()) return layout
            try {
                val root = JSONObject(file.readText())
                val array = root.optJSONArray("elements") ?: return layout
                for (i in 0 until array.length()) {
                    val item = array.optJSONObject(i) ?: continue
                    // Only what the app still knows about: an element dropped
                    // in a later version is ignored rather than resurrected,
                    // and a new one keeps its default.
                    val element = layout.find(item.optString("id")) ?: continue
                    element.xFrac = item.optDouble("x", element.xFrac.toDouble())
                        .toFloat().coerceIn(0.02f, 0.98f)
                    element.yFrac = item.optDouble("y", element.yFrac.toDouble())
                        .toFloat().coerceIn(0.02f, 0.98f)
                    element.sizeDp = item.optDouble("size", element.sizeDp.toDouble())
                        .toFloat().coerceIn(32f, 900f)
                    element.alpha = item.optDouble("alpha", element.alpha.toDouble())
                        .toFloat().coerceIn(0.05f, 1f)
                    element.visible = item.optBoolean("visible", element.visible)
                    element.toggle = item.optBoolean("toggle", element.toggle)
                }
            } catch (_: Throwable) {
                return defaults()
            }
            return layout
        }

        /**
         * Where everything starts. Thumbs reach the bottom corners, so
         * movement and aiming live there; the face buttons sit above the
         * right thumb in the diamond a controller has, because that is the
         * shape the muscle memory of anyone who played this game has.
         */
        fun defaults(): ControlLayout = ControlLayout(
            mutableListOf(
                // The whole right half is the look area, under the buttons:
                // it is hit-tested last, so a finger that lands on a button
                // presses the button and a finger anywhere else turns the view.
                ControlElement("look", ControlKind.LOOK, 0, "Look", 0.72f, 0.5f, 560f, 0.0f),

                ControlElement("stick", ControlKind.STICK, 0, "Move", 0.14f, 0.72f, 150f, 0.40f),
                ControlElement("dpad", ControlKind.DPAD, 0, "D-pad", 0.10f, 0.28f, 120f, 0.40f),

                ControlElement("a", ControlKind.BUTTON, NativeBridge.A, "A", 0.905f, 0.80f, 62f),
                ControlElement("b", ControlKind.BUTTON, NativeBridge.B, "B", 0.965f, 0.64f, 62f),
                ControlElement("x", ControlKind.BUTTON, NativeBridge.X, "X", 0.845f, 0.64f, 62f),
                ControlElement("y", ControlKind.BUTTON, NativeBridge.Y, "Y", 0.905f, 0.48f, 62f),

                // Fire and aim, where a phone's index fingers already are.
                ControlElement("rt", ControlKind.TRIGGER, 1, "Fire", 0.945f, 0.18f, 86f, 0.45f),
                ControlElement("lt", ControlKind.TRIGGER, 0, "Aim", 0.055f, 0.18f, 86f, 0.45f, toggle = true),
                ControlElement("rb", ControlKind.BUTTON, NativeBridge.RB, "RB", 0.845f, 0.18f, 60f),
                ControlElement("lb", ControlKind.BUTTON, NativeBridge.LB, "LB", 0.155f, 0.18f, 60f),

                // Sprint and melee: the stick clicks, which no thumb can do
                // on glass, so they get buttons of their own.
                ControlElement("l3", ControlKind.BUTTON, NativeBridge.L3, "Run", 0.285f, 0.83f, 58f),
                ControlElement("r3", ControlKind.BUTTON, NativeBridge.R3, "Melee", 0.745f, 0.86f, 58f),

                ControlElement("start", ControlKind.BUTTON, NativeBridge.START, "Start", 0.60f, 0.07f, 48f, 0.35f),
                ControlElement("back", ControlKind.BUTTON, NativeBridge.BACK, "Back", 0.40f, 0.07f, 48f, 0.35f),
            )
        )
    }
}

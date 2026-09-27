package com.mw2.recomp

import android.annotation.SuppressLint
import android.content.Context
import android.graphics.Canvas
import android.graphics.Color
import android.graphics.DashPathEffect
import android.graphics.Paint
import android.graphics.Path
import android.graphics.RectF
import android.util.AttributeSet
import android.view.MotionEvent
import android.view.View
import kotlin.math.hypot
import kotlin.math.max
import kotlin.math.min
import kotlin.math.roundToInt

/**
 * The on-screen pad: what it looks like, what a finger on it means, and the
 * editor that lets the player move it about.
 *
 * Two jobs in one view because they are the same geometry seen twice. In
 * play it reads fingers and pushes a controller state at the runtime; in
 * edit it reads fingers and moves the controls themselves. Nothing here
 * talks to the guest directly -- it all goes through NativeBridge, which is
 * the only thing the runtime sees.
 */
class TouchOverlayView @JvmOverloads constructor(
    context: Context,
    attrs: AttributeSet? = null,
) : View(context, attrs) {

    var layout: ControlLayout = ControlLayout.defaults()
        set(value) {
            field = value
            releaseEverything()
            invalidate()
        }

    /** Told when the selection changes so the editor's panel can follow. */
    var onSelectionChanged: ((ControlElement?) -> Unit)? = null

    /** Told when a control was moved or resized, so the layout can be saved. */
    var onLayoutEdited: (() -> Unit)? = null

    var editing: Boolean = false
        set(value) {
            if (field == value) return
            field = value
            releaseEverything()
            selected = if (value) selected else null
            invalidate()
        }

    var selected: ControlElement? = null
        private set

    /** Snapping makes a tidy row possible with a thumb; the editor offers it. */
    var snapToGrid: Boolean = false

    private val density = resources.displayMetrics.density

    // ---- what is being touched right now ----------------------------------
    // A pointer is claimed by one control for as long as it is down, so a
    // thumb that slides off the fire button keeps firing -- which is what
    // every phone shooter does, and what a player expects.
    private val claims = HashMap<Int, ControlElement>()
    private val stickPositions = HashMap<String, FloatArray>()   // id -> normalised x, y
    private val dpadBits = HashMap<String, Int>()
    private val held = HashSet<String>()
    private val toggled = HashSet<String>()
    private var lookPointer = -1
    private var lookLastX = 0f
    private var lookLastY = 0f

    // ---- editing -----------------------------------------------------------
    private var dragPointer = -1
    private var dragElement: ControlElement? = null
    private var dragOffsetX = 0f
    private var dragOffsetY = 0f
    private var dragMoved = false
    private var pinchStartDistance = 0f
    private var pinchStartSize = 0f
    private var pinching = false

    private val fill = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.FILL }
    private val stroke = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 2f * density
    }
    private val text = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        textAlign = Paint.Align.CENTER
        isFakeBoldText = true
    }
    private val dashed = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 2f * density
        pathEffect = DashPathEffect(floatArrayOf(10f * density, 8f * density), 0f)
    }
    private val path = Path()
    private val box = RectF()

    init {
        isFocusable = false
        isClickable = false
        setWillNotDraw(false)
    }

    // ---- geometry ----------------------------------------------------------

    private fun centreX(element: ControlElement) = element.xFrac * width
    private fun centreY(element: ControlElement) = element.yFrac * height
    private fun radius(element: ControlElement) = element.sizeDp * density * 0.5f

    /** The look area is a rectangle; everything else is a circle. */
    private fun rectOf(element: ControlElement, into: RectF) {
        val halfWidth = element.sizeDp * density * 0.5f
        val halfHeight = halfWidth * 0.62f
        into.set(
            centreX(element) - halfWidth, centreY(element) - halfHeight,
            centreX(element) + halfWidth, centreY(element) + halfHeight,
        )
    }

    private fun hit(element: ControlElement, x: Float, y: Float): Boolean {
        if (element.kind == ControlKind.LOOK) {
            rectOf(element, box)
            return box.contains(x, y)
        }
        // A touch a little outside still counts: glass has no edges to feel,
        // and a button that needs to be hit exactly is a button that gets
        // missed in a firefight.
        val slack = 6f * density
        return hypot(x - centreX(element), y - centreY(element)) <= radius(element) + slack
    }

    /** Buttons first, the look area last: it sits under everything. */
    private fun elementAt(x: Float, y: Float, includeHidden: Boolean = false): ControlElement? {
        for (element in layout.elements) {
            if (element.kind == ControlKind.LOOK) continue
            if (!element.visible && !includeHidden) continue
            if (hit(element, x, y)) return element
        }
        for (element in layout.elements) {
            if (element.kind != ControlKind.LOOK) continue
            if (!element.visible && !includeHidden) continue
            if (hit(element, x, y)) return element
        }
        return null
    }

    // ---- the state the guest sees -------------------------------------------

    private fun pushState() {
        var buttons = 0
        var leftTrigger = 0
        var rightTrigger = 0
        var leftX = 0f
        var leftY = 0f

        for (element in layout.elements) {
            if (!element.visible) continue
            val on = held.contains(element.id) || toggled.contains(element.id)
            when (element.kind) {
                ControlKind.BUTTON -> if (on) buttons = buttons or element.value
                ControlKind.TRIGGER -> if (on) {
                    if (element.value == 0) leftTrigger = 255 else rightTrigger = 255
                }
                ControlKind.DPAD -> buttons = buttons or (dpadBits[element.id] ?: 0)
                ControlKind.STICK -> {
                    val position = stickPositions[element.id]
                    if (position != null) {
                        leftX += position[0]
                        leftY += position[1]
                    }
                }
                ControlKind.LOOK -> Unit   // sent as deltas, not as a stick
            }
        }
        NativeBridge.nativeTouchState(
            buttons, leftTrigger, rightTrigger,
            leftX.coerceIn(-1f, 1f), leftY.coerceIn(-1f, 1f),
            0f, 0f,
        )
    }

    /** Everything up: called when the pad is hidden, edited, or paused. */
    fun releaseEverything() {
        claims.clear()
        stickPositions.clear()
        dpadBits.clear()
        held.clear()
        // Toggles survive a pause -- a player who was aiming down sights
        // before the phone rang is still aiming when they come back -- but
        // not the editor, which would otherwise leave a bit stuck down.
        if (editing) toggled.clear()
        lookPointer = -1
        if (NativeBridge.isLoaded()) {
            NativeBridge.nativeLookEnd()
            pushState()
        }
        invalidate()
    }

    // ---- touches --------------------------------------------------------------

    @SuppressLint("ClickableViewAccessibility")
    override fun onTouchEvent(event: MotionEvent): Boolean {
        if (editing) return editTouch(event)
        return playTouch(event)
    }

    private fun playTouch(event: MotionEvent): Boolean {
        var changed = false
        when (event.actionMasked) {
            MotionEvent.ACTION_DOWN, MotionEvent.ACTION_POINTER_DOWN -> {
                val index = event.actionIndex
                changed = press(event.getPointerId(index), event.getX(index), event.getY(index))
            }

            MotionEvent.ACTION_MOVE -> {
                for (index in 0 until event.pointerCount) {
                    val id = event.getPointerId(index)
                    val x = event.getX(index)
                    val y = event.getY(index)
                    if (id == lookPointer) {
                        // Every sample between frames matters for a smooth
                        // turn, so the batched history is used too.
                        for (h in 0 until event.historySize) {
                            sendLook(event.getHistoricalX(index, h), event.getHistoricalY(index, h))
                        }
                        sendLook(x, y)
                        continue
                    }
                    val element = claims[id] ?: continue
                    when (element.kind) {
                        ControlKind.STICK -> { moveStick(element, x, y); changed = true }
                        ControlKind.DPAD -> { moveDpad(element, x, y); changed = true }
                        else -> Unit
                    }
                }
            }

            MotionEvent.ACTION_UP, MotionEvent.ACTION_POINTER_UP -> {
                val index = event.actionIndex
                changed = release(event.getPointerId(index))
            }

            MotionEvent.ACTION_CANCEL -> {
                releaseEverything()
                return true
            }
        }
        if (changed) {
            pushState()
            invalidate()
        }
        return true
    }

    private fun press(pointerId: Int, x: Float, y: Float): Boolean {
        val element = elementAt(x, y) ?: return false
        if (element.kind == ControlKind.LOOK) {
            lookPointer = pointerId
            lookLastX = x
            lookLastY = y
            return false
        }
        claims[pointerId] = element
        when (element.kind) {
            ControlKind.STICK -> moveStick(element, x, y)
            ControlKind.DPAD -> moveDpad(element, x, y)
            ControlKind.BUTTON, ControlKind.TRIGGER -> {
                if (element.toggle) {
                    if (!toggled.remove(element.id)) toggled.add(element.id)
                } else {
                    held.add(element.id)
                }
            }
            ControlKind.LOOK -> Unit
        }
        return true
    }

    private fun release(pointerId: Int): Boolean {
        if (pointerId == lookPointer) {
            lookPointer = -1
            NativeBridge.nativeLookEnd()
            return false
        }
        val element = claims.remove(pointerId) ?: return false
        when (element.kind) {
            ControlKind.STICK -> stickPositions.remove(element.id)
            ControlKind.DPAD -> dpadBits.remove(element.id)
            else -> held.remove(element.id)
        }
        return true
    }

    private fun sendLook(x: Float, y: Float) {
        val dx = x - lookLastX
        val dy = y - lookLastY
        lookLastX = x
        lookLastY = y
        if (dx != 0f || dy != 0f) NativeBridge.nativeLookDelta(dx, dy)
    }

    private fun moveStick(element: ControlElement, x: Float, y: Float) {
        val r = radius(element)
        var dx = (x - centreX(element)) / r
        // The guest's Y points up; the screen's points down.
        var dy = -(y - centreY(element)) / r
        val length = hypot(dx, dy)
        if (length > 1f) { dx /= length; dy /= length }
        stickPositions[element.id] = floatArrayOf(dx, dy)
    }

    private fun moveDpad(element: ControlElement, x: Float, y: Float) {
        val r = radius(element)
        val dx = (x - centreX(element)) / r
        val dy = (y - centreY(element)) / r
        // A dead centre press means nothing; past a third of the way out it
        // is a direction, and both axes can be on at once for the diagonals.
        val threshold = 0.32f
        var bits = 0
        if (dy < -threshold) bits = bits or NativeBridge.UP
        if (dy > threshold) bits = bits or NativeBridge.DOWN
        if (dx < -threshold) bits = bits or NativeBridge.LEFT
        if (dx > threshold) bits = bits or NativeBridge.RIGHT
        dpadBits[element.id] = bits
    }

    // ---- editing ----------------------------------------------------------------

    fun select(element: ControlElement?) {
        selected = element
        onSelectionChanged?.invoke(element)
        invalidate()
    }

    private fun editTouch(event: MotionEvent): Boolean {
        when (event.actionMasked) {
            MotionEvent.ACTION_DOWN -> {
                val x = event.x
                val y = event.y
                // Hidden controls are still reachable in the editor: turning
                // one back on is impossible otherwise.
                val element = elementAt(x, y, includeHidden = true)
                if (element != null) {
                    select(element)
                    dragPointer = event.getPointerId(0)
                    dragElement = element
                    dragOffsetX = centreX(element) - x
                    dragOffsetY = centreY(element) - y
                    dragMoved = false
                } else {
                    select(null)
                    dragElement = null
                    dragPointer = -1
                }
            }

            MotionEvent.ACTION_POINTER_DOWN -> {
                // Two fingers on the selected control resize it.
                val element = dragElement ?: selected
                if (element != null && event.pointerCount == 2) {
                    pinching = true
                    pinchStartDistance = max(1f, spread(event))
                    pinchStartSize = element.sizeDp
                }
            }

            MotionEvent.ACTION_MOVE -> {
                val element = dragElement ?: selected ?: return true
                if (pinching && event.pointerCount >= 2) {
                    val scale = spread(event) / pinchStartDistance
                    element.sizeDp = (pinchStartSize * scale)
                        .coerceIn(minimumSize(element), maximumSize(element))
                    dragMoved = true
                    onSelectionChanged?.invoke(element)
                    invalidate()
                    return true
                }
                val index = event.findPointerIndex(dragPointer)
                if (index < 0) return true
                var x = event.getX(index) + dragOffsetX
                var y = event.getY(index) + dragOffsetY
                if (snapToGrid) {
                    val step = 24f * density
                    x = (x / step).roundToInt() * step
                    y = (y / step).roundToInt() * step
                }
                // Kept on screen, with a margin so nothing hides under the
                // gesture bar or a punch-hole camera.
                val margin = 8f * density
                element.xFrac = (x.coerceIn(margin, width - margin)) / max(1, width)
                element.yFrac = (y.coerceIn(margin, height - margin)) / max(1, height)
                dragMoved = true
                invalidate()
            }

            MotionEvent.ACTION_POINTER_UP -> {
                if (event.pointerCount <= 2) pinching = false
            }

            MotionEvent.ACTION_UP, MotionEvent.ACTION_CANCEL -> {
                if (dragMoved) onLayoutEdited?.invoke()
                dragPointer = -1
                dragElement = null
                pinching = false
                dragMoved = false
            }
        }
        return true
    }

    private fun minimumSize(element: ControlElement): Float =
        if (element.kind == ControlKind.LOOK) 120f else 36f

    private fun maximumSize(element: ControlElement): Float =
        if (element.kind == ControlKind.LOOK) 900f else 200f

    private fun spread(event: MotionEvent): Float {
        if (event.pointerCount < 2) return 1f
        return hypot(event.getX(0) - event.getX(1), event.getY(0) - event.getY(1))
    }

    // ---- drawing ------------------------------------------------------------------

    override fun onDraw(canvas: Canvas) {
        for (element in layout.elements) {
            if (!element.visible && !editing) continue
            val faded = editing && !element.visible
            val alpha = if (editing) max(0.28f, element.alpha) else element.alpha
            when (element.kind) {
                ControlKind.LOOK -> drawLook(canvas, element, faded)
                ControlKind.STICK -> drawStick(canvas, element, alpha, faded)
                ControlKind.DPAD -> drawDpad(canvas, element, alpha, faded)
                ControlKind.BUTTON, ControlKind.TRIGGER -> drawButton(canvas, element, alpha, faded)
            }
            if (editing && element === selected) drawSelection(canvas, element)
        }
    }

    private fun shade(alpha: Float, pressed: Boolean, faded: Boolean): Int {
        val a = (alpha * (if (faded) 0.45f else 1f) * 255).toInt().coerceIn(0, 255)
        return if (pressed) Color.argb(min(255, a + 70), 255, 255, 255)
        else Color.argb(a, 235, 238, 242)
    }

    private fun isOn(element: ControlElement): Boolean =
        held.contains(element.id) || toggled.contains(element.id)

    private fun drawButton(canvas: Canvas, element: ControlElement, alpha: Float, faded: Boolean) {
        val r = radius(element)
        val pressed = isOn(element)
        fill.color = Color.argb(
            (alpha * (if (faded) 0.45f else 1f) * (if (pressed) 150 else 70)).toInt().coerceIn(0, 255),
            10, 12, 16,
        )
        canvas.drawCircle(centreX(element), centreY(element), r, fill)
        stroke.color = shade(alpha, pressed, faded)
        stroke.strokeWidth = max(1.5f, r * 0.055f)
        canvas.drawCircle(centreX(element), centreY(element), r - stroke.strokeWidth * 0.5f, stroke)
        text.color = shade(alpha, pressed, faded)
        text.textSize = r * (if (element.label.length > 2) 0.52f else 0.8f)
        canvas.drawText(
            element.label, centreX(element),
            centreY(element) - (text.descent() + text.ascent()) * 0.5f, text,
        )
        if (element.toggle) {
            // A small mark, so "this one stays down" is visible at a glance.
            stroke.strokeWidth = max(1f, r * 0.05f)
            canvas.drawArc(
                centreX(element) - r * 0.82f, centreY(element) - r * 0.82f,
                centreX(element) + r * 0.82f, centreY(element) + r * 0.82f,
                -60f, 120f, false, stroke,
            )
        }
    }

    private fun drawStick(canvas: Canvas, element: ControlElement, alpha: Float, faded: Boolean) {
        val r = radius(element)
        val position = stickPositions[element.id]
        fill.color = Color.argb((alpha * (if (faded) 0.45f else 1f) * 60).toInt().coerceIn(0, 255), 10, 12, 16)
        canvas.drawCircle(centreX(element), centreY(element), r, fill)
        stroke.color = shade(alpha, false, faded)
        stroke.strokeWidth = max(1.5f, r * 0.035f)
        canvas.drawCircle(centreX(element), centreY(element), r - stroke.strokeWidth, stroke)

        val knobX = centreX(element) + (position?.get(0) ?: 0f) * r * 0.62f
        val knobY = centreY(element) - (position?.get(1) ?: 0f) * r * 0.62f
        fill.color = shade(alpha, position != null, faded)
        canvas.drawCircle(knobX, knobY, r * 0.36f, fill)
    }

    private fun drawDpad(canvas: Canvas, element: ControlElement, alpha: Float, faded: Boolean) {
        val r = radius(element)
        val arm = r * 0.42f
        val cx = centreX(element)
        val cy = centreY(element)
        val bits = dpadBits[element.id] ?: 0
        fill.color = Color.argb((alpha * (if (faded) 0.45f else 1f) * 70).toInt().coerceIn(0, 255), 10, 12, 16)
        path.reset()
        path.moveTo(cx - arm, cy - r)
        path.lineTo(cx + arm, cy - r)
        path.lineTo(cx + arm, cy - arm)
        path.lineTo(cx + r, cy - arm)
        path.lineTo(cx + r, cy + arm)
        path.lineTo(cx + arm, cy + arm)
        path.lineTo(cx + arm, cy + r)
        path.lineTo(cx - arm, cy + r)
        path.lineTo(cx - arm, cy + arm)
        path.lineTo(cx - r, cy + arm)
        path.lineTo(cx - r, cy - arm)
        path.lineTo(cx - arm, cy - arm)
        path.close()
        canvas.drawPath(path, fill)
        stroke.color = shade(alpha, false, faded)
        stroke.strokeWidth = max(1.5f, r * 0.045f)
        canvas.drawPath(path, stroke)

        // The quarter being pressed, filled in.
        fill.color = shade(alpha, true, faded)
        if (bits and NativeBridge.UP != 0) canvas.drawRect(cx - arm, cy - r, cx + arm, cy - arm, fill)
        if (bits and NativeBridge.DOWN != 0) canvas.drawRect(cx - arm, cy + arm, cx + arm, cy + r, fill)
        if (bits and NativeBridge.LEFT != 0) canvas.drawRect(cx - r, cy - arm, cx - arm, cy + arm, fill)
        if (bits and NativeBridge.RIGHT != 0) canvas.drawRect(cx + arm, cy - arm, cx + r, cy + arm, fill)
    }

    private fun drawLook(canvas: Canvas, element: ControlElement, faded: Boolean) {
        // Invisible while playing: it is a region, not a control.
        if (!editing) return
        rectOf(element, box)
        dashed.color = if (faded) Color.argb(90, 120, 170, 255) else Color.argb(170, 120, 170, 255)
        canvas.drawRoundRect(box, 14f * density, 14f * density, dashed)
        text.color = dashed.color
        text.textSize = 15f * density
        canvas.drawText(element.label, box.centerX(), box.centerY(), text)
    }

    private fun drawSelection(canvas: Canvas, element: ControlElement) {
        stroke.color = Color.argb(230, 120, 200, 120)
        stroke.strokeWidth = 2.5f * density
        if (element.kind == ControlKind.LOOK) {
            rectOf(element, box)
            box.inset(-6f * density, -6f * density)
            canvas.drawRoundRect(box, 16f * density, 16f * density, stroke)
        } else {
            canvas.drawCircle(centreX(element), centreY(element), radius(element) + 7f * density, stroke)
        }
    }

    /** Used by the editor's panel to keep the drawing in step with a slider. */
    fun refresh() = invalidate()
}

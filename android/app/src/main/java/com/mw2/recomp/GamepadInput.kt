package com.mw2.recomp

import android.view.InputDevice
import android.view.KeyEvent
import android.view.MotionEvent
import kotlin.math.abs

/**
 * A physical controller, turned into the same state the touch pad produces.
 *
 * Android reports pads through two channels -- keys for the buttons, motion
 * events for the sticks and triggers -- and a device can appear on either
 * before the other. Both are funnelled here so the runtime sees one pad per
 * player, whichever way its parts arrived.
 *
 * The whole thing can be switched off (Prefs.gamepadEnabled). That is not a
 * nicety: plenty of phones enumerate something as a gamepad that is not one,
 * and a stick reading half-left that nobody is touching makes the game
 * unplayable in a way nothing else explains.
 */
class GamepadInput {

    private var enabled = true

    /** Android device id -> player slot, 0..3. */
    private val slots = HashMap<Int, Int>()
    private val buttons = IntArray(4)
    private val axes = Array(4) { FloatArray(4) }       // lx, ly, rx, ry
    private val triggers = Array(4) { IntArray(2) }

    fun setEnabled(value: Boolean) {
        if (enabled == value) return
        enabled = value
        NativeBridge.nativePadEnabled(value)
        if (!value) {
            // Everything let go, or whatever was held stays held forever.
            for (slot in 0 until 4) {
                buttons[slot] = 0
                axes[slot].fill(0f)
                triggers[slot][0] = 0
                triggers[slot][1] = 0
                push(slot)
            }
        } else {
            refreshDevices()
        }
    }

    fun isEnabled(): Boolean = enabled

    /** Called at start-up and whenever a device is added or removed. */
    fun refreshDevices() {
        val seen = HashSet<Int>()
        for (id in InputDevice.getDeviceIds()) {
            val device = InputDevice.getDevice(id) ?: continue
            if (!isPad(device)) continue
            seen.add(id)
            if (!slots.containsKey(id)) {
                val slot = (0 until 4).firstOrNull { free -> !slots.containsValue(free) } ?: continue
                slots[id] = slot
                if (enabled) NativeBridge.nativePadConnected(slot, true)
            }
        }
        val gone = slots.keys.filter { it !in seen }
        for (id in gone) {
            val slot = slots.remove(id) ?: continue
            buttons[slot] = 0
            axes[slot].fill(0f)
            triggers[slot][0] = 0
            triggers[slot][1] = 0
            NativeBridge.nativePadConnected(slot, false)
        }
    }

    fun hasAnyPad(): Boolean = slots.isNotEmpty()

    private fun isPad(device: InputDevice): Boolean {
        if (device.isVirtual) return false
        val sources = device.sources
        val joystick = sources and InputDevice.SOURCE_JOYSTICK == InputDevice.SOURCE_JOYSTICK
        val gamepad = sources and InputDevice.SOURCE_GAMEPAD == InputDevice.SOURCE_GAMEPAD
        return joystick || gamepad
    }

    private fun slotFor(deviceId: Int): Int {
        slots[deviceId]?.let { return it }
        // A device that sent an event before the enumeration saw it.
        val slot = (0 until 4).firstOrNull { free -> !slots.containsValue(free) } ?: 0
        slots[deviceId] = slot
        NativeBridge.nativePadConnected(slot, true)
        return slot
    }

    /** True when the event was a pad's and has been dealt with. */
    fun onKey(event: KeyEvent): Boolean {
        if (!enabled) return false
        val source = event.source
        val fromPad = source and InputDevice.SOURCE_GAMEPAD == InputDevice.SOURCE_GAMEPAD ||
            source and InputDevice.SOURCE_JOYSTICK == InputDevice.SOURCE_JOYSTICK
        if (!fromPad) return false
        val bit = bitFor(event.keyCode)
        if (bit == 0) return false
        val slot = slotFor(event.deviceId)
        when (event.action) {
            KeyEvent.ACTION_DOWN -> buttons[slot] = buttons[slot] or bit
            KeyEvent.ACTION_UP -> buttons[slot] = buttons[slot] and bit.inv()
            else -> return false
        }
        push(slot)
        return true
    }

    fun onMotion(event: MotionEvent): Boolean {
        if (!enabled) return false
        if (event.source and InputDevice.SOURCE_JOYSTICK != InputDevice.SOURCE_JOYSTICK) return false
        if (event.action != MotionEvent.ACTION_MOVE) return false
        val slot = slotFor(event.deviceId)

        val lx = axis(event, MotionEvent.AXIS_X)
        val ly = axis(event, MotionEvent.AXIS_Y)
        val rx = if (has(event, MotionEvent.AXIS_Z)) axis(event, MotionEvent.AXIS_Z)
        else axis(event, MotionEvent.AXIS_RX)
        val ry = if (has(event, MotionEvent.AXIS_RZ)) axis(event, MotionEvent.AXIS_RZ)
        else axis(event, MotionEvent.AXIS_RY)

        axes[slot][0] = lx
        // The guest's sticks point up; Android's point down.
        axes[slot][1] = -ly
        axes[slot][2] = rx
        axes[slot][3] = -ry

        val lt = event.getAxisValue(MotionEvent.AXIS_LTRIGGER).takeIf { it > 0f }
            ?: event.getAxisValue(MotionEvent.AXIS_BRAKE)
        val rt = event.getAxisValue(MotionEvent.AXIS_RTRIGGER).takeIf { it > 0f }
            ?: event.getAxisValue(MotionEvent.AXIS_GAS)
        triggers[slot][0] = (lt.coerceIn(0f, 1f) * 255f).toInt()
        triggers[slot][1] = (rt.coerceIn(0f, 1f) * 255f).toInt()

        // Some pads report the d-pad as a hat rather than as keys.
        val hatX = event.getAxisValue(MotionEvent.AXIS_HAT_X)
        val hatY = event.getAxisValue(MotionEvent.AXIS_HAT_Y)
        var bits = buttons[slot] and
            (NativeBridge.UP or NativeBridge.DOWN or NativeBridge.LEFT or NativeBridge.RIGHT).inv()
        if (hatX < -0.5f) bits = bits or NativeBridge.LEFT
        if (hatX > 0.5f) bits = bits or NativeBridge.RIGHT
        if (hatY < -0.5f) bits = bits or NativeBridge.UP
        if (hatY > 0.5f) bits = bits or NativeBridge.DOWN
        buttons[slot] = bits

        push(slot)
        return true
    }

    private fun has(event: MotionEvent, axis: Int): Boolean =
        event.device?.getMotionRange(axis, event.source) != null

    /**
     * One axis, with the device's own flat zone taken out. A worn stick that
     * rests at 0.12 would otherwise walk the player into a wall; the device
     * knows how far it drifts and says so.
     */
    private fun axis(event: MotionEvent, which: Int): Float {
        val range = event.device?.getMotionRange(which, event.source)
        val raw = event.getAxisValue(which)
        val flat = range?.flat ?: 0.05f
        val dead = maxOf(flat, 0.08f)
        if (abs(raw) <= dead) return 0f
        val sign = if (raw < 0) -1f else 1f
        return sign * ((abs(raw) - dead) / (1f - dead)).coerceIn(0f, 1f)
    }

    private fun push(slot: Int) {
        NativeBridge.nativePadState(
            slot, buttons[slot], triggers[slot][0], triggers[slot][1],
            axes[slot][0], axes[slot][1], axes[slot][2], axes[slot][3],
        )
    }

    private fun bitFor(keyCode: Int): Int = when (keyCode) {
        KeyEvent.KEYCODE_BUTTON_A -> NativeBridge.A
        KeyEvent.KEYCODE_BUTTON_B -> NativeBridge.B
        KeyEvent.KEYCODE_BUTTON_X -> NativeBridge.X
        KeyEvent.KEYCODE_BUTTON_Y -> NativeBridge.Y
        KeyEvent.KEYCODE_BUTTON_L1 -> NativeBridge.LB
        KeyEvent.KEYCODE_BUTTON_R1 -> NativeBridge.RB
        KeyEvent.KEYCODE_BUTTON_THUMBL -> NativeBridge.L3
        KeyEvent.KEYCODE_BUTTON_THUMBR -> NativeBridge.R3
        KeyEvent.KEYCODE_BUTTON_START, KeyEvent.KEYCODE_MENU -> NativeBridge.START
        KeyEvent.KEYCODE_BUTTON_SELECT -> NativeBridge.BACK
        KeyEvent.KEYCODE_DPAD_UP -> NativeBridge.UP
        KeyEvent.KEYCODE_DPAD_DOWN -> NativeBridge.DOWN
        KeyEvent.KEYCODE_DPAD_LEFT -> NativeBridge.LEFT
        KeyEvent.KEYCODE_DPAD_RIGHT -> NativeBridge.RIGHT
        else -> 0
    }
}

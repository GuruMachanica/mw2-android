// The Android app is a thin shell around the runtime: a surface to present
// into, a touch pad, and the settings the runtime reads out of the
// environment. Everything that matters is in ../runtime.
plugins {
    id("com.android.application") version "8.7.3" apply false
    id("org.jetbrains.kotlin.android") version "2.0.21" apply false
}

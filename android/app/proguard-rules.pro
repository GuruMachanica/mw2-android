# The native library calls back into Kotlin by name: the listener's methods
# are looked up with GetMethodID (runtime/android/jni.cpp), so the shrinker
# must not rename or remove them.
-keep class com.mw2.recomp.NativeBridge { *; }
-keep interface com.mw2.recomp.NativeListener { *; }
-keepclasseswithmembernames class * { native <methods>; }

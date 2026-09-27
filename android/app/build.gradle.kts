plugins {
    id("com.android.application")
    id("org.jetbrains.kotlin.android")
}

// The native build is the repository's own CMakeLists.txt, two folders up.
// Nothing about the runtime is duplicated here: the same project that makes
// the desktop executable makes libmw2.so, with ANDROID set (cmake/android.cmake).
val repositoryRoot = file("../..")

android {
    namespace = "com.mw2.recomp"
    compileSdk = 35
    // r27 is the first NDK whose linker aligns a library for 16 KB pages by
    // default and whose clang is new enough for the recompiled code's size.
    ndkVersion = "27.2.12479018"

    defaultConfig {
        applicationId = "com.mw2.recomp"
        // Android 8.0. AAudio, ASurfaceControl-free presenting, and the
        // Vulkan 1.1 drivers this renderer needs all predate it; below that
        // there is no device with the memory to run this anyway.
        minSdk = 26
        targetSdk = 35
        versionCode = 1
        versionName = "1.0"

        ndk {
            // The guest's address space is 4 GiB reserved in one mapping, so
            // a 32-bit process cannot host it at all.
            abiFilters += "arm64-v8a"
        }

        externalNativeBuild {
            cmake {
                arguments += listOf(
                    "-DANDROID_STL=c++_shared",
                    // The runtime's optional parts, all off: they cost frames
                    // and the phone has none to spare.
                    "-DMW2_DIAGNOSTICS=OFF",
                    "-DMW2_USE_SDL=OFF",
                    "-DMW2_LOGGING=ON",
                    "-DCMAKE_BUILD_TYPE=Release",
                )
                cppFlags += "-O3"
            }
        }
    }

    // The disc carries two executables and each is recompiled into a tree of
    // its own (build.sh TITLE=sp|mp). They are separate apps: each is a
    // hundred-odd megabytes of recompiled code, and nobody wants both in one
    // download.
    flavorDimensions += "title"
    productFlavors {
        create("campaign") {
            dimension = "title"
            applicationIdSuffix = ".sp"
            versionNameSuffix = "-campaign"
            resValue("string", "app_name", "MW2 Campaign")
            externalNativeBuild { cmake { arguments += "-DMW2_TITLE=sp" } }
        }
        create("multiplayer") {
            dimension = "title"
            applicationIdSuffix = ".mp"
            versionNameSuffix = "-multiplayer"
            resValue("string", "app_name", "MW2 Multiplayer")
            externalNativeBuild { cmake { arguments += "-DMW2_TITLE=mp" } }
        }
    }

    externalNativeBuild {
        cmake {
            path = File(repositoryRoot, "CMakeLists.txt")
            version = "3.22.1+"
        }
    }

    buildTypes {
        release {
            isMinifyEnabled = true
            isShrinkResources = true
            proguardFiles(getDefaultProguardFile("proguard-android-optimize.txt"), "proguard-rules.pro")
            // The library is enormous and the debug info larger still; it is
            // kept beside the build for reading crash reports against.
            ndk { debugSymbolLevel = "SYMBOL_TABLE" }
        }
        debug {
            isMinifyEnabled = false
            isJniDebuggable = true
        }
    }

    packaging {
        jniLibs {
            // The apk is installed extracted: the runtime dlopens the
            // adrenotools hook libraries by path, and a driver loaded from a
            // zip needs real files on disk beside them.
            useLegacyPackaging = true
        }
    }

    buildFeatures {
        buildConfig = true
        viewBinding = false
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }
    kotlinOptions {
        jvmTarget = "17"
    }
}

dependencies {
    implementation("androidx.core:core-ktx:1.15.0")
    implementation("androidx.appcompat:appcompat:1.7.0")
    implementation("androidx.activity:activity-ktx:1.9.3")
    implementation("androidx.documentfile:documentfile:1.0.1")
}

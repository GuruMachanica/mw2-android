plugins {
    id("com.android.application")
    id("org.jetbrains.kotlin.android")
}

// The native build is the repository's own CMakeLists.txt, two folders up.
// Nothing about the runtime is duplicated here: the same project that makes
// the desktop executable makes libmw2.so, with ANDROID set (cmake/android.cmake).
val repositoryRoot = file("../..")

// What a build machine may set, so that a CI job does not need a patched copy
// of this file (.github/workflows/android.yml):
//
//   MW2_NDK_VERSION        which NDK to use, when the runner has another one
//   MW2_NATIVE_OPTIMISATION  -O2 compiles the recompiled tree a good deal
//                          quicker than -O3 and runs within a few percent of
//                          it; a runner with six hours cares about that
//   MW2_COMPILER_LAUNCHER  ccache, usually
//   MW2_XEX_SHA256_SP/MP   the hashes the installer checks a player's own
//                          copy against, for a build that has the recompiled
//                          sources but not the disc they came from
//   MW2_KEYSTORE and friends  a signing key, so the apk is installable
fun setting(name: String): String? = System.getenv(name)?.trim()?.ifEmpty { null }

// The app's own sources have to be here. They went missing once -- written,
// built against, and never committed -- and the result was an apk that
// installed, launched, and died on a manifest pointing at classes that did
// not exist. An empty source tree is not a warning, it is a broken build.
val kotlinSources = fileTree("src/main/java") { include("**/*.kt") }.files
if (kotlinSources.size < 10) {
    throw GradleException(
        "Only ${kotlinSources.size} Kotlin sources under android/app/src/main/java. " +
            "The app cannot be built from this tree -- check that they are committed " +
            "(git ls-files '*.kt')."
    )
}

android {
    namespace = "com.mw2.recomp"
    compileSdk = 35
    // r27 is the first NDK whose linker aligns a library for 16 KB pages by
    // default and whose clang is new enough for the recompiled code's size.
    ndkVersion = setting("MW2_NDK_VERSION") ?: "27.2.12479018"

    defaultConfig {
        applicationId = "com.mw2.recomp"
        // Android 8.0. AAudio, ASurfaceControl-free presenting, and the
        // Vulkan 1.1 drivers this renderer needs all predate it; below that
        // there is no device with the memory to run this anyway.
        minSdk = 26
        targetSdk = 35
        versionCode = 1
        // Which build this is, carried inside the apk. "The wrong apk" has
        // cost more than one evening, and every time the only way to settle
        // it was to guess. The launcher shows this and Android's app info
        // shows it, so the file on the phone can be matched against the run
        // that made it without downloading anything twice.
        versionName = "1.0 (${setting("MW2_BUILD_SHA") ?: "local"})"
        buildConfigField("String", "BUILD_SHA", "\"${setting("MW2_BUILD_SHA") ?: "local"}\"")
        buildConfigField("String", "BUILD_STAMP", "\"${setting("MW2_BUILD_STAMP") ?: "unstamped"}\"")

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
                setting("MW2_COMPILER_LAUNCHER")?.let {
                    arguments += listOf(
                        "-DCMAKE_C_COMPILER_LAUNCHER=$it",
                        "-DCMAKE_CXX_COMPILER_LAUNCHER=$it",
                    )
                }
                val sp = setting("MW2_XEX_SHA256_SP")
                val mp = setting("MW2_XEX_SHA256_MP")
                if (sp != null && mp != null) {
                    arguments += listOf("-DMW2_XEX_SHA256_SP=$sp", "-DMW2_XEX_SHA256_MP=$mp")
                }
                cppFlags += (setting("MW2_NATIVE_OPTIMISATION") ?: "-O3")
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

    // A release apk with no key is not installable, and an app nobody can
    // install is not a build. A key given in the environment is used; without
    // one the debug key signs it, which Android accepts and which makes it
    // plain that this is not a store build.
    signingConfigs {
        val keystorePath = setting("MW2_KEYSTORE")
        if (keystorePath != null && file(keystorePath).exists()) {
            create("supplied") {
                storeFile = file(keystorePath)
                storePassword = setting("MW2_KEYSTORE_PASSWORD")
                keyAlias = setting("MW2_KEY_ALIAS")
                keyPassword = setting("MW2_KEY_PASSWORD") ?: setting("MW2_KEYSTORE_PASSWORD")
            }
        }
    }

    buildTypes {
        release {
            signingConfig = signingConfigs.findByName("supplied")
                ?: signingConfigs.getByName("debug")
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

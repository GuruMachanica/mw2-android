package com.mw2.recomp

import android.content.Context
import android.net.Uri
import org.json.JSONObject
import java.io.File
import java.io.InputStream
import java.util.zip.ZipInputStream

/**
 * The drivers the player has imported.
 *
 * A driver package is a plain zip: a meta.json naming the library inside it,
 * and the library itself. It is unpacked into filesDir/drivers/<name>/,
 * which is the layout the loader expects (runtime/android/driver.cpp) and
 * the one every other app that does this uses, so a package downloaded for
 * one works here.
 */
class DriverStore(private val context: Context) {

    data class Driver(
        val directory: File,
        val name: String,
        val description: String,
        val author: String,
        val version: String,
        val library: String,
        val vendor: String,
        val minimumApi: Int,
    )

    private val root: File get() = File(context.filesDir, "drivers").apply { mkdirs() }

    fun list(): List<Driver> {
        val folders = root.listFiles() ?: return emptyList()
        return folders.filter { it.isDirectory }
            .mapNotNull { read(it) }
            .sortedBy { it.name.lowercase() }
    }

    private fun read(directory: File): Driver? {
        val meta = File(directory, "meta.json")
        if (!meta.exists()) return null
        return try {
            val json = JSONObject(meta.readText())
            val library = json.optString("libraryName")
            if (library.isEmpty() || !File(directory, library).exists()) return null
            Driver(
                directory = directory,
                name = json.optString("name", directory.name),
                description = json.optString("description", ""),
                author = json.optString("author", ""),
                version = json.optString("driverVersion", json.optString("packageVersion", "")),
                library = library,
                vendor = json.optString("vendor", ""),
                minimumApi = json.optInt("minApi", 0),
            )
        } catch (_: Throwable) {
            null
        }
    }

    /** What went wrong, or the driver that is now in place. */
    sealed class Outcome {
        data class Imported(val driver: Driver) : Outcome()
        data class Failed(val reason: String) : Outcome()
    }

    /**
     * Unpacks a zip the player picked. Everything is written into a folder
     * of its own and only moved into place once meta.json has been read and
     * makes sense, so a half-unpacked archive never becomes a driver the
     * runtime then fails to load.
     */
    fun import(uri: Uri, suggestedName: String): Outcome {
        val staging = File(context.cacheDir, "driver-import-${System.currentTimeMillis()}")
        staging.mkdirs()
        try {
            val stream = context.contentResolver.openInputStream(uri)
                ?: return Outcome.Failed(context.getString(R.string.driver_bad_zip))
            stream.use { unzip(it, staging) }

            // Some archives hold one folder with everything inside it.
            var content = staging
            if (!File(content, "meta.json").exists()) {
                val only = content.listFiles()?.singleOrNull { it.isDirectory }
                if (only != null && File(only, "meta.json").exists()) content = only
            }
            val metaFile = File(content, "meta.json")
            if (!metaFile.exists()) return Outcome.Failed(context.getString(R.string.driver_bad_zip))

            val json = JSONObject(metaFile.readText())
            val library = json.optString("libraryName")
            if (library.isEmpty() || !File(content, library).exists()) {
                return Outcome.Failed(context.getString(R.string.driver_bad_zip))
            }
            if (!looksLikeArm64(File(content, library))) {
                return Outcome.Failed(context.getString(R.string.driver_not_arm64))
            }

            val minApi = json.optInt("minApi", 0)
            if (minApi > 0 && android.os.Build.VERSION.SDK_INT < minApi) {
                return Outcome.Failed("Driver requires Android API $minApi (device has ${android.os.Build.VERSION.SDK_INT})")
            }

            val name = json.optString("name", suggestedName).ifEmpty { suggestedName }
            val driverFolderName = safeName(name)
            val target = File(root, driverFolderName).canonicalFile
            val rootCanonical = root.canonicalFile
            if (!target.path.startsWith(rootCanonical.path + File.separator)) {
                return Outcome.Failed(context.getString(R.string.driver_bad_zip))
            }

            val tempTarget = File(root, ".import-${System.currentTimeMillis()}").canonicalFile
            tempTarget.deleteRecursively()
            if (!content.renameTo(tempTarget)) {
                content.copyRecursively(tempTarget, overwrite = true)
            }
            val driver = read(tempTarget)
            if (driver == null) {
                tempTarget.deleteRecursively()
                return Outcome.Failed(context.getString(R.string.driver_bad_zip))
            }
            target.deleteRecursively()
            if (!tempTarget.renameTo(target)) {
                tempTarget.copyRecursively(target, overwrite = true)
                tempTarget.deleteRecursively()
            }
            val finalDriver = read(target) ?: return Outcome.Failed(context.getString(R.string.driver_bad_zip))
            return Outcome.Imported(finalDriver)
        } catch (error: Throwable) {
            return Outcome.Failed(error.message ?: context.getString(R.string.driver_bad_zip))
        } finally {
            staging.deleteRecursively()
        }
    }

    fun remove(driver: Driver) {
        val canonicalDir = driver.directory.canonicalFile
        val rootCanonical = root.canonicalFile
        if (canonicalDir.path.startsWith(rootCanonical.path + File.separator)) {
            canonicalDir.deleteRecursively()
        }
    }

    private fun safeName(name: String): String {
        val cleaned = name
            .map { if (it.isLetterOrDigit() || it == '-' || it == '_') it else '_' }
            .joinToString("")
        val result = cleaned.trim('_', '.').ifEmpty { "driver" }.take(48)
        return if (result == "." || result == ".." || result.isEmpty()) "driver" else result
    }

    /**
     * The first bytes of an ELF say what machine it is for. A driver built
     * for the wrong one would fail to load with a message nobody can act
     * on; this way the app can say so plainly.
     */
    private fun looksLikeArm64(library: File): Boolean = try {
        library.inputStream().use { stream ->
            val header = ByteArray(20)
            if (stream.read(header) < 20) false
            else {
                val elf = header[0] == 0x7F.toByte() && header[1] == 'E'.code.toByte() &&
                    header[2] == 'L'.code.toByte() && header[3] == 'F'.code.toByte()
                val sixtyFour = header[4].toInt() == 2
                // e_machine, little endian, at offset 18: 0xB7 is AArch64.
                val machine = (header[18].toInt() and 0xFF) or ((header[19].toInt() and 0xFF) shl 8)
                elf && sixtyFour && machine == 0xB7
            }
        }
    } catch (_: Throwable) {
        false
    }

    /**
     * Zip extraction with the traversal check every unzip needs: an entry
     * named ../../something would otherwise write wherever it liked.
     */
    private fun unzip(stream: InputStream, into: File) {
        ZipInputStream(stream.buffered()).use { zip ->
            var total = 0L
            while (true) {
                val entry = zip.nextEntry ?: break
                val destination = File(into, entry.name).canonicalFile
                if (!destination.path.startsWith(into.canonicalFile.path + File.separator)) {
                    zip.closeEntry()
                    continue
                }
                if (entry.isDirectory) {
                    destination.mkdirs()
                } else {
                    destination.parentFile?.mkdirs()
                    destination.outputStream().use { out ->
                        val buffer = ByteArray(64 * 1024)
                        while (true) {
                            val read = zip.read(buffer)
                            if (read <= 0) break
                            total += read
                            // A driver is a few tens of megabytes; anything
                            // beyond this is not one.
                            if (total > 512L * 1024 * 1024) throw IllegalStateException("too large")
                            out.write(buffer, 0, read)
                        }
                    }
                }
                zip.closeEntry()
            }
        }
    }
}

package nl.sense_os.jniexample;

/**
 * Created by panjiyudasetya on 6/5/17.
 */

// Wrapper for native library
public class SecretLib {

    static {
        System.loadLibrary("secret_lib");
    }

    public static native String getFirstSecret();
    public static native String getSecondSecret();
}

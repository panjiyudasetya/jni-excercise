//
// Created by Panji Yudasetya Wiwaha on 6/5/17.
//
#include <jni.h>
#include <stdlib.h>
#include <secret.h>

static Secret* g_secret = NULL;

Secret* getSecretInstance() {
    if (g_secret == NULL) g_secret = new Secret();
    return g_secret;
}

extern "C" {
    JNIEXPORT jstring JNICALL Java_nl_sense_1os_jniexample_SecretLib_getFirstSecret(JNIEnv* env, jobject obj);
    JNIEXPORT jstring JNICALL Java_nl_sense_1os_jniexample_SecretLib_getSecondSecret(JNIEnv* env, jobject obj);
};

JNIEXPORT jstring JNICALL
Java_nl_sense_1os_jniexample_SecretLib_getFirstSecret (JNIEnv* env, jobject obj) {
    g_secret = getSecretInstance();
    return env->NewStringUTF(g_secret->getFirstSecret());
}

JNIEXPORT jstring JNICALL
Java_nl_sense_1os_jniexample_SecretLib_getSecondSecret (JNIEnv* env, jobject obj) {
    g_secret = getSecretInstance();
    return env->NewStringUTF(g_secret->getSecondSecret());
}
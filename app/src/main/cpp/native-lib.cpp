#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_reicast_emulator_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++ cmake android";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_reicast_emulator_GL2JNINative_RegisterNative(JNIEnv *env, jobject instance,
                                                      jboolean touchpad) {

    // TODO
    return 1;
}

extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_config(JNIEnv *env, jclass type, jstring dirName_) {
    const char *dirName = env->GetStringUTFChars(dirName_, 0);

    // TODO

    env->ReleaseStringUTFChars(dirName_, dirName);
}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_init(JNIEnv *env, jclass type, jstring fileName_) {
    const char *fileName = env->GetStringUTFChars(fileName_, 0);

    // TODO

    env->ReleaseStringUTFChars(fileName_, fileName);
}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_run(JNIEnv *env, jclass type, jobject track) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_stop(JNIEnv *env, jclass type) {

    // TODO

}extern "C"
JNIEXPORT jint JNICALL
Java_com_reicast_emulator_emu_JNIdc_send(JNIEnv *env, jclass type, jint cmd, jint opt) {

    // TODO
    return 1;
}extern "C"
JNIEXPORT jint JNICALL
Java_com_reicast_emulator_emu_JNIdc_data(JNIEnv *env, jclass type, jint cmd, jbyteArray data_) {
    jbyte *data = env->GetByteArrayElements(data_, NULL);

    // TODO

    env->ReleaseByteArrayElements(data_, data, 0);
    return 1;
}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_rendinit(JNIEnv *env, jclass type, jint w, jint y) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_rendframe(JNIEnv *env, jclass type) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_kcode(JNIEnv *env, jclass type, jintArray kcode_, jintArray lt_,
                                          jintArray rt_, jintArray jx_, jintArray jy_) {
    jint *kcode = env->GetIntArrayElements(kcode_, NULL);
    jint *lt = env->GetIntArrayElements(lt_, NULL);
    jint *rt = env->GetIntArrayElements(rt_, NULL);
    jint *jx = env->GetIntArrayElements(jx_, NULL);
    jint *jy = env->GetIntArrayElements(jy_, NULL);

    // TODO

    env->ReleaseIntArrayElements(kcode_, kcode, 0);
    env->ReleaseIntArrayElements(lt_, lt, 0);
    env->ReleaseIntArrayElements(rt_, rt, 0);
    env->ReleaseIntArrayElements(jx_, jx, 0);
    env->ReleaseIntArrayElements(jy_, jy, 0);
}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_vjoy(JNIEnv *env, jclass type, jint id, jfloat x, jfloat y,
                                         jfloat w, jfloat h) {

    // TODO

}extern "C"
JNIEXPORT jint JNICALL
Java_com_reicast_emulator_emu_JNIdc_play(JNIEnv *env, jclass type, jshortArray result_, jint size) {
    jshort *result = env->GetShortArrayElements(result_, NULL);

    // TODO

    env->ReleaseShortArrayElements(result_, result, 0);
    return 1;
}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_initControllers(JNIEnv *env, jclass type,
                                                    jbooleanArray controllers_) {
    jboolean *controllers = env->GetBooleanArrayElements(controllers_, NULL);

    // TODO

    env->ReleaseBooleanArrayElements(controllers_, controllers, 0);
}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_setupMic(JNIEnv *env, jclass type, jobject sip) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_diskSwap(JNIEnv *env, jclass type, jstring disk_) {
    const char *disk = env->GetStringUTFChars(disk_, 0);

    // TODO

    env->ReleaseStringUTFChars(disk_, disk);
}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_vmuSwap(JNIEnv *env, jclass type) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_setupVmu(JNIEnv *env, jclass type, jobject sip) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_dynarec(JNIEnv *env, jclass type, jint dynarec) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_idleskip(JNIEnv *env, jclass type, jint idleskip) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_unstable(JNIEnv *env, jclass type, jint unstable) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_cable(JNIEnv *env, jclass type, jint cable) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_region(JNIEnv *env, jclass type, jint region) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_broadcast(JNIEnv *env, jclass type, jint broadcast) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_limitfps(JNIEnv *env, jclass type, jint limiter) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_nobatch(JNIEnv *env, jclass type, jint nobatch) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_nosound(JNIEnv *env, jclass type, jint noaudio) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_mipmaps(JNIEnv *env, jclass type, jint mipmaps) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_widescreen(JNIEnv *env, jclass type, jint stretch) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_subdivide(JNIEnv *env, jclass type, jint subdivide) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_frameskip(JNIEnv *env, jclass type, jint frames) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_pvrrender(JNIEnv *env, jclass type, jint render) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_syncedrender(JNIEnv *env, jclass type, jint sync) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_cheatdisk(JNIEnv *env, jclass type, jstring disk_) {
    const char *disk = env->GetStringUTFChars(disk_, 0);

    // TODO

    env->ReleaseStringUTFChars(disk_, disk);
}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_usereios(JNIEnv *env, jclass type, jint reios) {

    // TODO

}extern "C"
JNIEXPORT void JNICALL
Java_com_reicast_emulator_emu_JNIdc_dreamtime(JNIEnv *env, jclass type, jlong clock) {

    // TODO

}
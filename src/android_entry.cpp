#include <jni.h>

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
    JNIEnv* env{};
    constexpr auto version{JNI_VERSION_1_6};
    if (!vm->AttachCurrentThread(&env, reserved))
        return {};

    return version;
}
#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_dongchao_trainee_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello 超哥";
    return env->NewStringUTF(hello.c_str());
}
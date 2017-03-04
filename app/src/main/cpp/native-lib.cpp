#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_spencerfricke_tango_1ndk_1multiplayer_MainActivity_stringFromJNI(
    JNIEnv *env,
    jobject /* this */) {
  std::string hello = "Hello from C++";
  return env->NewStringUTF(hello.c_str());
}

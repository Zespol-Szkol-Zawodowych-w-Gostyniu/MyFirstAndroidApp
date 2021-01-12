#include <jni.h>
#include <string>
#include <iostream>
#include "netcalc.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapplication_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}



extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_myapplication_MainActivity_calcRun(JNIEnv *env, jobject thiz, jstring ip) {
    const char *a = env->GetStringUTFChars(ip, NULL);
    std::string b = (std::string)a;
    ModuleNet::calc obj = ModuleNet::calc(b);
    std::string s = obj.getsubnet();
    return env->NewStringUTF(s.c_str());
}
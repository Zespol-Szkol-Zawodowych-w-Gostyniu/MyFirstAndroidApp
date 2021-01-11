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
Java_com_example_myapplication_MainActivity_calcRun(JNIEnv *env, jobject thiz) {
    ModuleNet::calc obj = ModuleNet::calc("192.168.25.130/24");
    std::string s="jhgjhgjgjhgj";
    return env->NewStringUTF(s.c_str());
}
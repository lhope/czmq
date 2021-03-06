/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "czmq.h"
#include "org_zeromq_czmq_Zdigest.h"

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zdigest__1_1new (JNIEnv *env, jclass c)
{
    //  Disable CZMQ signal handling; allow Java to deal with it
    zsys_handler_set (NULL);
    jlong new_ = (jlong) (intptr_t) zdigest_new ();
    return new_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zdigest__1_1destroy (JNIEnv *env, jclass c, jlong self)
{
    zdigest_destroy ((zdigest_t **) &self);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zdigest__1_1update (JNIEnv *env, jclass c, jlong self, jbyteArray buffer, jlong length)
{
    jbyte *buffer_ = (byte *) (*env)->GetByteArrayElements (env, buffer, 0);
    zdigest_update ((zdigest_t *) (intptr_t) self, buffer_, (size_t) length);
    (*env)->ReleaseByteArrayElements (env, buffer, (jbyte *) buffer_, 0);
}

JNIEXPORT jbyteArray JNICALL
Java_org_zeromq_czmq_Zdigest__1_1data (JNIEnv *env, jclass c, jlong self)
{
    jbyte *data_ = (jbyte *) zdigest_data ((zdigest_t *) (intptr_t) self);
    jint return_size_ = (jint) zdigest_size ((zdigest_t *) (intptr_t) self);
    jbyteArray return_data_ = (*env)->NewByteArray (env, return_size_);
    (*env)->SetByteArrayRegion (env, return_data_, 0, return_size_, (jbyte *) data_);
    return return_data_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zdigest__1_1size (JNIEnv *env, jclass c, jlong self)
{
    jlong size_ = (jlong) zdigest_size ((zdigest_t *) (intptr_t) self);
    return size_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_Zdigest__1_1string (JNIEnv *env, jclass c, jlong self)
{
    char *string_ = (char *) zdigest_string ((zdigest_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, string_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zdigest__1_1test (JNIEnv *env, jclass c, jboolean verbose)
{
    zdigest_test ((bool) verbose);
}


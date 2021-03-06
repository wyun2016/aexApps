/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_androidex_devices_aexddKMY350 */

#ifndef _Included_com_androidex_devices_aexddKMY350
#define _Included_com_androidex_devices_aexddKMY350
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint JNICALL aexddKMY350_JNI_OnLoad(JavaVM *vm, void *reserved);
JNIEXPORT void JNICALL aexddKMY350_JNI_OnUnload(JavaVM* vm, void* reserved);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyOpen
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jstring JNICALL Java_com_androidex_devices_aexddKMY350_kmyOpen
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyClose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_androidex_devices_aexddKMY350_kmyClose
  (JNIEnv *, jobject);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyReset
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddKMY350_kmyReset
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyResetWithPpin
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddKMY350_kmyResetWithPpin
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyGetSn
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_androidex_devices_aexddKMY350_kmyGetSn
  (JNIEnv *, jobject, jint);
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddKMY350_kmySetSn
  (JNIEnv *, jobject, jstring,jint);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyGetVersion
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_androidex_devices_aexddKMY350_kmyGetVersion
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmySetEncryptMode
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddKMY350_kmySetEncryptMode
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyDlMasterKey
 * Signature: (ILjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddKMY350_kmyDlMasterKey
  (JNIEnv *, jobject, jint, jstring, jint);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyDlWorkKey
 * Signature: (IILjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddKMY350_kmyDlWorkKey
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyActiveWorkKey
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddKMY350_kmyActiveWorkKey
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyOpenKeypad
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddKMY350_kmyOpenKeypad
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyDlCardNo
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddKMY350_kmyDlCardNo
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyStartPin
 * Signature: (SSSSSI)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddKMY350_kmyStartPin
  (JNIEnv *, jobject, jshort, jshort, jshort, jshort, jshort, jint);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyPinBlock
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddKMY350_kmyPinBlock
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyReadPin
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_androidex_devices_aexddKMY350_kmyReadPin
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyEncrypt
 * Signature: (Ljava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_androidex_devices_aexddKMY350_kmyEncrypt
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyDecrypt
 * Signature: (Ljava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_androidex_devices_aexddKMY350_kmyDecrypt
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyCalcMacData
 * Signature: (Ljava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_androidex_devices_aexddKMY350_kmyCalcMacData
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_androidex_devices_aexddKMY350
 * Method:    kmyStartReadKey
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_androidex_devices_aexddKMY350_kmyStartReadKey
  (JNIEnv *, jobject, jstring, jint);

JNIEXPORT void JNICALL Java_com_androidex_devices_aexddKMY350_kmySendCmd
        (JNIEnv *, jobject, jint, jstring, jint);
JNIEXPORT void JNICALL Java_com_androidex_devices_aexddKMY350_kmySendHexCmd
        (JNIEnv *, jobject, jint, jstring, jint);

#ifdef __cplusplus
}
#endif
#endif

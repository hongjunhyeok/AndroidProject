/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_hardkernel_wiringpi_MainActivity */

#ifndef _Included_com_hardkernel_wiringpi_MainActivity
#define _Included_com_hardkernel_wiringpi_MainActivity
#ifdef __cplusplus
extern "C" {
#endif
#undef com_hardkernel_wiringpi_MainActivity_VIEW_MODE_RGBA
#define com_hardkernel_wiringpi_MainActivity_VIEW_MODE_RGBA 0L
#undef com_hardkernel_wiringpi_MainActivity_VIEW_MODE_GRAY
#define com_hardkernel_wiringpi_MainActivity_VIEW_MODE_GRAY 1L
#undef com_hardkernel_wiringpi_MainActivity_VIEW_MODE_CANNY
#define com_hardkernel_wiringpi_MainActivity_VIEW_MODE_CANNY 2L
#undef com_hardkernel_wiringpi_MainActivity_VIEW_MODE_FEATURES
#define com_hardkernel_wiringpi_MainActivity_VIEW_MODE_FEATURES 5L
#undef com_hardkernel_wiringpi_MainActivity_INPUT
#define com_hardkernel_wiringpi_MainActivity_INPUT 0L
#undef com_hardkernel_wiringpi_MainActivity_OUTPUT
#define com_hardkernel_wiringpi_MainActivity_OUTPUT 1L
#undef com_hardkernel_wiringpi_MainActivity_PERMISSIONS_REQUEST_CODE
#define com_hardkernel_wiringpi_MainActivity_PERMISSIONS_REQUEST_CODE 1000L
/*
 * Class:     com_hardkernel_wiringpi_MainActivity
 * Method:    ConvertRGBtoGray
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_hardkernel_wiringpi_MainActivity_ConvertRGBtoGray
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_hardkernel_wiringpi_MainActivity
 * Method:    FindFeatures
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_hardkernel_wiringpi_MainActivity_FindFeatures
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_hardkernel_wiringpi_MainActivity
 * Method:    Labling
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_hardkernel_wiringpi_MainActivity_Labling
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_hardkernel_wiringpi_MainActivity
 * Method:    wiringPiSetup
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_hardkernel_wiringpi_MainActivity_wiringPiSetup
  (JNIEnv *, jobject);

/*
 * Class:     com_hardkernel_wiringpi_MainActivity
 * Method:    analogRead
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_hardkernel_wiringpi_MainActivity_analogRead
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_hardkernel_wiringpi_MainActivity
 * Method:    digitalWrite
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_hardkernel_wiringpi_MainActivity_digitalWrite
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_hardkernel_wiringpi_MainActivity
 * Method:    pinMode
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_hardkernel_wiringpi_MainActivity_pinMode
  (JNIEnv *, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif

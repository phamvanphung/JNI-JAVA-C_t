/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class Calculator */

#ifndef _Included_Calculator
#define _Included_Calculator
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     Calculator
 * Method:    display
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_Calculator_display
  (JNIEnv *, jobject);

/*
 * Class:     Calculator
 * Method:    displayName
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_Calculator_displayName
  (JNIEnv *, jobject, jstring);

/*
 * Class:     Calculator
 * Method:    sum
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_Calculator_sum
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     Calculator
 * Method:    sortArray
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_Calculator_sortArray
  (JNIEnv *, jobject, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif

#include <stdio.h>
#include <stdlib.h>
#include <jni.h>

#include "Calculator.h"



JNIEXPORT void JNICALL Java_Calculator_display (JNIEnv *env, jobject obj)
{
		printf("Wellcome to calculator program in file c:");
	
}

JNIEXPORT void JNICALL Java_Calculator_displayName (JNIEnv *env, jobject obj, jstring msg)
{
	// lay gia tri string 
	  const char *mess = (*env)-> GetStringUTFChars(env, msg,JNI_FALSE);
	  
	  printf("\n \n Hello %s wellcome you come back!\n\n",mess);
	  printf("goto java file ->>>\n");
	  
}


JNIEXPORT jint JNICALL Java_Calculator_sum (JNIEnv *evn, jobject obj, jint a, jint b)
{
		return a+ b;
}


jint cmpfunc (const void * a, const void * b) {
   return ( *(jbyte*)a - *(jbyte*)b );
}

JNIEXPORT jbyteArray JNICALL Java_Calculator_sortArray (JNIEnv *env, jobject obj, jbyteArray arr)
{
	// convert jbyteArray to jbyte  array
    jbyte *convertedArr = (*env)-> GetByteArrayElements(env,arr, 0);
    // get length array
    jint length = (*env)-> GetArrayLength(env,arr);
    
    
    // sort array
    qsort(convertedArr, length, sizeof(jbyte), cmpfunc);
    
    
	// create new bytearray
    jbyteArray array = (*env)->NewByteArray(env, length);
    // set jbyte array to byteArray.
    (*env)->SetByteArrayRegion(env, array, 0, length, convertedArr);
    
    //jbyteArray array12 = (*env)->NewByteArray(env, length);
    //char test[2] = {0,1};
    //(*env)->SetByteArrayRegion(env, array12, 0, 2, test);
	return array;

}


  

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_intellif_ifFaceSdkJni_IFFaceSdkJni */

#ifndef _Included_com_intellif_ifFaceSdkJni_IFFaceSdkJni
#define _Included_com_intellif_ifFaceSdkJni_IFFaceSdkJni
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifGetVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifGetVersion
  (JNIEnv *, jobject);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifGetSignature
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifGetSignature
  (JNIEnv *, jobject);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifCheckLicense
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifCheckLicense
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifSetLogLevel
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifSetLogLevel
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifInit
 * Signature: (Lcom/intellif/ifFaceSdkJni/IFModels;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifInit
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifRelease
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifRelease
  (JNIEnv *, jobject);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifSetDetectConfig
 * Signature: (FF)I
 */
JNIEXPORT jint JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifSetDetectConfig
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifNV21ToBgr
 * Signature: ([BII)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifNV21ToBgr
  (JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifDetect
 * Signature: (Lcom/intellif/ifFaceSdkJni/IFImage;FI)[J
 */
JNIEXPORT jlongArray JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifDetect
  (JNIEnv *, jobject, jobject, jfloat, jint);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifDetectAndTrack
 * Signature: (Lcom/intellif/ifFaceSdkJni/IFImage;FI)[J
 */
JNIEXPORT jlongArray JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifDetectAndTrack
  (JNIEnv *, jobject, jobject, jfloat, jint);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifGetFaceRect
 * Signature: (J)Lcom/intellif/ifFaceSdkJni/IFRect;
 */
JNIEXPORT jobject JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifGetFaceRect
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifGetFaceLandmark
 * Signature: (Lcom/intellif/ifFaceSdkJni/IFImage;J)[Lcom/intellif/ifFaceSdkJni/IFPoint;
 */
JNIEXPORT jobjectArray JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifGetFaceLandmark
  (JNIEnv *, jobject, jobject, jlong);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifGetTrackId
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifGetTrackId
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifResetTrack
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifResetTrack
  (JNIEnv *, jobject);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifReleaseFace
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifReleaseFace
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifGetQualityBlurAttribute
 * Signature: (Lcom/intellif/ifFaceSdkJni/IFImage;J)Lcom/intellif/ifFaceSdkJni/IFQualityBlur;
 */
JNIEXPORT jobject JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifGetQualityBlurAttribute
  (JNIEnv *, jobject, jobject, jlong);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifExtract
 * Signature: (Lcom/intellif/ifFaceSdkJni/IFImage;J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifExtract
  (JNIEnv *, jobject, jobject, jlong);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifExtractForFaceGroup
 * Signature: (Lcom/intellif/ifFaceSdkJni/IFImage;J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifExtractForFaceGroup
  (JNIEnv *, jobject, jobject, jlong);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifCompare
 * Signature: ([B[BI)F
 */
JNIEXPORT jfloat JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifCompare
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jint);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifGetFaceMask
 * Signature: (Lcom/intellif/ifFaceSdkJni/IFImage;J)I
 */
JNIEXPORT jint JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifGetFaceMask
  (JNIEnv *, jobject, jobject, jlong);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifGetLivenessIr
 * Signature: (Lcom/intellif/ifFaceSdkJni/IFImage;J)F
 */
JNIEXPORT jfloat JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifGetLivenessIr
  (JNIEnv *, jobject, jobject, jlong);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifIrFilter
 * Signature: ([JLcom/intellif/ifFaceSdkJni/IFImage;F)[I
 */
JNIEXPORT jintArray JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifIrFilter
  (JNIEnv *, jobject, jlongArray, jobject, jfloat);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifCreateFaceGroup
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifCreateFaceGroup
  (JNIEnv *, jobject);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifInsertFaceGroup
 * Signature: (J[BJ)I
 */
JNIEXPORT jint JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifInsertFaceGroup
  (JNIEnv *, jobject, jlong, jbyteArray, jlong);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifRemoveFaceGroup
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifRemoveFaceGroup
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifGetFaceGroupCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifGetFaceGroupCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifResetFaceGroup
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifResetFaceGroup
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifIdentifyFromFaceGroup
 * Signature: (J[B)Lcom/intellif/ifFaceSdkJni/IFIdentifyResult;
 */
JNIEXPORT jobject JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifIdentifyFromFaceGroup
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifTopkFromFaceGroup
 * Signature: (J[BI)[Lcom/intellif/ifFaceSdkJni/IFIdentifyResult;
 */
JNIEXPORT jobjectArray JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifTopkFromFaceGroup
  (JNIEnv *, jobject, jlong, jbyteArray, jint);

/*
 * Class:     com_intellif_ifFaceSdkJni_IFFaceSdkJni
 * Method:    ifReleaseFaceGroup
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_intellif_ifFaceSdkJni_IFFaceSdkJni_ifReleaseFaceGroup
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class vowpalWabbit_learner_VWActionProbsLearner */

#ifndef _Included_vowpalWabbit_learner_VWActionProbsLearner
#define _Included_vowpalWabbit_learner_VWActionProbsLearner
#ifdef __cplusplus
extern "C"
{
#endif
/*
 * Class:     vowpalWabbit_learner_VWActionProbsLearner
 * Method:    predict
 * Signature: (Ljava/lang/String;ZJ)LvowpalWabbit/responses/ActionProbs;
 */
JNIEXPORT jobject JNICALL Java_vowpalWabbit_learner_VWActionProbsLearner_predict
(JNIEnv *, jobject, jstring, jboolean, jlong);

/*
 * Class:     vowpalWabbit_learner_VWActionProbsLearner
 * Method:    predictMultiline
 * Signature: ([Ljava/lang/String;ZJ)LvowpalWabbit/responses/ActionProbs;
 */
JNIEXPORT jobject JNICALL Java_vowpalWabbit_learner_VWActionProbsLearner_predictMultiline
(JNIEnv *, jobject, jobjectArray, jboolean, jlong);

#ifdef __cplusplus
}
#endif
#endif

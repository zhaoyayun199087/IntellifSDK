package com.intellif.ifFaceSdkJni;

public class IFIdentifyResult {
    public float similarity;
    public long idx;

    void setIdentifyResult(float similarity, long idx){
        this.similarity = similarity;
        this.idx = idx;
    }
}
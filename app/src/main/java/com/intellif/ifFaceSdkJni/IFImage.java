package com.intellif.ifFaceSdkJni;

public class IFImage {
    public byte[] data;      // image data
    public int width;        // width
    public int height;       // height
    public int wstride;      // wstride
    public int hstride;      // hstride
    public int pixel_format; // now only support pixel_format = 2, that is bgr
}
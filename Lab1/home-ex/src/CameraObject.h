#pragma once
#include <string>

class CameraObject
{
private:
    std::string name;
    std::string symbol;
    int ResolutionWidth;
    int ResolutionHeight;
    double SensorSizeWidthInMm;
    double SensorSizeHeightInMm;
    unsigned int FramesPerSecond;
    unsigned int ValueOfPixelBitDepth;

public:
    enum PixelBitDepth
    {bit8 = 8, bit9, bit10, bit11, bit12, bit13, bit14, bit15, bit16, bit17, bit18, bit19, bit20, bit21, bit22, bit23, bit24, bit25, bit26, bit27, bit28, bit29, bit30, bit31, bit32};

    enum SensorSize
    {
        Size1_4,
        Size1_3,
        Size1_2,
        Size1_18,
        Size2_3
    };

    CameraObject(int width_N, int height_N, double SensorSizeWidthInMilimeters_N, double SensorSizeHeightInMilimeters_N, unsigned int FramePerSecond_N, unsigned int ValueOfPixelBitDepth_N); 
    ~CameraObject();

    //Name and symbol information
    void SetName(std::string NewName);
    std::string GetName();
    void SetSymbol(std::string NewSymbol);
    std::string GetSymbol();
    

    //Resolution
    void SetResolution(int NewResolutionWidth,int NewResolutionHeight);
    int GetResolutionHeight();
    int GetResolutionWidth();
    unsigned int ResolutionInPx();
    double ResolutionInMegaPx();

    //Sensor Size
    void SensorSelection(SensorSize userSize);
    void SetSensorSize(double NewSensorWidth,double NewSensorHeight);
    double GetSensorSizeWidth();   
    double GetSensorSizeHeight();   
    double SensorSurfaceInMm2();

    //Size of one pixel in mm2
    double OnePixelSizeInMm2();

    //BitDepth 
    void PixelBitDepthSelection(PixelBitDepth userBitDepth);
    unsigned int GetPixelBitDepth();

    //Bitrate
    void SetFramesPerSecond(unsigned int NewFps);
    unsigned int GetFramesPerSecond();
    double Bitrate();
};
#include "CameraObject.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


CameraObject::CameraObject(int width_N = 1, int height_N = 1, double SensorSizeWidthInMilimeters_N = 1, double SensorSizeHeightInMilimeters_N = 1, unsigned int FramePerSecond_N = 1, unsigned int ValueOfPixelBitDepth_N = 8): 
ResolutionWidth(width_N), ResolutionHeight(height_N), SensorSizeWidthInMm(SensorSizeWidthInMilimeters_N), SensorSizeHeightInMm(SensorSizeHeightInMilimeters_N), FramesPerSecond(FramePerSecond_N), ValueOfPixelBitDepth(ValueOfPixelBitDepth_N) 
{
    this->name = "Camera";
    this->symbol = "No";
}

CameraObject::~CameraObject() {}


void CameraObject::SetName(std::string NewName)
{name = NewName;}

std::string CameraObject::GetName()
{return name;}
    
void CameraObject::SetSymbol(std::string NewSymbol)
{symbol = NewSymbol;}
    
std::string CameraObject::GetSymbol()
{return symbol;}


//Resolution 
void CameraObject::SetResolution(int NewResolutionWidth, int NewResolutionHeight)
{
    ResolutionWidth = NewResolutionWidth;
    ResolutionHeight = NewResolutionHeight;    
}

int CameraObject::GetResolutionHeight()
{return ResolutionHeight;}

int CameraObject::GetResolutionWidth()
{return ResolutionWidth;}

unsigned int CameraObject::ResolutionInPx()
{return ResolutionWidth * ResolutionHeight;}

double CameraObject::ResolutionInMegaPx()
{return (round(1000*(ResolutionInPx()/1e6)))/1000;}


//Sensor
void CameraObject::SensorSelection(SensorSize userSize)
{
    switch (userSize)
    {
        case Size1_4:
        {
            SetSensorSize(3.6, 2.7);
            break;
        }
            
        case Size1_3:
        {
            SetSensorSize(4.8, 3.6);
            break; 
        }
                
        case Size1_2:
        {
            SetSensorSize(6.4, 4.8);
            break;    
        }

        case Size1_18:
        {
            SetSensorSize(7.2, 5.4);
            break;
        }

        case Size2_3:
        {
            SetSensorSize(8.8, 6.6);
            break;
        }

        default:
        {
            cout << "Inny, nieznany rozmiar sensora" << endl;
            break;
        }
            
    }
}

void CameraObject::SetSensorSize(double NewSensorWidth, double NewSensorHeight)
{
    SensorSizeWidthInMm = NewSensorWidth;
    SensorSizeHeightInMm = NewSensorHeight;
}

double CameraObject::GetSensorSizeWidth()
{return SensorSizeWidthInMm;}

double CameraObject::GetSensorSizeHeight()
{return SensorSizeHeightInMm;}

double CameraObject::SensorSurfaceInMm2()
{return SensorSizeHeightInMm * SensorSizeWidthInMm;}


//One pixel size
double CameraObject::OnePixelSizeInMm2()
{return SensorSurfaceInMm2()/ResolutionInPx();}


//BitDepth -> bitrate
void CameraObject::PixelBitDepthSelection(PixelBitDepth userBitDepth)
{
    ValueOfPixelBitDepth = unsigned(userBitDepth);
}

unsigned int CameraObject::GetPixelBitDepth()
{return ValueOfPixelBitDepth;}

void CameraObject::SetFramesPerSecond(unsigned int NewFps)
{FramesPerSecond = NewFps;}

unsigned int CameraObject::GetFramesPerSecond()
{return FramesPerSecond;}

double CameraObject::Bitrate()
{
    return (ResolutionInPx()*FramesPerSecond*ValueOfPixelBitDepth/8);
}

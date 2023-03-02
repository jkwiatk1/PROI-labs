// JAN KWIATKOWSKI PROI lab1

#include <iostream>
#include <cstdlib>
#include <cstdio> 
#include <limits>
#include <string>
#include "CameraObject.h"
#include "CameraObject.cpp"
using namespace std;

template<typename T>

bool IsInteger(const T& dataToCheck) 
{
    return sizeof(dataToCheck) == sizeof(int);
}

int convStringToInt(string a)
{
    int v = atoi(a.c_str());
    return v;
}

bool isNum(string t)
{
    int strLength = t.length();
    for (int a = 0; a < strLength; a++)
    {
        if(t[a] > '0' + 9 || t[a] < '0') return false;
    }
    return true;
}

void PressEnter()
{
    cin.get();
    cin.ignore( numeric_limits <streamsize> ::max(), '\n' );
}

void ReadingCameraSizeInPixel(CameraObject &UserCamera)
{
    string CameraPixelWidthInSt = "1";
    string CameraPixelHeighInSt = "1";
    int CameraPixelWidth = 1;
    int CameraPixelHeigh = 1;

    while(true)
    {
        cout << "--Podaj rozdzielczosc kamery--" << endl;
        cout << "Szerokosc w pixelach: ";
        getline(cin,CameraPixelWidthInSt);
        if(isNum(CameraPixelWidthInSt))
        {
            CameraPixelWidth = convStringToInt(CameraPixelWidthInSt);
            if(CameraPixelWidth == 0) {cout << "\nWartosc nie moze byc rowna 0!\n"; PressEnter(); system("CLS");}
            if(CameraPixelWidth < 0) {cout << "\nWartosc nie moze byc liczba ujemna!\n"; PressEnter(); system("CLS");}
            if(CameraPixelWidth > 32000) {cout << "\nWartosc nie moze byc wieksza niz 32000\n"; PressEnter(); system("CLS");} 
            if(CameraPixelWidth > 0 && CameraPixelWidth < 32001) break;
        }
        system("CLS");
    }
    system("CLS");

    while(true)
    {
        cout << "--Podaj rozdzielczosc kamery--" << endl;
        cout << "Wysokosc w pixelach: ";
        getline(cin,CameraPixelHeighInSt);
        if(isNum(CameraPixelHeighInSt))
        {
            CameraPixelHeigh = convStringToInt(CameraPixelHeighInSt);
            if(CameraPixelHeigh == 0) {cout << "\nWartosc nie moze byc rowna 0!\n"; PressEnter(); system("CLS");}
            if(CameraPixelHeigh < 0) {cout << "\nWartosc nie moze byc liczba ujemna!\n"; PressEnter(); system("CLS");}
            if(CameraPixelHeigh > 32000) {cout << "\nWartosc nie moze byc wieksza niz 32000\n"; PressEnter(); system("CLS");} 
            if(CameraPixelHeigh > 0 && CameraPixelHeigh < 32001) break;
        }
        system("CLS");
    }
    system("CLS");

    UserCamera.SetResolution(CameraPixelWidth, CameraPixelHeigh);
}

void ChooseBitDepth(CameraObject &UserCamera)
{
    system("CLS"); 
    string ChooseBitDepthMenuState = "8";
    while(true)
    {
        cout << "Kamera: \"" << UserCamera.GetName() << "\" \tSymbol: \"" << UserCamera.GetSymbol() << "\"" << endl;
        cout << "Podana rodzielczosc to: " << UserCamera.GetResolutionWidth() << "x" << UserCamera.GetResolutionHeight() << " -> Sensor wymiary: " << UserCamera.GetSensorSizeWidth() <<  "x" << UserCamera.GetSensorSizeHeight() <<endl;
        cout << "\n------MENU ROZDZIELCZOSCI BITOWEJ------\n"; 
        cout << "\nWprowadz \'Pixel Bit Depth\' (z zakresu od 8 do 32): ";
        getline(cin,ChooseBitDepthMenuState);
        if(ChooseBitDepthMenuState == "e") exit(0);
        if(isNum(ChooseBitDepthMenuState))
        {
            int BitValue = convStringToInt(ChooseBitDepthMenuState);
            if(BitValue == 8) {UserCamera.PixelBitDepthSelection(CameraObject::bit8); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 9) {UserCamera.PixelBitDepthSelection(CameraObject::bit9); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 10) {UserCamera.PixelBitDepthSelection(CameraObject::bit10); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 11) {UserCamera.PixelBitDepthSelection(CameraObject::bit11); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 12) {UserCamera.PixelBitDepthSelection(CameraObject::bit12); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 13) {UserCamera.PixelBitDepthSelection(CameraObject::bit13); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 14) {UserCamera.PixelBitDepthSelection(CameraObject::bit14); ChooseBitDepthMenuState = "e"; break;}  
            if(BitValue == 15) {UserCamera.PixelBitDepthSelection(CameraObject::bit15); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 16) {UserCamera.PixelBitDepthSelection(CameraObject::bit16); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 17) {UserCamera.PixelBitDepthSelection(CameraObject::bit17); ChooseBitDepthMenuState = "e"; break;}  
            if(BitValue == 18) {UserCamera.PixelBitDepthSelection(CameraObject::bit18); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 19) {UserCamera.PixelBitDepthSelection(CameraObject::bit19); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 20) {UserCamera.PixelBitDepthSelection(CameraObject::bit20); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 21) {UserCamera.PixelBitDepthSelection(CameraObject::bit21); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 22) {UserCamera.PixelBitDepthSelection(CameraObject::bit22); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 23) {UserCamera.PixelBitDepthSelection(CameraObject::bit23); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 24) {UserCamera.PixelBitDepthSelection(CameraObject::bit24); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 25) {UserCamera.PixelBitDepthSelection(CameraObject::bit25); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 26) {UserCamera.PixelBitDepthSelection(CameraObject::bit26); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 27) {UserCamera.PixelBitDepthSelection(CameraObject::bit27); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 28) {UserCamera.PixelBitDepthSelection(CameraObject::bit28); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 29) {UserCamera.PixelBitDepthSelection(CameraObject::bit29); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 30) {UserCamera.PixelBitDepthSelection(CameraObject::bit30); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 31) {UserCamera.PixelBitDepthSelection(CameraObject::bit31); ChooseBitDepthMenuState = "e"; break;} 
            if(BitValue == 32) {UserCamera.PixelBitDepthSelection(CameraObject::bit32); ChooseBitDepthMenuState = "e"; break;} 
        }
        system("CLS");
    }    
} 

void CameraFPS(CameraObject &UserCamera)
{
    system("CLS");
    string CameraFPSValue = "1";
    while(true)
    {
        system("CLS");
        cout << "Kamera: \"" << UserCamera.GetName() << "\" \tSymbol: \"" << UserCamera.GetSymbol() << "\"" << endl;
        cout << "Podana rodzielczosc to: " << UserCamera.GetResolutionWidth() << "x" << UserCamera.GetResolutionHeight() << " -> Sensor wymiary: " << UserCamera.GetSensorSizeWidth() <<  "x" << UserCamera.GetSensorSizeHeight()  << " -> \'Pixel Bit Depth\': "  << UserCamera.GetPixelBitDepth() << endl;
        cout << "\n------MENU FPS------\n"; 
        cout << "\nWprowadz wartosc \'FPS\' (od 1 do 150): ";
        getline(cin,CameraFPSValue);       
        if(CameraFPSValue == "e") exit(0);
        if(isNum(CameraFPSValue))
        {
            int IntFPSValue = convStringToInt(CameraFPSValue);
            if(IntFPSValue > 0 && IntFPSValue < 151)
            {   
                UserCamera.SetFramesPerSecond(unsigned(IntFPSValue));
                break;
            }
        }
    }

}

void ShowAllCameraInformation(CameraObject &UserCamera)
{
    system("CLS");
    cout << "Kamera: \"" << UserCamera.GetName() << "\"" << endl;
    cout << "Symbol: \"" << UserCamera.GetSymbol() << "\"" << endl;
    cout << "Rozmiar:  "<< UserCamera.GetResolutionWidth() << "x" << UserCamera.GetResolutionHeight() << endl;
    cout << "Rozdzielczosc: " << UserCamera.ResolutionInPx() << " Px" << endl;
    cout << "Rozdzielczosc: " << UserCamera.ResolutionInMegaPx() << " MPx" << endl;
    cout << "Wymiary sensora: " << UserCamera.GetSensorSizeWidth() <<  "x" << UserCamera.GetSensorSizeHeight() << endl;
    cout << "Powierzchnia sensora: " << UserCamera.SensorSurfaceInMm2() << " mm^2" << endl;
    cout << "Wielkosc jednego piksela: " << UserCamera.OnePixelSizeInMm2()*1e6 << " mikrometr^2" << endl; 
    cout << "Bit depth: "  << UserCamera.GetPixelBitDepth() << endl;
    cout << "FPS: " << UserCamera.GetFramesPerSecond() << endl;
    cout << "Bitrate: " << UserCamera.Bitrate()/1024 << " kB/s" << endl;
    PressEnter();
}

void Menu(CameraObject &UserCamera)
{    
    string MenuState = "0";
    string NewName;
    string NewSymbol;

    
    cout << "Witaj w programie! By przejsc dalej nacisnij ENTER...";
    PressEnter();
    system("CLS");

    cout << "Podaj nazwe kamery: " << endl;
    getline(cin, NewName);
    UserCamera.SetName(NewName); 
    system("CLS");

    cout << "Podaj symbol kamery: " << endl;
    getline(cin, NewSymbol);
    UserCamera.SetSymbol(NewSymbol); 
    system("CLS");


    ReadingCameraSizeInPixel(UserCamera); 
    system("CLS");
    cout << "Rozdzielczosc w Pixelach: " << UserCamera.ResolutionInPx() <<endl;
    cout << "Rozdzielczosc w Megapixelach: " << UserCamera.ResolutionInMegaPx() << endl;
    PressEnter();
    system("CLS");

    while(true)
    {
        cout << "Kamera: \"" << UserCamera.GetName() << "\" \tSymbol: \"" << UserCamera.GetSymbol() << "\"" << endl;
        cout << "Podana rodzielczosc to: " << UserCamera.GetResolutionWidth() << "x" << UserCamera.GetResolutionHeight() << endl;
        cout << "\n------MENU------\nWybierz wielkosc sensora swojej kamery:\n\nWybierz \"0\" jesli sensor ma wielkosc 1/4\nWybierz \"1\" jesli sensor ma wielkosc 1/3";
        cout << "\nWybierz \"2\" jesli sensor ma wielkosc 1/2\nWybierz \"3\" jesli sensor ma wielkosc 1/1.8\nWybierz \"4\" jesli sensor ma wielkosc 2/3";
        cout << "\nWybierz \"5\" aby zmienic rozdzielczosc";
        cout << "\nWybierz \"6\" aby wyjsc" << endl;
        
        getline(cin,MenuState);

        if(isNum(MenuState))
        {
            int MenuStateInt = convStringToInt(MenuState);
            if(MenuStateInt == 0)  //Sensor 1/4
            {
                cout << "\nWybrano sensor o wielkosci 1/4"  << endl;
                UserCamera.SensorSelection(CameraObject::Size1_4); 
                cout << "Wielkosc pojedynczego pixela w mm2: " << UserCamera.OnePixelSizeInMm2() << endl;
                PressEnter();
                ChooseBitDepth(UserCamera);
                CameraFPS(UserCamera);
                cout << "Bitrate dla " << UserCamera.GetFramesPerSecond() << " FPSow jest rowny: " << UserCamera.Bitrate()/1024 << " kB/s" << endl;
                PressEnter();
                ShowAllCameraInformation(UserCamera);
            } 

            if(MenuStateInt == 1)  //Sensor 1/3
            {
                cout << "\nWybrano sensor o wielkosci 1/3"  << endl;
                UserCamera.SensorSelection(CameraObject::Size1_3); 
                cout << "Wielkosc pojedynczego pixela w mm2: " << UserCamera.OnePixelSizeInMm2() << endl;
                PressEnter();
                ChooseBitDepth(UserCamera);
                CameraFPS(UserCamera);
                cout << "Bitrate dla " << UserCamera.GetFramesPerSecond() << " FPSow jest rowny: " << UserCamera.Bitrate()/1024 << " kB/s" << endl;
                PressEnter();
                ShowAllCameraInformation(UserCamera);
            } 

            if(MenuStateInt == 2)  //Sensor 1/2
            {
                cout << "\nWybrano sensor o wielkosci 1/2"  << endl;
                UserCamera.SensorSelection(CameraObject::Size1_2); 
                cout << "Wielkosc pojedynczego pixela w mm2: " << UserCamera.OnePixelSizeInMm2() << endl;
                PressEnter();
                ChooseBitDepth(UserCamera);
                CameraFPS(UserCamera);
                cout << "Bitrate dla " << UserCamera.GetFramesPerSecond() << " FPSow jest rowny: " << UserCamera.Bitrate()/1024 << " kB/s" << endl;
                PressEnter();
                ShowAllCameraInformation(UserCamera);
            } 

            if(MenuStateInt == 3)  //Sensor 1/1.8
            {
                cout << "\nWybrano sensor o wielkosci 1/1.8"  << endl;
                UserCamera.SensorSelection(CameraObject::Size1_18); 
                cout << "Wielkosc pojedynczego pixela w mm2: " << UserCamera.OnePixelSizeInMm2() << endl;
                PressEnter();
                ChooseBitDepth(UserCamera);
                CameraFPS(UserCamera);
                cout << "Bitrate dla " << UserCamera.GetFramesPerSecond() << " FPSow jest rowny: " << UserCamera.Bitrate()/1024 << " kB/s" << endl;
                PressEnter();
                ShowAllCameraInformation(UserCamera);
            } 

            if(MenuStateInt == 4)  //Sensor 2/3
            {
                cout << "\nWybrano sensor o wielkosci 2/3"  << endl;
                UserCamera.SensorSelection(CameraObject::Size2_3); 
                cout << "Wielkosc pojedynczego pixela w mm2: " << UserCamera.OnePixelSizeInMm2() << endl;
                PressEnter();
                ChooseBitDepth(UserCamera);
                CameraFPS(UserCamera);
                cout << "Bitrate dla " << UserCamera.GetFramesPerSecond() << " FPSow jest rowny: " << UserCamera.Bitrate()/1024 << " kB/s" << endl;
                PressEnter();
                ShowAllCameraInformation(UserCamera);
            } 

            if(MenuStateInt == 5)  //Resolution
            {
                system("CLS");
                ReadingCameraSizeInPixel(UserCamera); 
            } 

            if(MenuStateInt == 6)  //exit
            {
                exit(0);
            } 
        }

        system("CLS");
    }  
}


int main()
{
    CameraObject UserCamera;
    Menu(UserCamera);

    return 0;
}



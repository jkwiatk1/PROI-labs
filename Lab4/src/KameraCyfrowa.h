#pragma once

#include "Produkt.h"
#include "RTV.h"

class KameraCyfrowa: public RTV
{
public:
	KameraCyfrowa() {}
	KameraCyfrowa(int numer_katalogowy) : RTV(numer_katalogowy) { }	
	KameraCyfrowa(string producent, string nazwa, float cena);

	string zwrocKategorie() 
	{
		return string("Kamera cyfrowa");
	}

	string zwrocProducenta()
	{
	    return producent;
    }

protected:
	double ilosc_dostepnej_pamieci;
	double megapiksele;
};
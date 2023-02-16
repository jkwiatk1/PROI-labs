#pragma once

#include "Produkt.h"
#include "RTV.h"
#include <vector>
#include <string>
#include <iostream>


enum TechnologiaMatrycy { LED, LCD, PLASMA };

class Telewizor: public RTV
{
public:
	Telewizor() {
		dostepne_rozdzielczosci.push_back("1280x720");
		dostepne_rozdzielczosci.push_back("800x600");
	}
	Telewizor(int numer_katalogowy) : RTV(numer_katalogowy) { }
	Telewizor(string producent, string nazwa, float cena);

	
	string zwrocKategorie() 
	{
		return string("Telewizor");
	}

	string zwrocProducenta()
	{
	    return producent;
    }

	~Telewizor()
	{
	}

protected:
	TechnologiaMatrycy technologia_matrycy;
	double wielkosc_matrycy;
	vector<string> dostepne_rozdzielczosci;
};

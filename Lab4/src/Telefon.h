#pragma once

#include "Produkt.h"
#include "RTV.h"
#include <utility>
#include <stdexcept>
#include <iostream>

enum RodzajTelefonu { Klapka, Smartfon, Tradycyjny, Brak };

class Telefon: public RTV
{
public:
	Telefon();
	Telefon(int numer_katalogowy);
	Telefon(pair<double, int> telefonParametry);
	Telefon(pair<double, int> telefonParametry, string producent, string nazwa, float cena);
		
	string zwrocKategorie();
	string zwrocProducenta();
	void wyjatkiTelefonParametry();


protected: 
	double wielkosc_matrycy;
	double liczba_procesorow;
	RodzajTelefonu rodzaj; 
};
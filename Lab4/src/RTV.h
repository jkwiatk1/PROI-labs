#pragma once

#include "Produkt.h"

class RTV: public Produkt
{
public:
	RTV() {}
	RTV(int numer_katalogowy) : Produkt(numer_katalogowy) { }
	RTV(string producent, string nazwa, float cena): Produkt(producent, nazwa, cena) {}
	string zwrocKategorie() = 0;
	string zwrocProducenta() = 0;

protected:
	double napiecie_zasilania; 
};
 
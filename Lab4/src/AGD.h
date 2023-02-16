#pragma once

#include "Produkt.h"

class AGD: public Produkt
{
public:
	AGD() {}
	AGD(int numer_katalogowy) : Produkt(numer_katalogowy){ }
	AGD(string producent, string nazwa, float cena);
	string zwrocKategorie() = 0;
	string zwrocProducenta() = 0;
protected:
	double roczne_zuzycie_energii;
};


#pragma once

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Produkt
{
private:
  float min_value = 600.00;
  float max_value = 10000.00;
public:
	Produkt() {
		numer_katalogowy = rand();	
		cena = min_value + static_cast<float>(rand()) / (RAND_MAX / (max_value - min_value));
	}

	Produkt(int numer_katalogowy): numer_katalogowy(numer_katalogowy) { }
	Produkt(string producent, string nazwa, float cena): producent(producent), nazwa(nazwa), cena(cena) {}
	virtual string zwrocKategorie() = 0;
	virtual string zwrocProducenta() = 0;
	virtual ~Produkt() { }

	float zwrocCene()
	{
		return cena;
	}

	int numer_katalogowy;

protected:
	string nazwa;
	string producent;
	float cena;
};


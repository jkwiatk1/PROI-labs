#include "Telewizor.h"
#include "zlaWartoscWyjatek.h"

Telewizor::Telewizor(string producent, string nazwa, float cena): RTV(producent, nazwa, cena) 
{
	numer_katalogowy = rand();	
	if(cena < 0.00f)
    {
     	throw zlaWartoscWyjatek("Zla cena! Nie moze byc ona ujemna", static_cast<double>(cena));
    }

    if(cena > 10000000.00f)
    {
        throw zlaWartoscWyjatek("Zla cena! Za duza wartosc (Maks 10000k)", static_cast<double>(cena));
    }
}
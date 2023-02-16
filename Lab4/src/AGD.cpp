#include "AGD.h"
#include "zlaWartoscWyjatek.h"

AGD::AGD(string producent, string nazwa, float cena): Produkt(producent, nazwa, cena) 
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

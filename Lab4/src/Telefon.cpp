#include "Telefon.h"
#include "zlaWartoscWyjatek.h"

Telefon::Telefon(): wielkosc_matrycy(0.0), liczba_procesorow(0), rodzaj(RodzajTelefonu::Brak) {}

Telefon::Telefon(int numer_katalogowy) : RTV(numer_katalogowy) {}

Telefon::Telefon(pair<double, int> telefonParametry): wielkosc_matrycy(telefonParametry.first), liczba_procesorow(telefonParametry.second)
{
     wyjatkiTelefonParametry();
}

Telefon::Telefon(pair<double, int> telefonParametry, string producent, string nazwa, float cena): RTV(producent, nazwa, cena), wielkosc_matrycy(telefonParametry.first), liczba_procesorow(telefonParametry.second)
{
     numer_katalogowy = rand();	
     wyjatkiTelefonParametry();  
     if(cena < 0.00f)
     {
          throw zlaWartoscWyjatek("Zla cena! Nie moze byc ona ujemna", static_cast<double>(cena));
     }

     if(cena > 10000000.00f)
     {
          throw zlaWartoscWyjatek("Zla cena! Za duza wartosc (Maks 10000k)", static_cast<double>(cena));
     }
}

string Telefon::zwrocKategorie() 
{
	return string("Telefon");
}

string Telefon::zwrocProducenta()
{
	return producent;
}



void Telefon::wyjatkiTelefonParametry()
{
     if(wielkosc_matrycy <= 0)
     {
          throw zlaWartoscWyjatek("Wielkosc matrycy musi byc dodatnia!", wielkosc_matrycy);
     }

     if(wielkosc_matrycy > 10000)
     {
          throw zlaWartoscWyjatek("Za duza matryca! Maksymalnie 10000!", wielkosc_matrycy);
     }
    
     if(liczba_procesorow < 1)
     {
          throw zlaWartoscWyjatek("Ilosc procesorow nie moze byc mniejsza od 1!", liczba_procesorow);
     } 

     if(liczba_procesorow > 10)
     {
          throw zlaWartoscWyjatek("Telefon moze miec maksymalnie 10 procesorow!", liczba_procesorow);
     } 
}

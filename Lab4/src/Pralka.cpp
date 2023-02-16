#include "Pralka.h"
#include "zlaWartoscWyjatek.h"

Pralka::Pralka(string producent, string nazwa, float cena, double NowaPojemnosc): AGD(producent, nazwa, cena), PojemnoscZbiornika(NowaPojemnosc) 
{
    if(PojemnoscZbiornika < 0)
    {
        throw zlaWartoscWyjatek("Pojemnosc zbiornika nie moze byc ujemna!", PojemnoscZbiornika);
    }

    if(PojemnoscZbiornika > 100000)
    {
        throw zlaWartoscWyjatek("Pojemnosc zbiornika nie moze byc wieksza niz 1000!", PojemnoscZbiornika);
    }
}
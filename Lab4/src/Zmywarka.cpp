#include "Zmywarka.h"
#include "zlaWartoscWyjatek.h"

Zmywarka::Zmywarka(string producent, string nazwa, float cena, double NoweZuzycie):  AGD(producent, nazwa, cena), GodzinneZuzycieWody(NoweZuzycie) 
{
    if(GodzinneZuzycieWody < 0)
    {
        throw zlaWartoscWyjatek("Zuzycie wody nie moze byc ujemne!", GodzinneZuzycieWody);
    }

    if(GodzinneZuzycieWody > 100000)
    {
        throw zlaWartoscWyjatek("Zuzycie wody nie moze wieksze niz 100000!", GodzinneZuzycieWody);
    }
}
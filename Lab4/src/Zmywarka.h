#include "AGD.h"

class Zmywarka: public AGD
{
    protected:
        double GodzinneZuzycieWody;
    public:
        Zmywarka(){}
        Zmywarka(int numer_katalogowy): AGD(numer_katalogowy) {} 
        Zmywarka(string producent, string nazwa, float cena, double NoweZuzycie);

        string zwrocKategorie() 
        {
            return string("Zmywarka");
        }

        string zwrocProducenta()
	    {
		    return producent;
	    }
};
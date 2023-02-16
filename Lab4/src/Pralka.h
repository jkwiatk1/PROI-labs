#include "AGD.h"

class Pralka: public AGD
{
    private:
        double PojemnoscZbiornika;
    public:
        Pralka(){}
        Pralka(int numer_katalogowy): AGD(numer_katalogowy) {}
        Pralka(string producent, string nazwa, float cena, double NowaPojemnosc);

        
        string zwrocKategorie() 
        {
            return string("Pralka");
        }
        

        std::string zwrocProducenta()
	    {
		    return producent;
	    }
};
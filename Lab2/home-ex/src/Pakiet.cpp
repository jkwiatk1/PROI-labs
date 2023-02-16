#include <iostream>
#include <iomanip>
#include "Pakiet.h"

Pakiet::Pakiet(): NazwaPakietu("Brak nazwy"), CenaPakietu(0), DataPoczatku(22,11,2022), DataKonca(22,11,2023)
{}

Pakiet::Pakiet(std::string NazwaPakietu, int CenaPakietu, unsigned NowyPoczatekDostepu_DZIEN, unsigned NowyPoczatekDostepu_MIESIAC, unsigned NowyPoczatekDostepu_ROK,
    unsigned NowyKoniecDostepu_DZIEN,  unsigned NowyKoniecDostepu_MIESIAC,  unsigned NowyKoniecDostepu_ROK): 
    DataPoczatku(NowyPoczatekDostepu_DZIEN, NowyPoczatekDostepu_MIESIAC, NowyPoczatekDostepu_ROK), DataKonca(NowyKoniecDostepu_DZIEN, NowyKoniecDostepu_MIESIAC, NowyKoniecDostepu_ROK)
{  
    if((CenaPakietu < 0) || (DataPoczatku >= DataKonca))
    {
        std::cout << "Podano zle wartosci konstruktora argumentowego, ustawiono wartosci domyslne\n";
        set_PoczatekDostepu(22,11,2022);
        set_KoniecDostepu(22,11,2023);
        this->CenaPakietu = 0;
        return;
    }  
    this->NazwaPakietu = NazwaPakietu;
    this->CenaPakietu = unsigned(CenaPakietu);
}   

Pakiet::~Pakiet()
{
}


void Pakiet::set_NazwaPakietu(std::string NowaNazwaPakietu)
{
    this->NazwaPakietu = NowaNazwaPakietu;
}

void Pakiet::set_PoczatekDostepu(unsigned NowyPoczatekDostepu_DZIEN, unsigned NowyPoczatekDostepu_MIESIAC, unsigned NowyPoczatekDostepu_ROK)
{   
    Date NowyPoczatekDostepu(NowyPoczatekDostepu_DZIEN, NowyPoczatekDostepu_MIESIAC, NowyPoczatekDostepu_ROK);
    if(NowyPoczatekDostepu < DataKonca)
    {
        DataPoczatku.set_day(NowyPoczatekDostepu_DZIEN);
        DataPoczatku.set_month(NowyPoczatekDostepu_MIESIAC);
        DataPoczatku.set_year(NowyPoczatekDostepu_ROK);
    }
    else std::cout << "Data poczatku okresu nie moze byc pozniejsza niz data konca okresu" << std::endl;
}

void Pakiet::set_KoniecDostepu(unsigned NowyKoniecDostepu_DZIEN,  unsigned NowyKoniecDostepu_MIESIAC,  unsigned NowyKoniecDostepu_ROK)
{   
    Date NowyKoniecDostepu(NowyKoniecDostepu_DZIEN,  NowyKoniecDostepu_MIESIAC, NowyKoniecDostepu_ROK);
    if(NowyKoniecDostepu > DataPoczatku)
    {
        DataKonca.set_day(NowyKoniecDostepu_DZIEN);
        DataKonca.set_month(NowyKoniecDostepu_MIESIAC);
        DataKonca.set_year(NowyKoniecDostepu_ROK);
    }
    else std::cout << "Data konca okresu nie moze byc wczesniejsza niz data poczatku okresu" << std::endl;
}

void Pakiet::set_CenaPakietu(int CenaPakietu)
{
    if(CenaPakietu >= 0) 
    {
        this->CenaPakietu = unsigned(CenaPakietu);
    }
    else  std::cout << "Cena pakietu nie moze byc ujemna" << std::endl;
    
}

std::string Pakiet::get_NazwaPakietu()
{
    return this->NazwaPakietu;
}

unsigned Pakiet::get_PoczatekDostepu_DZIEN()
{
    return DataPoczatku.get_day();
}

unsigned Pakiet::get_PoczatekDostepu_MIESIAC()
{
    return DataPoczatku.get_month();
}

unsigned Pakiet::get_PoczatekDostepu_ROK()
{
    return DataPoczatku.get_year();
}

unsigned Pakiet::get_KoniecDostepu_DZIEN()
{   
    return DataKonca.get_day();
}

unsigned Pakiet::get_KoniecDostepu_MIESIAC()
{   
    return DataKonca.get_month();
}

unsigned Pakiet::get_KoniecDostepu_ROK()
{   
    return DataKonca.get_year();
}

unsigned Pakiet::get_CenaPakietu()
{
    return this->CenaPakietu;
}

std::ostream& operator<<(std::ostream& PakietOstream, const Pakiet& pt)
{
    PakietOstream << "---" << pt.NazwaPakietu << "---\nCena: " << pt.CenaPakietu << " PLN\nData poczatku: " 
    << pt.DataPoczatku << "\nData konca: " <<  pt.DataKonca << std::endl;
    return PakietOstream;
} 

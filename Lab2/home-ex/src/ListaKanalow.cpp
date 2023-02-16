#include <iostream>
#include <iomanip>
#include "ListaKanalow.h"

ListaKanalow::ListaKanalow() {}

void ListaKanalow::wyswietlZestawKanalow()
{
    std::cout << "\n---Lista kanalow dostepnych w pakiecie---\n";
    for(size_t i = 0; i < ZestawKanalow.size(); i++)
    {
        std::cout << "Kanal["<< i+1 << "] "<< ZestawKanalow.at(i) << std::endl;
    }
}

unsigned ListaKanalow::wyszukajKanal(std::string NazwaKanalu)
{
    for(unsigned i = 0; i < ZestawKanalow.size(); i++)
    {
        if(NazwaKanalu == ZestawKanalow.at(i)){return i;}
        //if(NazwaKanalu != ZestawKanalow.at(i)) {return 0;}
    }
    return 0;
}
 
void ListaKanalow::dodajKanal(std::string NowyKanal)
{
    unsigned nrIstniejacegoKanalu = ListaKanalow::wyszukajKanal(NowyKanal);
    if(this->ZestawKanalow.at(nrIstniejacegoKanalu) != NowyKanal)
    {
        this->ZestawKanalow.push_back(NowyKanal);
        std::cout << "Dodano do pakietu kanal \"" << NowyKanal << "\" !" << std::endl;
    }
    else std::cout << "Nie dodano kanalu \"" << NowyKanal << "\". Taki kanal juz istnieje!" << std::endl;
}

void ListaKanalow::usunKanal(std::string KanalDoUsuniecia)
{
    unsigned nrIstniejacegoKanalu = ListaKanalow::wyszukajKanal(KanalDoUsuniecia);
    if(this->ZestawKanalow.at(nrIstniejacegoKanalu) == KanalDoUsuniecia)
    {
        this->ZestawKanalow.erase(ZestawKanalow.begin() + nrIstniejacegoKanalu);
        std::cout << "Usunieta z pakietu kanal \"" << KanalDoUsuniecia << "\" !" << std::endl;
    }
    else std::cout << "Nie usunieto kanalu \"" << KanalDoUsuniecia << "\". Taki kanal nie istnial!" << std::endl;
}

size_t ListaKanalow::IloscKanalow()
{
    return ZestawKanalow.size();
}

void ListaKanalow::zmodyfikujZestawKanalow(std::string KanalDoZmiany, std::string NowyKanal)
{
    unsigned nrIstniejacegoKanalu = ListaKanalow::wyszukajKanal(KanalDoZmiany);
    if(this->ZestawKanalow.at(nrIstniejacegoKanalu) == KanalDoZmiany)
    {
        ZestawKanalow.at(nrIstniejacegoKanalu) = NowyKanal;
        std::cout << "W miejsce kanalu o nazwie \""<< KanalDoZmiany << "\" o numerze: \""<< nrIstniejacegoKanalu + 1 << "\" dodano kanal o nazwie: " << NowyKanal << std::endl;
    }

    else std::cout << "Nie ma takiego kanalu w Pakiecie("<< NowyKanal << ")! Nie mozna zmodyfikowac oferty!" << std::endl;
}

void ListaKanalow::zmodyfikujZestawKanalow(std::string NowyKanal, unsigned wKtorymMiejscuWstawicElement)
{
    if((wKtorymMiejscuWstawicElement >= 0 && wKtorymMiejscuWstawicElement <= ZestawKanalow.size()))
    {
        ZestawKanalow.insert(ZestawKanalow.begin() + wKtorymMiejscuWstawicElement - 1, NowyKanal);
        std::cout << "W " << wKtorymMiejscuWstawicElement <<" miejscu listy wstawiono kanal o nazwie: "<< NowyKanal << std::endl;
    }

    else std::cout << "Nie ma takiego miejsca w Pakiecie ("<< wKtorymMiejscuWstawicElement << ")! Nie mozna zmodyfikowac oferty!" << std::endl;

}
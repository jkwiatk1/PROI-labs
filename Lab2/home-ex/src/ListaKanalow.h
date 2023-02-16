
#include <string>
#include <vector>

#ifndef LISTAKANALOW_H
#define LISTAKANALOW_H

class ListaKanalow
{
private:
    std::vector<std::string> ZestawKanalow = {"Kanal 1", "Kanal 2", "Kanal 3", "Sportowy", "Przyrodniczy", "Historyczny", "Dla dzieci", "Polityczny", "News"};
public:
    ListaKanalow();
    void wyswietlZestawKanalow();   
    void dodajKanal(std::string NowyKanal);
    unsigned wyszukajKanal(std::string NazwaKanalu);
    void zmodyfikujZestawKanalow(std::string KanalDoZmiany, std::string NowyKanal); 
    void zmodyfikujZestawKanalow(std::string NowyKanal, unsigned wKtorymMiejscuWstawicElement); 
    void usunKanal(std::string KanalDoUsuniecia);
    size_t IloscKanalow();

};
#endif 
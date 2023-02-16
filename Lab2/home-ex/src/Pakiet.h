/* Autor: Jan Kwiatkowski 299374, 21.11.2022
Klasa reprezentujaca oferte pakietu telewizyjnego: Nazwe, Cene, Kanaly, okres trwania oferty.
*/

#include <string>
#include "date.h"
#include "ListaKanalow.h"

#ifndef PAKIET_H
#define PAKIET_H


class Pakiet : public ListaKanalow
{
private:
    std::string NazwaPakietu;
    unsigned CenaPakietu;
    Date DataPoczatku;
    Date DataKonca;
public:
    Pakiet();
    Pakiet(std::string NazwaPakietu , int CenaPakietu, unsigned NowyPoczatek_DZIEN, unsigned NowyPoczatek_MIESIAC, unsigned NowyPoczatek_ROK,
       unsigned NowyKoniecDostepu_DZIEN,  unsigned NowyKoniecDostepu_MIESIAC,  unsigned NowyKoniecDostepu_ROK);
    ~Pakiet();

    Pakiet(const Pakiet &other);
    Pakiet& operator=(const Pakiet &other);

    void set_NazwaPakietu(std::string NowaNazwaPakietu);
    void set_PoczatekDostepu(unsigned NowyPoczatekDostepu_DZIEN, unsigned NowyPoczatekDostepu_MIESIAC, unsigned NowyPoczatekDostepu_ROK);
    void set_KoniecDostepu(unsigned NowyKoniecDostepu_DZIEN,  unsigned NowyKoniecDostepu_MIESIAC,  unsigned NowyKoniecDostepu_ROK);
    void set_CenaPakietu(int CenaPakietu);

    std::string get_NazwaPakietu();
    unsigned get_PoczatekDostepu_DZIEN();
    unsigned get_PoczatekDostepu_MIESIAC();
    unsigned get_PoczatekDostepu_ROK();
    unsigned get_KoniecDostepu_DZIEN();
    unsigned get_KoniecDostepu_MIESIAC();
    unsigned get_KoniecDostepu_ROK();
    unsigned get_CenaPakietu();

    friend std::ostream& operator<<(std::ostream& PakietOstream, const Pakiet& pt);

};


std::ostream& operator<<(std::ostream& PakietOstream, const Pakiet& pt);


#endif /* PAKIET_H */
#include "test.h"
#include "Pakiet.h"
#include <string>
#include <iostream>


using namespace std;

void testPakiet_Auto_defaultConstr()        //modyfikowanie oferty kanalow
{
    Pakiet test;
    std::cout << test;
    test.wyswietlZestawKanalow();
    test.zmodyfikujZestawKanalow("Dla dzieci","Animowany");    //zamiana kanalow
    test.zmodyfikujZestawKanalow("Samochodowy",4);              //dodawnie kanalu we wskazane miejsce
    test.wyswietlZestawKanalow();
}

void testPakiet_Auto_argConstr_DodawanieUsuwanie()      //dodawanie usuwanie kanalow
{
    Pakiet test2("Nowy pakiet 1", 120,3,3,2024,21,6,2026);
    std::cout << test2;
    std::cout << std::endl;
    test2.dodajKanal("Nowy kanal");
    test2.dodajKanal("News");
    test2.usunKanal("News");
    test2.usunKanal("Czy da sie usunac taki kanal");
    test2.wyswietlZestawKanalow();
    test2.set_CenaPakietu(222);
    std::cout << "Ilosc kanalow: " << test2.IloscKanalow() << std::endl; 
    std::cout << "Cena pakietu po zmianie: " << test2.get_CenaPakietu() << std::endl;
}

void testPakiet_Auto_argConstr_WrongData()       //testowanie zlych wartosci
{
    Pakiet test3("Niepoprawny pakiet 2", -80,30,1,2023,1,11,2025);      //ujemna cena
    Pakiet test4("Niepoprawny pakiet 2", 80,30,1,2033,1,11,2025);      //zla data
    std::cout << test4;
    test4.set_CenaPakietu(-231);
    test4.zmodyfikujZestawKanalow("Dla dzieci ZLY","Zabawowy");
    test4.set_PoczatekDostepu(23,11,2101);
    test4.set_KoniecDostepu(11,9,2000);
    std::cout << "Jesli wartosc bedzie rowna 0 brak takiego kanalu. Jesli rozna kanal istnieje w ofercie pod danym numerem\nWartosc: " << test4.wyszukajKanal("News") <<std::endl;
    std::cout << std::endl;
    std::cout << test4;

}
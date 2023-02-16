// JAN KWIATKOWSKI PROI lab5

#include <iostream>
#include <vector>
#include <list>
#include <utility>
#include "Collection.h"


using namespace std;


int main()
{
    cout << "\n\nTESTY DLA B" << endl;
    myCollection mojaKolekcja;
    mojaKolekcja.dodajElement(23,35,11,241.2);
    mojaKolekcja.dodajElement(25,29,22,241.2);
    mojaKolekcja.dodajElement(27,121,33,21.2);
    mojaKolekcja.dodajElement(29,51,44,641.2);
    mojaKolekcja.dodajElement(32,212,55,651.2);
    mojaKolekcja.dodajElement(94,62,66,51.2);
    cout << "Elementy w kolekcji: " << endl;
    mojaKolekcja.wyswietlKolekcje();
    mojaKolekcja.znajdzIUsunNMaksymalnych(3, 'B');
    cout << "\nElementy w kolekcji po usunieciu: " << endl;
    mojaKolekcja.wyswietlKolekcje();


    cout << "\n\nTESTY DLA R" << endl;
    myCollection mojaKolekcja2;
    mojaKolekcja2.dodajElement(23,35,11,241.2);
    mojaKolekcja2.dodajElement(25,29,22,241.2);
    mojaKolekcja2.dodajElement(27,121,33,21.2);
    mojaKolekcja2.dodajElement(29,51,44,641.2);
    mojaKolekcja2.dodajElement(32,212,55,651.2);
    mojaKolekcja2.dodajElement(94,62,66,51.2);
    cout << "Elementy w kolekcji: " << endl;
    mojaKolekcja2.wyswietlKolekcje();
    mojaKolekcja2.znajdzIUsunNMaksymalnych(4, 'R');
    cout << "\nElementy w kolekcji po usunieciu: " << endl;
    mojaKolekcja2.wyswietlKolekcje();

    cout << "\n\nTESTY DLA D" << endl;
    myCollection mojaKolekcja3;
    mojaKolekcja3.dodajElement(23,35,11,241.2);
    mojaKolekcja3.dodajElement(25,29,22,241.2);
    mojaKolekcja3.dodajElement(27,121,33,21.2);
    mojaKolekcja3.dodajElement(29,51,44,641.2);
    mojaKolekcja3.dodajElement(32,212,55,651.2);
    mojaKolekcja3.dodajElement(94,62,66,51.2);
    cout << "Elementy w kolekcji: " << endl;
    mojaKolekcja3.wyswietlKolekcje();
    mojaKolekcja3.znajdzIUsunNMaksymalnych(4, 'D');
    cout << "\nElementy w kolekcji po usunieciu: " << endl;
    mojaKolekcja3.wyswietlKolekcje();
    return 0;
}
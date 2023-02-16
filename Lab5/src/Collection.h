// JAN KWIATKOWSKI PROI lab5

#include <iostream>
#include <map>
#include <iterator>

using namespace std;


class myCollectionWartosci
{  
public:
    int R;
    int G;
    int B;
    double D;
    myCollectionWartosci* nastepny;  


    myCollectionWartosci(): R(0), G(0), B(0), D(0)
    {
        nastepny = nullptr;
    }

    myCollectionWartosci(int Rn, int  Gn, int  Bn, double Dn): R(Rn), G(Gn), B(Bn), D(Dn)
    {
        this->nastepny = nullptr;
    } 
};



class myCollection: public myCollectionWartosci
{
private:
    myCollectionWartosci* pierwszyElement;
public:
    myCollection() {pierwszyElement = nullptr;}

    void dodajElement(int, int, int, double);
    int dlugoscKolekcji();
    void znajdzIUsunNMaksymalnych(int, char);
    void wyswietlKolekcje();
};
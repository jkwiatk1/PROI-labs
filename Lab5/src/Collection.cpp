// JAN KWIATKOWSKI PROI lab5
#include "Collection.h"

void myCollection::dodajElement(int Rn, int  Gn, int  Bn, double Dn)
{
    myCollectionWartosci* nowyElement = new myCollectionWartosci(Rn, Gn, Bn, Dn);

    if (pierwszyElement == nullptr) {
        pierwszyElement = nowyElement;
        return;
    }
 
    myCollectionWartosci* chwilowy = pierwszyElement;
    while(chwilowy->nastepny != nullptr) 
    {
        chwilowy = chwilowy->nastepny;
    }
    chwilowy->nastepny = nowyElement;
}

void myCollection::wyswietlKolekcje()
{
    myCollectionWartosci* chwilowy = pierwszyElement;
 
    if (pierwszyElement == nullptr) {
        cout << "Kolekcja pusta" << endl;
        return;
    }
 
    while (chwilowy != nullptr) {
        cout << " R: "<< chwilowy->R << " G: " << chwilowy->G << " B: " << chwilowy->B << " D: " << chwilowy->D << endl;
        chwilowy = chwilowy->nastepny;
    }
}

int myCollection::dlugoscKolekcji()
{
    myCollectionWartosci *chwilowy = pierwszyElement;
    int dlugoscKolekcji = 0;
    if (pierwszyElement == nullptr) 
    {
        return 0;
    }
    
    else
    {
        while (chwilowy != NULL) 
        {
            chwilowy = chwilowy->nastepny;
            dlugoscKolekcji++;
        }
    return dlugoscKolekcji;
    }
}

void myCollection::znajdzIUsunNMaksymalnych(int iloscElementow = 0, char cechaElementu = 'R')
{
    myCollectionWartosci *chwilowy = pierwszyElement;
    myCollectionWartosci *chwilowy2 = nullptr;
    multimap<double, myCollectionWartosci *, greater<double>> paraWartoscAdres;
    multimap<double, myCollectionWartosci *>::iterator it;
    int dlKolekcji = dlugoscKolekcji();

    if (pierwszyElement == nullptr) 
    {return;}
    else if (iloscElementow > dlKolekcji)
    {
        cout << "Kolekcja jest mniejszej wielkosci niz podana ilosc maksymalnych elementow do usuniecia" << endl;
        return;
    }
    
    else if (iloscElementow <= dlKolekcji)
    {
        switch (cechaElementu)
        {
        case 'R':
            cout << "Usuwam " << iloscElementow <<" elementy o maksymalnej wartosci R " << endl;
            while (chwilowy != NULL) 
            {
                paraWartoscAdres.insert(make_pair(chwilowy->R,chwilowy));
                chwilowy = chwilowy->nastepny;
            }
            for(int i = 0; i < iloscElementow; i++)
            {
                auto it = next(paraWartoscAdres.begin(),0);
                chwilowy = it->second;
                chwilowy2 = pierwszyElement;
                while (true) 
                { 
                    if(chwilowy2->nastepny == chwilowy)
                        break;
                    chwilowy2 = chwilowy2->nastepny;
                }
                chwilowy2->nastepny = chwilowy->nastepny;
                delete chwilowy; 
                paraWartoscAdres.erase(paraWartoscAdres.begin());

            }   
            break;
            
        case 'G':
            cout << "Usuwam " << iloscElementow <<" elementy o maksymalnej wartosci G " << endl;
            while (chwilowy != NULL) 
            {
                paraWartoscAdres.insert(make_pair(chwilowy->G,chwilowy));
                chwilowy = chwilowy->nastepny;
            }
            for(int i = 0; i < iloscElementow; i++)
            {
                auto it = next(paraWartoscAdres.begin(),0);
                chwilowy = it->second;
                chwilowy2 = pierwszyElement;
                while (true) 
                { 
                    if(chwilowy2->nastepny == chwilowy)
                        break;
                    chwilowy2 = chwilowy2->nastepny;
                }
                chwilowy2->nastepny = chwilowy->nastepny;
                delete chwilowy; 
                paraWartoscAdres.erase(paraWartoscAdres.begin());
            }   
            break;

        case 'B':
            cout << "Usuwam " << iloscElementow <<" elementy o maksymalnej wartosci B " << endl;
            while (chwilowy != NULL) 
            {
                paraWartoscAdres.insert(make_pair(chwilowy->B,chwilowy));
                chwilowy = chwilowy->nastepny;
            }
            for(int i = 0; i < iloscElementow; i++)
            {
                auto it = next(paraWartoscAdres.begin(),0);
                chwilowy = it->second;
                chwilowy2 = pierwszyElement;
                while (true) 
                { 
                    if(chwilowy2->nastepny == chwilowy)
                        break;
                    chwilowy2 = chwilowy2->nastepny;
                }
                chwilowy2->nastepny = chwilowy->nastepny;
                delete chwilowy; 
                paraWartoscAdres.erase(paraWartoscAdres.begin());
            } 
            break;

        case 'D':
            cout << "Usuwam " << iloscElementow <<" elementy o maksymalnej wartosci D " << endl;
            while (chwilowy != NULL) 
            {
                paraWartoscAdres.insert(make_pair(chwilowy->D,chwilowy));
                chwilowy = chwilowy->nastepny;
            }
            for(int i = 0; i < iloscElementow; i++)
            {
                auto it = next(paraWartoscAdres.begin(),0);
                chwilowy = it->second;
                chwilowy2 = pierwszyElement;
                if (chwilowy == pierwszyElement) {
                    pierwszyElement = pierwszyElement->nastepny;
                    delete chwilowy2;
                    return;
                }
                else
                {
                    while (true) 
                    { 
                        if(chwilowy2->nastepny == chwilowy)
                        break;
                        chwilowy2 = chwilowy2->nastepny;
                    }
                    chwilowy2->nastepny = chwilowy->nastepny;
                    delete chwilowy; 
                    paraWartoscAdres.erase(paraWartoscAdres.begin());
                }
            } 
            break;
    
        default:
            cout << "Punkt nie ma takiej cechy" << endl;
            break;
        }
    }

    else
        cout << "Blad" << endl;
}
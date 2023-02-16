// SklepInternetowy.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <list>
#include <utility>
#include "Produkt.h"
#include "Telefon.h"
#include "KameraCyfrowa.h"
#include "Telewizor.h"
#include "Zmywarka.h"
#include "Pralka.h"
#include "zlaWartoscWyjatek.h"


using namespace std;

void pokazMenu()
{
	cout << "Menu programu:" << endl;
	cout << "1. Dodaj telewizor." << endl;
	cout << "2. Dodaj telefon." << endl;
	cout << "3. Dodaj kamere cyfrowa" << endl;
	cout << "4. Dodaj zmywarke" << endl;
	cout << "5. Dodaj pralke" << endl;
	cout << "6. Wyswietl posortowana wzgledem ceny zawartosc bazy." << endl;
	cout << "7. Wyswietl zawartosc bazy." << endl << endl;
	cout << "8. Wyjscie." << endl << endl;
}


void ustawianieParamentrowTelefonu(double &nowyTelefonWielkoscMatrycy, int &nowyTelefonIloscProcesor)
{
	cout << "Podaj wielkosc matrycy: " << endl;
	while(!(cin >> nowyTelefonWielkoscMatrycy))
	{
		cout << "Zla wartosc. To musi byc liczba!" << endl;
		cin.clear();
      	cin.ignore(10000,'\n');
    }  	

	cin.clear();
	cin.ignore(10000,'\n');

	cout << "Podaj ilosc procesorow: " << endl;
	while(!(cin >> nowyTelefonIloscProcesor))
	{
		cout << "Zla wartosc. To musi byc liczba!" << endl;
		cin.clear();
      	cin.ignore(10000,'\n');
    }  		

	cin.clear();
	cin.ignore(10000,'\n');	
}

void ustawianieParametrowProduktu(string &producent, string &nazwa, float &cena)
{
	cout << "Podaj producenta wybranego produktu: " << endl;
	while(!(cin >> producent))
	{
		cout << "Zla wartosc. Sprobuj raz jeszcze!" << endl;
		cin.clear();
      	cin.ignore(10000,'\n');
    }  	

	cin.clear();
	cin.ignore(10000,'\n');	

	cout << "Podaj nazwe wybranego produktu: " << endl;
	while(!(cin >> nazwa))
	{
		cout << "Zla wartosc. Sprobuj raz jeszcze!" << endl;
		cin.clear();
      	cin.ignore(10000,'\n');
    }  	

	cin.clear();
	cin.ignore(10000,'\n');	

	cout << "Podaj cene wybranego produktu z dokladnoscia do 2 cyfr po przecinku: " << endl;
	while(!(cin >> cena))
	{
		cout << "Zla wartosc. Sprobuj raz jeszcze!" << endl;
		cin.clear();
      	cin.ignore(10000,'\n');
    }  	

	cin.clear();
	cin.ignore(10000,'\n');	

}

bool ascending(Produkt* s1, Produkt* s2)
{
	return s1->zwrocCene() > s2->zwrocCene();
}


void posortowanaCenaListaProduktow(list<Produkt*> produkty)
{
	produkty.sort(ascending);
	for (auto& prod : produkty)
		cout << prod->zwrocKategorie() << " /cena: " << prod->zwrocCene() << " /nr katalog: " << prod->numer_katalogowy << " /producent: " << prod->zwrocProducenta() << endl;

}


vector<string> zwrocNazwyProduktowOProducencie(string producent)
{
	vector<string> nazwy;
	return nazwy;
}


int main()
{
	pair<double, int> nowyTelefonParametry;
	string producent, nazwa;
	double nowyTelefonWielkoscMatrycy, zuzycieWodyZmywarka, pojemnoscZbiornikaPralka;
	int nowyTelefonIloscProcesor;
	float cena = 0.0f;

	
	list<Produkt*> produkty;
	int wybor = 0;
	Produkt *nowy;

	srand(0);

	while (wybor!=8)
	{
		pokazMenu();
		
		cin >> wybor;
		cin.clear();
		cin.ignore(10000, '\n');
		

		switch (wybor)
		{
		case 1: 
			ustawianieParametrowProduktu(producent, nazwa, cena);
			try
			{
				nowy = new Telewizor(producent, nazwa, cena);
				produkty.push_back(nowy);
				cout << endl << "Dodano telewizor" << endl << endl;
			}
			catch(const zlaWartoscWyjatek& e)
			{
				cerr << e.what() << '\n';
			}
			break;

		case 2: 
			ustawianieParamentrowTelefonu(nowyTelefonWielkoscMatrycy,nowyTelefonIloscProcesor);
			nowyTelefonParametry = make_pair(nowyTelefonWielkoscMatrycy,nowyTelefonIloscProcesor);
			ustawianieParametrowProduktu(producent, nazwa, cena);
			try
			{
				nowy = new Telefon(nowyTelefonParametry, producent, nazwa, cena);
				produkty.push_back(nowy);
				cout << endl << "Dodano telefon" << endl << endl;
			}
			catch(const zlaWartoscWyjatek& e)
			{
				cerr << e.what() << '\n';
			}
			break;

		case 3: 
			ustawianieParametrowProduktu(producent, nazwa, cena);
			try
			{
				nowy = new KameraCyfrowa(producent, nazwa, cena);
				produkty.push_back(nowy);
				cout << endl << "Dodano kamere" << endl << endl;
			}
			catch(const zlaWartoscWyjatek& e)
			{
				cerr << e.what() << '\n';
			}
			break;

		case 4: 
			ustawianieParametrowProduktu(producent, nazwa, cena);
			cout << "Podaj zuzycie wody: " << endl;
			while(!(cin >> zuzycieWodyZmywarka))
			{
				cout << "Zla wartosc. To musi byc liczba!" << endl;
				cin.clear();
 				cin.ignore(10000,'\n');
    		} 
			cin.clear();
 			cin.ignore(10000,'\n');

			try
			{
				nowy = new Zmywarka(producent, nazwa, cena,zuzycieWodyZmywarka);
				produkty.push_back(nowy);
				cout << endl << "Dodano zmywarke" << endl << endl;
			}
			catch(const zlaWartoscWyjatek& e)
			{
				cerr << e.what() << '\n';
			}
			break;	

		case 5: 
			ustawianieParametrowProduktu(producent, nazwa, cena);
			cout << "Podaj pojemnosc zbiornika: " << endl;
			while(!(cin >> pojemnoscZbiornikaPralka))
			{
				cout << "Zla wartosc. To musi byc liczba!" << endl;
				cin.clear();
 				cin.ignore(10000,'\n');
    		} 
			cin.clear();
 			cin.ignore(10000,'\n');

			try
			{
				nowy = new Pralka(producent, nazwa, cena, pojemnoscZbiornikaPralka);
				produkty.push_back(nowy);
				cout << endl << "Dodano pralke" << endl << endl;
			}
			catch(const zlaWartoscWyjatek& e)
			{
				cerr << e.what() << '\n';
			}
			break;

		case 6:
			posortowanaCenaListaProduktow(produkty);
			break;

		case 7:
			for (auto& prod : produkty)
				cout << prod->zwrocKategorie() << " /cena: " << prod->zwrocCene() << " /nr katalog: " << prod->numer_katalogowy << " /producent: " << prod->zwrocProducenta() << endl;
			break;
		}
	}

	for (list<Produkt*>::iterator it=produkty.begin(); it!=produkty.end(); it++)
		delete *it;

	return 0;
}


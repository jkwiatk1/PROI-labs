#include "stozek.h"
#include <iostream>
#include <string>

stozek::stozek(unsigned WysokoscStozka, unsigned PromienStozka, std::string NowaNazwaStozka):
    bryla(WysokoscStozka,PromienStozka), NazwaStozka(NowaNazwaStozka) 
{}

double stozek::objectosc() const
{
    return 0.333*Wysokosc*polePodstawy();
}

void stozek::print() const
{
    std::cout<< "---" << NazwaStozka << "---\n" << "Wysokosc stozka: " <<Wysokosc << "\nPromien podstawy stozka: " <<Promien<<std::endl;
}
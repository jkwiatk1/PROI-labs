#include "bryla.h"
#include <iostream>

bryla::bryla(unsigned nowa_Wysokosc, double nowy_Promien): Wysokosc(nowa_Wysokosc), Promien(nowy_Promien)
{}

double bryla::polePodstawy() const
{
    return 3.1415 * Promien * Promien;
}

void bryla::print() const
{
    std::cout << "Wysokosc: "<< Wysokosc << "\nPromien: " << Promien << std::endl;
}

bryla::~bryla(){}
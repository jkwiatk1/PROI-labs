#include "walec.h"
#include <iostream>

walec::walec(unsigned WysokoscWalca, unsigned PromienWalca, std::string NowaNazwaWalca): bryla(WysokoscWalca,PromienWalca), NazwaWalca(NowaNazwaWalca)
{}

double walec::objectosc() const
{
    return Wysokosc*polePodstawy();
}

void walec::print() const
{
    std::cout<< "---" << NazwaWalca << "---\n" << "Wysokosc walca: " <<Wysokosc << "\nPromien podstawy walca: " <<Promien<<std::endl;
}
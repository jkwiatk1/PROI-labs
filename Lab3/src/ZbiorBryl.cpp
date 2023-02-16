#include "ZbiorBryl.h"
#include <iostream>

void ZbiorBryl::dodaj_bryla(std::shared_ptr<bryla> dodanaBryla)
{
    WszystkieBryly.push_back(dodanaBryla);
}

void ZbiorBryl::printBryly()
{
    int i = 1;
    for (auto zb:WszystkieBryly)
    {
        std::cout << "Iteracja po wszystkich brylach w wektorze: " << i++ << "\nWskaznik na ten obiekt:  "<< zb<< std::endl;
    }
}

ZbiorBryl::~ZbiorBryl() 
{}
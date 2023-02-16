#include "bryla.h"
#include "stozek.h"
#include "walec.h"
#include "ZbiorBryl.h"
#include <iostream>
#include <memory>
#include <vector>

int main()
{
    ZbiorBryl zbiorMoichBryl;
    walec *WalecMaly = new walec(10,3,"Maly walec");
    WalecMaly->print();
    std::cout << "Jego objetosc: " << WalecMaly->objectosc();
    //zbiorMoichBryl.add_walec(std::shared_ptr<walec>(WalecMaly));

    std::cout << std::endl;
    std::cout << std::endl;
    stozek StozekMaly(10,3,"Maly stozek");
    StozekMaly.print();
    std::cout << "Jego objetosc: " << StozekMaly.objectosc();

    std::cout << std::endl;
    std::shared_ptr<bryla> WalecWektor (new walec(11,3,"Walec do wektora"));
    zbiorMoichBryl.dodaj_bryla(WalecWektor);
    std::shared_ptr<bryla> WalecWektor2 (new walec(11,30,"Walec do wektora"));
    zbiorMoichBryl.dodaj_bryla(WalecWektor2);
    std::shared_ptr<bryla> WalecWektor3 (new walec(15,13,"Walec do wektora"));
    zbiorMoichBryl.dodaj_bryla(WalecWektor3);
    std::shared_ptr<bryla> WalecWektor4 (new walec(9,35,"Walec do wektora"));
    zbiorMoichBryl.dodaj_bryla(WalecWektor4);
    std::shared_ptr<bryla> WalecWektor5 (new walec(110,43,"Walec do wektora"));
    zbiorMoichBryl.dodaj_bryla(WalecWektor5);
    zbiorMoichBryl.printBryly();

    delete WalecMaly;
    return 0;
}
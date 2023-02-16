#ifndef WALEC_H
#define WALEC_H
#include "bryla.h"
#include <string>

class walec: public bryla
{
    private:
        std::string NazwaWalca;
    public: 
        walec(unsigned WysokoscWalca, unsigned PromienWalca, std::string NowaNazwaWalca);
        double objectosc() const override;
        void print() const;
};

#endif
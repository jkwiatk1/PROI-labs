#ifndef STOZEK_H
#define STOZEK_H
#include "bryla.h"
#include <string>

class stozek: public bryla
{
    private:
        std::string NazwaStozka;
    public: 
        stozek(unsigned WysokoscStozka, unsigned PromienStoza, std::string NowaNazwaStozka);
        double objectosc() const override;
        void print() const;
};

#endif
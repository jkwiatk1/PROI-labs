#ifndef BRYLA_H
#define BRYLA_H

class bryla
{
    protected:
        unsigned Wysokosc;
        unsigned Promien;
    public:
        bryla(unsigned nowa_Wysokosc, double nowy_Promien);
        virtual double objectosc() const = 0;
        double polePodstawy() const;
        virtual ~bryla();
        void print() const;
};

#endif 
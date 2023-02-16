#include "bryla.h"
#include "stozek.h"
#include "walec.h"
#include <vector>
#include <memory>

class ZbiorBryl
{
    private:
        std::vector<std::shared_ptr<bryla>> WszystkieBryly;

    public:
        void dodaj_bryla(std::shared_ptr<bryla> dodanaBryla);
        void printBryly();
        ~ZbiorBryl();
};
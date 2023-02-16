#include <stdexcept>
#include <string>

class zlaWartoscWyjatek: public std::invalid_argument
{
    public:
        zlaWartoscWyjatek(std::string tekst, double zlaWartosc);
};

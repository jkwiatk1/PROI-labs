#include "zlaWartoscWyjatek.h"

zlaWartoscWyjatek::zlaWartoscWyjatek(std::string tekst, double zlaWartosc): std::invalid_argument(tekst + "\nWprowadzona przez Ciebie wartosc jest rowna: " + std::to_string(zlaWartosc)) {}
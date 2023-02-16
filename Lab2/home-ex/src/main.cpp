/*Autor: Jan Kwiatkowski
*/
#include <iostream>
#include <string>
#include "date.h"
#include "Pakiet.h"
#include "test.h"


int main(int argc, char *argv[])
{
    int argumentyWejsciowe[7] = {0,22,11,2022,22,11,2023}; 

    std::string nowaNazwa = "Klasa z konsoli";
    if(argv[1] != NULL) {nowaNazwa = argv[1];}
    //assert(argv[1]== NULL);
    for(int i=2; i < 9; i++) 
    {
        if(argv[i] != NULL){argumentyWejsciowe[i-2] = std::stoi(argv[i]);}
    }

    Pakiet zKonsoli(nowaNazwa,unsigned(argumentyWejsciowe[0]),unsigned(argumentyWejsciowe[1]),unsigned(argumentyWejsciowe[2]),unsigned(argumentyWejsciowe[3]), unsigned(argumentyWejsciowe[4]), unsigned(argumentyWejsciowe[5]), unsigned(argumentyWejsciowe[6]));
    std::cout << zKonsoli;

    std::cout << std::endl;
    std::cout << "-------------TESTY-------------" << std::endl;
    testPakiet_Auto_defaultConstr();
    std::cout << std::endl;
    std::cout << std::endl;
    testPakiet_Auto_argConstr_DodawanieUsuwanie();
    std::cout << std::endl;
    std::cout << std::endl;
    testPakiet_Auto_argConstr_WrongData();
    return 0;
}
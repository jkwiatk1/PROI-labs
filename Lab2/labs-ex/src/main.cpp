#include <iostream>
#include "Time.h"
#include "Time.cpp"



int main()
{
    Time default_Time;
    std::cout << "Konstruktor domyslny: " << default_Time << std::endl;
    
    Time time1(10,22,3);
    Time time2_wrong_Negative(40,0,-31);
    Time time3_wrong_ToBig(70,321,531);
    Time time4(15,3,24);
    Time time5(10,58,1);
    std::cout << "Time 1 Poprawna data: " << time1 << std::endl;
    std::cout << "Time 2 Bledna data:   " << time2_wrong_Negative << std::endl;
    std::cout << "Time 3 Bledna data:   " << time3_wrong_ToBig << std::endl;

    //Kopiowanie (konstruktor kopiujący i operator przypisania)
    Time time1_copy(time1);
    std::cout << "Data utworzona za pomoca konstruktora kopiujacego: " << time1_copy << std::endl;

    Time default_copy = default_Time;
    std::cout << "Data utworzona za pomoca konstruktora kopiujacego: " << default_copy << std::endl;


    // //Porównywanie obiektów
    std::cout << std::boolalpha;
    std::cout << default_Time << " == " << default_copy << ": " << (default_Time == default_copy) << std::endl;
    std::cout << time2_wrong_Negative << " != " << time1 << ": " << (time2_wrong_Negative != time1) << std::endl;
    
    std::cout << time4 << " < " << time5 << ": " << (time4 < time5) << std::endl;
    std::cout << time4 << " >= " << time5 << ": " << (time4 >= time5) << std::endl;
    std::cout << time4 << " > " << time5 << ": " << (time4 > time5) << std::endl;
    std::cout << time4 << " <= " << time5 << ": " << (time4 <= time5) << std::endl;

    //Gettery i settery
    time1.set_hours(30);
    time1.set_mins(2);
    time1.set_sec(13);

    std::cout << "Wartosci poszczegolnych skladowych: " << time1.get_hours() << ": " << time1.get_mins() << ": " 
              << time1.get_sec() << std::endl;

    return 0;
}


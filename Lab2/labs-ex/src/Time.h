#pragma once
#ifndef _Time_H_
#define _Time_H_
#include <iostream>

class Time
{
private:
    unsigned int Seconds = 1;
    unsigned int Minutes = 1;
    unsigned int Hours = 1;

public:
    Time();         //konstruktor domyslny
    Time(unsigned Seconds, unsigned Minutes, int Hours); //konstruktor argumentowy

    Time(const Time& source); //konstruktor kopiujacy
    Time& operator = (const Time& source);  //operator przypisania 

    //porownanie
    bool operator==(const Time& other) const;
    bool operator!=(const Time& other) const;
    bool operator>(const Time& other) const;
    bool operator<(const Time& other) const;
    bool operator<=(const Time& other) const;
    bool operator>=(const Time& other) const;

    //getters & setters function
    void set_sec(unsigned Seconds);
    void set_mins(unsigned Minutes);
    void set_hours(unsigned Hours);
    
    unsigned get_sec() const;
    unsigned get_mins() const;
    unsigned get_hours() const;

    friend std::ostream& operator<<(std::ostream &os, const Time& time);
};
std::ostream& operator<<(std::ostream& os, const Time& time);

#endif
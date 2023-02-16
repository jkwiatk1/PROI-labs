#include <iostream>
#include <iomanip>
#include "date.h"

Date::Date() : day(1), month(1), year(2000)
{}

Date::Date(unsigned day, unsigned month, int year)
{
    if(month < 1 || month > 12 || day < 1 || day > 31)
    {
        return;
    }
    if((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
    {
        return;
    }
    if(month == 2)
    {
        if(is_leap_year(year)) //rok przestępny
        {
            if(day > 29)
            {
                return;
            }
        } else {
            if(day > 28)
            {
                return;
            }
        }
    }
    this -> day = day;
    this -> month = month; 
    this -> year = year;
}

Date::Date(const Date& source)
{
    this -> year = source.year;
    this -> month = source.month;
    this -> day = source.day;
}

Date& Date::operator=(const Date& source)
{
    if(this != &source)
    {
        year = source.year;
        month = source.month;
        day = source.day;
     }
    return *this;
}

Date& Date::operator++()
{
    switch(day)
    {
        case 31:
            day = 1;
            if(month == 12)
            {
                month = 1;
                year++;
            } else {
                month++;
            }        
            break;
        case 30:
            if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            {
                day++;
            } else {
                day = 1;
                month++;
            }       
            break;
        case 29:
            if(month == 2)
            {
                day = 1;
                month++;
            } else {
                day++;
            }
            break;
        case 28:
            if(month != 2 || (month == 2 && is_leap_year(year)))
            {
                day++;
            } 
            if(month == 2 && !is_leap_year(year))
            {
                day = 1;
                month++;
            }
            break;
        default:
            day++;
    }
    return *this;
}

Date Date::operator++(int) 
{
    Date old_date(*this);
    ++(*this);
    return old_date;
}

bool Date::operator==(const Date& other) const
{
    return day == other.day && month == other.month && year == other.year;
}

bool Date::operator!=(const Date& other) const
{
    return !(*this == other);
}

bool Date::operator<(const Date& other) const
{
    if(year != other.year)
    {
        return year < other.year;
    }
    if(month != other.month)
    {
        return month < other.month;
    }
    return day < other.day;
}

bool Date::operator>(const Date& other) const
{
    return other < *this;
}

bool Date::operator<=(const Date& other) const
{
    return !(*this > other);
}

bool Date::operator>=(const Date& other) const
{
    return !(*this < other);
}

unsigned Date::get_day() const
{
    return day;
}

unsigned Date::get_month() const
{
    return month;
}

int Date::get_year() const
{
    return year;
}

void Date::set_day(unsigned day)
{
    if(day < 1 || day > 31 || 
       (day == 29 && this -> month == 2 && !is_leap_year(this -> year)) ||
       (day == 30 && this -> month == 2) ||
       (day == 31 && (this -> month == 2 || this -> month == 4 || this -> month == 6 || this -> month == 9 || this -> month == 11)))
    {
       std::cout << "Niepoprawny dzien\n"; return;
    }
    this -> day = day;
}

void Date::set_month(unsigned month)
{
    if(month >= 1 && month <= 12)
    {
        this -> month = month;
    }
    else std::cout << "Niepoprawny miesiac\n";
}

void Date::set_year(int year)
{
    this -> year = year;
}

bool Date::is_leap_year(unsigned year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

std::ostream& operator<<(std::ostream& os, const Date& dt)
{
    os << dt.day << "." << std::setfill('0') << std::setw(2) << dt.month << "." << dt.year;
    return os;
} 
#include "Time.h"
#include <iostream>

Time::Time(): Seconds(1), Minutes(1), Hours(1) {}

Time::Time(unsigned Seconds, unsigned Minutes, int Hours) 
{
    if(Seconds < 0 || Seconds >= 60 || Minutes < 0 || Minutes >= 60 || Hours < 0)
    {return ;}
    
    this->Seconds = Seconds;
    this->Minutes = Minutes;
    this->Hours = Hours;
}

Time::Time(const Time& source)
{
    this->Seconds = source.Seconds;
    this->Minutes = source.Minutes;
    this->Hours = source.Hours;
}


void Time::set_sec(unsigned Seconds)
{
    if(Seconds > 0 && Seconds < 60)
    {
        this -> Seconds = Seconds;
    }
}


void Time::set_mins(unsigned Minutes)
{
    if(Minutes > 0 && Minutes < 60)
    {
        this -> Minutes = Minutes;
    }
}


void Time::set_hours(unsigned Hours)
{
    if(Hours > 0 && Hours < 60)
    {
        this -> Hours = Hours;
    }
}


unsigned Time::get_sec() const
{return Seconds;}

unsigned Time::get_mins() const
{return Minutes;}

unsigned Time::get_hours() const
{return Hours;}

bool Time::operator==(const Time& other) const
{
    return Seconds == other.Seconds && Minutes == other.Minutes  && Hours == other.Hours;
}

bool Time::operator!=(const Time& other) const
{
    return !(*this == other);
}

bool  Time::operator > (const Time& other) const
{
    if(Seconds != other.Seconds)
    {
        return Seconds > other.Seconds;
    }
    if(Minutes != other.Minutes)
    {
        return Minutes > other.Minutes;
    }
    return Hours > other.Hours;
}


bool  Time::operator < (const Time& other) const
{
    if(Seconds != other.Seconds)
    {
        return Seconds < other.Seconds;
    }
    if(Minutes != other.Minutes)
    {
        return Minutes < other.Minutes;
    }
    return Hours < other.Hours;
}

bool Time::operator <= (const Time& other) const
{
    return Seconds <= other.Seconds && Minutes <= other.Minutes  && Hours <= other.Hours;
    return !(*this < other);
}

bool Time::operator >= (const Time& other) const
{
    return !(*this < other);
}

std::ostream& operator<<(std::ostream& os, const Time& time)
{
    os << time.Hours << ":" << time.Minutes << ":" << time.Seconds;
    return os;
}





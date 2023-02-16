/*Klasa w tym wszystkie atrybuty i metody w scisly sposob bazuje na klasie udostepnionej przez Pana Prowadzacego na labolatorium nr2 z PROI
Do potrzeb zadania domowego nr2 zostala wykorzystana z niewielkimi modyfikacjami
*/
#ifndef DATE_H
#define DATE_H

class Date
{
    private:
        unsigned day = 0;
        unsigned month = 0;
        int year = 0;

    public:
        Date();
        Date(unsigned day, unsigned month, int year); 
        Date(const Date& source);
        Date& operator=(const Date& source);
        Date& operator++(); 
        Date operator++(int); 
        bool operator==(const Date& other) const;
        bool operator!=(const Date& other) const;
        bool operator<(const Date& other) const;
        bool operator>(const Date& other) const;
        bool operator<=(const Date& other) const;
        bool operator>=(const Date& other) const;
        unsigned get_day() const;
        unsigned get_month() const;
        int get_year() const;

        void set_day(unsigned day);
        void set_month(unsigned month);
        void set_year(int year);

        friend std::ostream& operator<<(std::ostream& os, const Date& dt);

        static bool is_leap_year(unsigned year); 
};

std::ostream& operator<<(std::ostream& os, const Date& dt);

#endif
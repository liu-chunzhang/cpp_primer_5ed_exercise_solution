#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <stdexcept>
using namespace std;

class date{
    friend ostream& operator << ( ostream &out , const date &d ) ;

    public:
        static const string month_name[12] ;
        static const string month_abbr[12] ;
        static const unsigned short days[12] ;

    public:
        date() = delete ;
        date( string &ds ) ;
        ~date() = default ;

    public:
        unsigned short getyear() const { return year ; }
        unsigned short getmonth() const { return month ; }
        unsigned short getday() const { return day; }

    private:
        unsigned short year ;
        unsigned short month ;
        unsigned short day ;
};

#endif // DATE_H

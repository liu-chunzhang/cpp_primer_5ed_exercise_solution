#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace::std ;

class Book{
    friend istream& operator >> ( istream& , Book& ) ;
    friend ostream& operator << ( ostream& , Book& ) ;

    public:
        Book() = default ;
        Book( const string& n , const string& I , double pr , const string& a , const string& p ) ;
        Book( istream& in ) ;
        ~Book() = default ;

    private:
        string Name , ISBN ;
        double Price = 0.0;
        string Author , Publisher ;
};

#endif // BOOK_H

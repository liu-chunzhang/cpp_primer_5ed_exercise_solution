#ifndef BOOK_H
#define BOOK_H

#include <iostream>
using namespace::std ;

class Book{
    friend istream &operator >> ( istream &in , Book &b ) ;
    friend ostream &operator << ( ostream &out , Book &b ) ;

    public:
        Book() = default ;
        Book( const string &n , const string &I , double pr , const string &a , const string &p ) ;
        Book( istream &in ) ;
        ~Book() = default ;

    private:
        string Name ;
        string ISBN ;
        double Price = 0.0;
        string Author ;
        string Publisher ;
};

#endif // BOOK_H

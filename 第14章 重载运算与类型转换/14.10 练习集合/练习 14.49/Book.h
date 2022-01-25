#ifndef Book_H
#define Book_H

#include <iostream>
using namespace::std ;

class Book{
    friend istream &operator >> ( istream &in , Book &b ) ;
    friend ostream &operator << ( ostream &out , Book &b ) ;
    friend bool operator == ( const Book &lhs , const Book &rhs ) ;
    friend bool operator != ( const Book &lhs , const Book &rhs ) ;

    public:
        Book() = default ;
        Book( const string &n , const string &I , double pr , const string &a , const string &p ) ;
        Book( istream &in ) ;
        Book( const Book &book ) = default ;
        Book &operator = ( const Book &book ) ;
        Book( Book &&book ) noexcept = default ;
        Book &operator = ( Book &&book ) ;
        ~Book() = default ;

    public:
        explicit operator bool() const ;

    private:
        string Name ;
        string ISBN ;
        double Price = 0.0;
        string Author ;
        string Publisher ;
};

#endif // Book_H

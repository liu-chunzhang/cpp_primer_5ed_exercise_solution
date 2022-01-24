#ifndef SALESITEM_H
#define SALESITEM_H

#include <iostream>
#include <string>
using namespace std ;

class Sales_item{
    friend istream &operator >> ( istream &in , Sales_item &s );
    friend ostream &operator << ( ostream &out , const Sales_item &s );
    friend bool operator == ( const Sales_item &lhs , const Sales_item &rhs ) ;
    friend bool operator != ( const Sales_item &lhs, const Sales_item &rhs ) ;
    friend Sales_item operator + ( const Sales_item &lhs , const Sales_item &rhs ) ;

    public:
        Sales_item() = default ;
        Sales_item( const string &book ) ;
        Sales_item( unsigned num , double price , const string &book ) ;
        Sales_item( istream &is ) ;
        Sales_item( const Sales_item &rhs ) ;
        Sales_item operator = ( const Sales_item &rhs ) ;
    public:
        Sales_item &operator += ( const Sales_item &rhs );
        string isbn() const ;

    private:
        std::string bookNo ;
        unsigned units_sold = 0;
        double revenue = 0.0;
};

#endif

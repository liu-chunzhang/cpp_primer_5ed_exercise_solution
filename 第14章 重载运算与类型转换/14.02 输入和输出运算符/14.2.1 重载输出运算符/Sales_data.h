#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
using namespace std;

class Sales_data{
    friend istream &operator >> ( istream &in , Sales_data &rhs ) ;
    friend ostream &operator << ( ostream &out , const Sales_data &rhs ) ;
    friend bool operator == ( const Sales_data &lhs , const Sales_data &rhs ) ;
    friend Sales_data operator + ( const Sales_data &lhs , const Sales_data &rhs ) ;

    public:
        Sales_data() = default ;
        Sales_data( const string &book ) ;
        Sales_data( const string &book , unsigned cnt , double rev ) ;
        Sales_data( istream &is ) ;
        Sales_data( const Sales_data &rhs ) = default ;
        Sales_data& operator = ( const Sales_data &rhs ) ;
        ~Sales_data() = default ;

    public:
        Sales_data &operator += ( const Sales_data &rhs ) ;
        string isbn() const ;
        bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) ;

    private:
        string bookNo;
        unsigned units_sold = 0 ;
        double revenue = 0.0 ;
        double avg_price() const ;
};

#endif // SALES_DATA_H

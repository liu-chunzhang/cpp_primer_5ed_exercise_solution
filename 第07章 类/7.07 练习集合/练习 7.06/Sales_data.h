#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
using namespace std;

class Sales_data {
    public:
        friend istream& operator >> ( istream &in , Sales_data &s ) ;                           // ����>>�����������read����
        friend ostream& operator << ( ostream &in , const Sales_data &s );                       // ����<<�����������print����
        friend bool operator == ( const Sales_data &lhs , const Sales_data &rhs ) ;
        friend bool operator != ( const Sales_data &lhs , const Sales_data &rhs ) ;
        friend Sales_data operator + ( const Sales_data &lhs , const Sales_data &rhs ) ;        // ����+�����������add����
        friend bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) ;

    public:
        Sales_data() = default ;
        Sales_data( const string &book ) ;
        Sales_data( istream &is ) ;
        ~Sales_data() = default ;

    public:
        Sales_data& operator += ( const Sales_data &s ) ;
        string isbn() const ;

    private:
        string bookNo;
        unsigned units_sold = 0 ;
        double sellingprice = 0.0 ;
        double saleprice = 0.0 ;
        double discount = 0.0 ;
};

#endif // SALES_DATA_H

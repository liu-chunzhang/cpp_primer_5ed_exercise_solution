#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
using namespace std;

class Sales_data {
    public:
        friend istream& operator >> ( istream &in , Sales_data &s );
        friend ostream& operator << ( ostream &in , const Sales_data &s );
        friend bool operator == ( const Sales_data &lhs , const Sales_data &rhs ) ;
        friend bool operator != ( const Sales_data &lhs , const Sales_data &rhs ) ;
        friend Sales_data operator + ( const Sales_data &lhs , const Sales_data &rhs ) ;
        friend bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) ;

    public:
        Sales_data() = default ;
        Sales_data( const string &book ) ;
        Sales_data( const string &book , const unsigned u , const double p1 , const double p2 ) ;
        Sales_data( const Sales_data &rhs ) ;
        Sales_data( istream &is ) { is >> *this ; }                                                     // 已经将目标函数的函数体移动到类的内部
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

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
        Sales_data( const string &book, unsigned cnt, double rev) ;
        Sales_data( const Sales_data& rhs ) ;
        explicit Sales_data( istream &is ) ;        // 加入了explicit关键字组指隐式类型转换
        ~Sales_data() = default ;
    public:
        Sales_data &operator += ( const Sales_data& ) ;
        string isbn() const ;
        double avg_price() const ;
        bool compareIsbn( const Sales_data& , const Sales_data& ) ;
    private:
        string bookNo;
        unsigned units_sold = 0 ;
        double revenue = 0.0 ;
};

#endif // SALES_DATA_H

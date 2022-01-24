#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
using namespace std;

struct Sales_data{
    string isbn() const ;
    double avg_price() const ;
    Sales_data &combine( const Sales_data &rhs ) ;          // 定义在类的内部的函数是隐式的内联函数

    string bookNo ;
    unsigned units_sold = 0 ;
    double revenue = 0.0 ;
};

Sales_data add( const Sales_data& , const Sales_data& ) ;
ostream &print( ostream& , const Sales_data& ) ;
istream &read( istream& , Sales_data& ) ;

string Sales_data::isbn() const {
    return bookNo ;
}

double Sales_data::avg_price() const {
    if( units_sold )
        return revenue / units_sold ;
    else
        return 0 ;
}

Sales_data &Sales_data::combine( const Sales_data &rhs ) {
    if( bookNo != rhs.bookNo )
        throw runtime_error( "必须具有相同的ISBN码" ) ;
    units_sold += rhs.units_sold ;
    revenue += rhs.units_sold ;
    return *this ;
}

#endif // SALES_DATA_H

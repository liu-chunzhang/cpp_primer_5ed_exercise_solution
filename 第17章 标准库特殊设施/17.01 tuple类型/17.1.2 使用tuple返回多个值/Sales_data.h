#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
using namespace std;

class Sales_data{
    friend class std::hash<Sales_data> ;

    friend istream &operator >> ( istream &in , Sales_data &rhs ) ;
    friend ostream &operator << ( ostream &out , const Sales_data &rhs ) ;
    friend bool operator == ( const Sales_data &lhs , const Sales_data &rhs ) ;
    friend bool operator != ( const Sales_data &lhs , const Sales_data &rhs ) ;
    friend Sales_data operator + ( const Sales_data &lhs , const Sales_data &rhs ) ;
    friend bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) ;

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
        unsigned getUnitsSold() const ;
        double getRevenue() const ;
        bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) ;

    private:
        string bookNo;
        unsigned units_sold = 0 ;
        double revenue = 0.0 ;
        double avg_price() const ;
};

namespace std{
    template <>
    struct hash<Sales_data>{
        typedef size_t result_type ;
        typedef Sales_data argument_type ;
        size_t operator() ( const Sales_data &s ) const ;           // 此函数的定义需要在源文件中定义
    };
}

#endif // SALES_DATA_H

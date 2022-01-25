#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
using namespace std;

class Sales_data {
    friend class std::hash<Sales_data> ;

    public:
        friend istream &operator >> ( istream &in , Sales_data &s );
        friend ostream &operator << ( ostream &in , const Sales_data &s );
        friend bool operator == ( const Sales_data &lhs , const Sales_data &rhs ) ;
        friend bool operator != ( const Sales_data &lhs , const Sales_data &rhs ) ;
        friend Sales_data operator + ( const Sales_data &lhs , const Sales_data &rhs ) ;
        friend bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) ;

    public:
        Sales_data() = default ;
        explicit Sales_data( const string &book ) ;
        Sales_data &operator = ( const string &book ) ;
        Sales_data( const string &book , const unsigned u , const double p1 , const double p2 ) ;
        explicit Sales_data( istream &in ) ;
        Sales_data( const Sales_data &rhs ) ;
        Sales_data &operator = ( const Sales_data &rhs ) ;
        ~Sales_data() = default ;

    public:
        Sales_data &operator += ( const Sales_data &rhs ) ;
        string isbn() const ;

    private:
        string bookNo ;
        unsigned units_sold = 0 ;
        double sellingprice = 0.0 ;
        double saleprice = 0.0 ;
        double discount = 0.0 ;
};

namespace std {
    template <>
    class hash<Sales_data>{
        public:
            using argument_type = Sales_data ;
            using result_type = size_t ;
            size_t operator() ( const Sales_data &rhs ) const ;
    };
}

#endif // SALES_DATA_H

#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
using namespace::std ;

class Sales_data {
    public:
        friend istream &operator >> ( istream& in , Sales_data& s );
        friend ostream &operator << ( ostream& out , const Sales_data& s );
        friend istream &read( istream& is ,Sales_data & s );
        friend ostream &print( ostream& out , Sales_data& s ) ;

    public:
        Sales_data() = default;
        ~Sales_data() = default ;

    public:
        string isbn() const ;
        Sales_data& combine( const Sales_data &rhs ) ;
        double avg_price() const ;

    private:
        string bookNo ;
        unsigned units_sold = 0;
        double revenue = 0.0;
};

#endif // SALES_DATA_H

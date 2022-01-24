#include "Sales_data.h"

istream &operator >> ( istream& in, Sales_data& s ){
    double price = 0.0 ;
    in >> s.bookNo >> s.units_sold >> price ;
    if( in )
        s.revenue = price * s.units_sold;
    else
        s = Sales_data();
    return in ;
}

ostream &operator << ( ostream& out, const Sales_data& s ){
    out << s.isbn() << " " << s.units_sold << " " << s.revenue << " " << s.avg_price();
    return out;
}

istream &read( istream &in ,Sales_data& s ){
    in >> s ;
    return in ;
}

ostream &print( ostream &out , Sales_data& s ){
    out << s ;
    return out ;
}

string Sales_data::isbn() const {
    return bookNo;
}

Sales_data& Sales_data::combine( const Sales_data &rhs ) {
    if( bookNo != rhs.bookNo )
        throw runtime_error( "不同的ISBN码对象不能直接相加！" ) ;
    units_sold += rhs.units_sold ;
    return *this;
}

double Sales_data::avg_price() const {
    return ( units_sold ) ? revenue / units_sold : 0 ;
}

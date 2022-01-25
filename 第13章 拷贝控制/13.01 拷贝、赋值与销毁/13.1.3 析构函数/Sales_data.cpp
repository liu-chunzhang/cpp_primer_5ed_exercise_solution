#include "Sales_data.h"

inline bool compareIsbn( const Sales_data& lhs , const Sales_data& rhs ){
    return lhs.isbn()== rhs.isbn() ;
}

inline bool operator == ( const Sales_data& lhs , const Sales_data& rhs ){
    return lhs.isbn() == rhs.isbn() && lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue ;
}

inline bool operator != ( const Sales_data& lhs , const Sales_data& rhs ){
    return !( lhs == rhs ) ;
}

Sales_data& Sales_data::operator += ( const Sales_data& rhs ){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue ;
    return *this;
}

istream& operator>> ( istream& in , Sales_data& s ){
    double price ;
    in >> s.bookNo >> s.units_sold >> price ;
    s.revenue =  s.units_sold * price ;
    return in ;
}

ostream& operator << ( ostream& out, const Sales_data& s ){
    out << s.isbn() << " " << s.units_sold << " " << s.revenue ;
    return out ;
}


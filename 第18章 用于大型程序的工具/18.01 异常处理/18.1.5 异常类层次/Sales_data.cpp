#include "Sales_data.h"

istream& operator >> ( istream& in , Sales_data& s ){
    double price ;
    in >> s.bookNo >> s.units_sold >> price ;
    s.revenue =  s.units_sold * price ;
    return in ;
}

ostream& operator << ( ostream& out, const Sales_data& s ){
    out << s.isbn() << " " << s.units_sold << " " << s.revenue ;
    return out ;
}

bool operator == ( const Sales_data& lhs , const Sales_data& rhs ){
    return lhs.isbn() == rhs.isbn() && lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue ;
}

Sales_data operator + ( const Sales_data& l , const Sales_data& r ) {
    if( l.isbn() != r.isbn() )
        throw isbn_mismatch( "wrong isbns" , l.isbn() , r.isbn() ) ;
    Sales_data sum ;
    sum.bookNo = l.bookNo ;
    sum.units_sold = l.units_sold + r.units_sold ;
    sum.revenue = l.revenue + r.revenue ;
    return sum ;
}

Sales_data& Sales_data::operator += ( const Sales_data& rhs ){
    if( rhs.isbn() != isbn() )
        throw isbn_mismatch( "wrong isbns" , isbn() , rhs.isbn() ) ;
    units_sold += rhs.units_sold;
    revenue += rhs.revenue ;
    return *this;
}

bool Sales_data::compareIsbn( const Sales_data& lhs , const Sales_data& rhs ){
    return lhs.isbn()== rhs.isbn() ;
}

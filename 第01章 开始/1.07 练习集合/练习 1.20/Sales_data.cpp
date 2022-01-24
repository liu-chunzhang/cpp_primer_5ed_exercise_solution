#include "Sales_data.h"

istream& operator >> ( istream& in , Sales_data& s ){
    double price ;
    in >> s.bookNo >> s.units_sold >> price ;
    s.revenue =  s.units_sold * price ;
    return in ;
}

ostream& operator << ( ostream& out, const Sales_data& s ){                                               // 此为重载的输出运算符<<
    out << s.isbn() << " " << s.units_sold << " " << s.revenue ;
    return out ;
}

bool operator == ( const Sales_data& lhs , const Sales_data& rhs ){
    return lhs.isbn() == rhs.isbn() && lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue ;
}

Sales_data& Sales_data::operator += ( const Sales_data& rhs ){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue ;
    return *this;
}

bool Sales_data::compareIsbn( const Sales_data& lhs , const Sales_data& rhs ){
    return lhs.isbn()== rhs.isbn() ;
}

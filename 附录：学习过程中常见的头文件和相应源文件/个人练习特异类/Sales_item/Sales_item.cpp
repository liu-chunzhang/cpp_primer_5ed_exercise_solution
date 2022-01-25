#include "Sales_item.h"

inline bool compareIsbn( const Sales_item& lhs , const Sales_item& rhs ){
    return lhs.isbn() == rhs.isbn();
}

inline bool operator == ( const Sales_item& lhs, const Sales_item& rhs ){
    return lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue && lhs.isbn() == rhs.isbn();
}

inline bool operator != ( const Sales_item& lhs, const Sales_item& rhs ){
    return !( lhs == rhs );
}

Sales_item& Sales_item::operator+=(const Sales_item& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

istream& operator >> ( istream& in, Sales_item& s ){
    double price;
    in >> s.bookNo >> s.units_sold >> price;
    s.revenue = s.units_sold * price;
    return in;
}

ostream& operator << ( ostream& out, const Sales_item& s){
    out << s.isbn() << " " << s.units_sold << " " << s.revenue ;
    return out;
}

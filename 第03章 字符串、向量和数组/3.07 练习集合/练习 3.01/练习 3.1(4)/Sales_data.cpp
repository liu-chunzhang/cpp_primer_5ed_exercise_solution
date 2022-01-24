#include "Sales_data.h"
// 友元函数
istream& operator >> ( istream& in , Sales_data& s ) {
    in >> s.bookNo >> s.units_sold >> s.sellingprice >> s.saleprice ;
    if( in && s.sellingprice != 0 )
        s.discount = s.saleprice / s.sellingprice ;
    else
        s = Sales_data() ;
    return in ;
}

ostream& operator << ( ostream& out, const Sales_data& s ) {
    out << s.isbn() << " " << s.units_sold << " " << s.sellingprice << " " << s.saleprice << " " << s.discount ;
    return out ;
}

bool operator == ( const Sales_data &lhs , const Sales_data & rhs ) {
    return lhs.units_sold == rhs.units_sold && lhs.sellingprice == rhs.sellingprice && lhs.saleprice == rhs.saleprice && lhs.isbn() == rhs.isbn() ;
}

bool operator != ( const Sales_data &lhs , const Sales_data &rhs ) {
    return !( lhs == rhs ) ;
}

Sales_data operator + (const Sales_data& lhs, const Sales_data& rhs ) {
    Sales_data ret( lhs ) ;
    ret += rhs ;
    return ret ;
}

bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) {
    return lhs.isbn() == rhs.isbn() ;
}

// 构造函数与析构函数
Sales_data::Sales_data( const string &book ) : bookNo( book ) { }

Sales_data::Sales_data( istream &is ) { is >> *this; }

// 成员函数
Sales_data& Sales_data::operator += ( const Sales_data& rhs ) {
    units_sold += rhs.units_sold;
    saleprice = ( rhs.saleprice * rhs.units_sold + saleprice * units_sold ) / ( rhs.units_sold + units_sold ) ;
    if( sellingprice != 0 )
        discount = saleprice / sellingprice ;
    return *this;
}

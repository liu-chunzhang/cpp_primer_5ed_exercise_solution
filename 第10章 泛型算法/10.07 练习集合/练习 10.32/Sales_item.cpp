#include "Sales_item.h"
// 友元函数
istream &operator >> ( istream &in , Sales_item &s ) {
    double price ;
    in >> s.bookNo >> s.units_sold >> price;
    s.revenue = s.units_sold * price;
    return in;
}

ostream &operator << ( ostream &out, const Sales_item &s ){
    out << s.bookNo << " " << s.units_sold << " " << s.revenue ;
    return out;
}

bool operator == ( const Sales_item &lhs, const Sales_item &rhs ) {
    return lhs.bookNo == rhs.bookNo && lhs.revenue == rhs.revenue && lhs.units_sold == rhs.units_sold ;
}

bool operator != ( const Sales_item &lhs, const Sales_item &rhs ) {
    return !( lhs == rhs ) ;
}

Sales_item operator + ( const Sales_item &lhs , const Sales_item &rhs ) {
    Sales_item temp( lhs ) ;
    temp += rhs ;
    return temp ;
}
// 构造函数
Sales_item::Sales_item( const string &book ) : bookNo( book ) { }

Sales_item::Sales_item( unsigned num , double price , const string &book ) : bookNo( book ) , units_sold( num ) , revenue( num * price ) { }

Sales_item::Sales_item( istream &is ) {
    is >> *this ;
}

Sales_item::Sales_item( const Sales_item &rhs ) : bookNo( rhs.bookNo ) , units_sold( rhs.units_sold ) , revenue( rhs.revenue ) { }

Sales_item Sales_item::operator = ( const Sales_item &rhs ) {
    bookNo = rhs.bookNo ;
    units_sold = rhs.units_sold ;
    revenue = rhs.revenue ;
    return *this ;
}
// 辅助函数
Sales_item &Sales_item::operator += ( const Sales_item &rhs ){
    if( bookNo != rhs.bookNo )
        throw invalid_argument( "两个ISBN码不相同的对象不能相加！" ) ;
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

string Sales_item::isbn() const {
    return bookNo ;
}

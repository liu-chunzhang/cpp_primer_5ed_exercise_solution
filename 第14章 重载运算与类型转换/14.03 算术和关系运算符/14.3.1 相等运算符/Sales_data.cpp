#include "Sales_data.h"
// 友元函数
istream &operator >> ( istream &in , Sales_data &s ){
    double price ;
    in >> s.bookNo >> s.units_sold >> price ;
    if( in )
        s.revenue =  s.units_sold * price ;
    else
        s = Sales_data() ;
    return in ;
}

ostream &operator << ( ostream &out , const Sales_data &s ) {
    out << s.bookNo << " " << s.units_sold << " " << s.revenue << " " << s.avg_price() ;
    return out ;
}

bool operator == ( const Sales_data &lhs , const Sales_data &rhs ){
    return lhs.bookNo == rhs.bookNo && lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue ;
}

bool operator != ( const Sales_data &lhs , const Sales_data &rhs ) {
    return !( lhs == rhs ) ;
}

Sales_data operator + ( const Sales_data &lhs , const Sales_data &rhs ) {
    Sales_data temp( lhs ) ;
    temp += rhs ;
    return temp ;
}

bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ){
    return lhs.bookNo == rhs.bookNo ;
}

// 构造函数和析构函数
Sales_data::Sales_data( const string &book ) : bookNo( book ) { }

Sales_data::Sales_data( const string &book, unsigned cnt, double rev ) : bookNo( book ) , units_sold( cnt ) , revenue( cnt * rev ) { }

Sales_data::Sales_data( istream &is ) {
    is >> *this ;
}

Sales_data& Sales_data::operator = ( const Sales_data &rhs ) {
    bookNo = rhs.bookNo ;
    units_sold = rhs.units_sold ;
    revenue = rhs.revenue ;
    return *this ;
}
// 辅助函数
Sales_data &Sales_data::operator += ( const Sales_data &rhs ){
    if( bookNo != rhs.bookNo )
        throw runtime_error( "相加对象必须有相同的ISBN码！" ) ;
    units_sold += rhs.units_sold;
    revenue += rhs.revenue ;
    return *this;
}

string Sales_data::isbn() const {
    return bookNo ;
}

// 私有函数
double Sales_data::avg_price() const {
    return ( units_sold ) ? revenue / units_sold : 0 ;
}

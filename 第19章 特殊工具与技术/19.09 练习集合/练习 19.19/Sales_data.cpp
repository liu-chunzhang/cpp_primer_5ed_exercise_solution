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

ostream &operator << ( ostream &out, const Sales_data &s ){                                               // 此为重载的输出运算符<<
    out << s.bookNo << " " << s.units_sold << " " << s.revenue << " " << s.avg_price() ;
    return out ;
}

bool operator == ( const Sales_data& lhs , const Sales_data& rhs ){
    return lhs.isbn() == rhs.isbn() && lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue ;
}

bool operator != ( const Sales_data &lhs , const Sales_data &rhs ) {
    return !( lhs == rhs ) ;
}

Sales_data operator + ( const Sales_data &lhs , const Sales_data &rhs ) {
    Sales_data temp( lhs ) ;
    temp += rhs ;
    return temp ;
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

unsigned Sales_data::getUnitsSold() const {
    return units_sold ;
}

double Sales_data::getRevenue() const {
    return revenue ;
}

double Sales_data::check_value( double currentprice ) const {
    return avg_price() > currentprice ;
}

double Sales_data::avg_price() const {
    return ( units_sold ) ? revenue / units_sold : 0 ;
}

namespace std{
    size_t hash<Sales_data>::operator() ( const Sales_data &s ) const {
        return hash<string>()( s.bookNo ) ^ hash<unsigned>()( s.units_sold ) ^ hash<double>()( s.revenue ) ;
    }
}

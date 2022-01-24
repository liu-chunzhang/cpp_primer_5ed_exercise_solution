#include "Sales_data.h"
// Sales_data类
// 友元函数
istream &operator >> ( istream &in , Sales_data &s ){
    double price = 0 ;
    in >> s.bookNo >> s.units_sold >> price ;
    s.revenue =  s.units_sold * price ;
    return in ;
}

ostream &operator << ( ostream &out, const Sales_data &s ){                                               // 此为重载的输出运算符<<
    out << s.bookNo << " " << s.units_sold << " " << s.revenue << " " << s.avg_price() ;
    return out ;
}

bool operator == ( const Sales_data& lhs , const Sales_data& rhs ){
    return lhs.isbn() == rhs.isbn() && lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue ;
}

Sales_data operator + ( const Sales_data &lhs , const Sales_data &rhs ) {
    Sales_data temp( lhs ) ;
    temp += rhs ;
    return temp ;
}
// 构造函数和析构函数
Sales_data::Sales_data( const string &book ) : bookNo( book ) { }

Sales_data::Sales_data( const string &book , unsigned cnt , double rev ) : bookNo( book ) , units_sold( cnt ) , revenue( cnt * rev ) { }

Sales_data::Sales_data( const Sales_data& rhs ) {
    bookNo = rhs.bookNo ;
    units_sold = rhs.units_sold ;
    revenue = rhs.revenue ;
}

Sales_data::Sales_data( istream &is ) {
    is >> *this ;
}
// 辅助函数
Sales_data &Sales_data::operator += ( const Sales_data& rhs ){
    if( bookNo != rhs.bookNo )
        throw runtime_error( "相加对象必须有相同的ISBN码！" ) ;
    units_sold += rhs.units_sold;
    revenue += rhs.revenue ;
    return *this;
}

string Sales_data::isbn() const {
    return bookNo ;
}

double Sales_data::avg_price() const {
    return ( units_sold ) ? revenue / units_sold : 0 ;
}

bool Sales_data::compareIsbn( const Sales_data& lhs , const Sales_data& rhs ){
    return lhs.isbn()== rhs.isbn() ;
}
// ConstRef 类
// 构造函数
/*
ConstRef::ConstRef( int ii ) {
    i = ii ;
    ci = ii ;                                                                   // 错误：不能给const赋值
    ri = i ;                                                                    // 错误：ri没被初始化
}
*/
ConstRef::ConstRef( int ii ) : i( ii ) , ci( ii ) , ri( i ) { }

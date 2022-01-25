#include "Sales_data.h"
// ��Ԫ����
istream &operator >> ( istream& in , Sales_data &s ) {
    in >> s.bookNo >> s.units_sold >> s.sellingprice >> s.saleprice ;
    if( in && s.sellingprice != 0 )
        s.discount = s.saleprice / s.sellingprice ;
    else
        s = Sales_data() ;
    return in ;
}

ostream &operator << ( ostream &out , const Sales_data &s ) {
    out << s.bookNo << " " << s.units_sold << " " << s.sellingprice << " " << s.saleprice << " " << s.discount ;
    return out ;
}

bool operator == ( const Sales_data &lhs , const Sales_data &rhs ) {
    return lhs.units_sold == rhs.units_sold && lhs.sellingprice == rhs.sellingprice && lhs.saleprice == rhs.saleprice && lhs.bookNo == rhs.bookNo ;
}

bool operator != ( const Sales_data &lhs , const Sales_data &rhs ) {
    return !( lhs == rhs ) ;
}

Sales_data operator + ( const Sales_data &lhs, const Sales_data &rhs ) {
    if( lhs.bookNo != rhs.bookNo )
        throw invalid_argument( "������Ŀ��ISBN�벻��ͬ��������ӣ�" ) ;
    Sales_data temp( lhs ) ;
    temp.units_sold += rhs.units_sold ;
    temp.saleprice = ( rhs.saleprice * rhs.units_sold + lhs.saleprice * lhs.units_sold ) / ( rhs.units_sold + lhs.units_sold ) ;
    if( temp.sellingprice != 0 )
        temp.discount = temp.saleprice / temp.sellingprice ;
    return temp ;
}

bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) {
    return lhs.bookNo == rhs.bookNo ;
}

// ���캯������������
Sales_data::Sales_data( const string &book ) : bookNo( book ) { }

Sales_data::Sales_data( const string &book , const unsigned u , const double p1 , const double p2 ) : bookNo( book ) , units_sold( u ) , sellingprice( p1 ) , saleprice( p2 ) {
    discount = ( sellingprice ) ? saleprice / sellingprice : 0 ;
}

Sales_data::Sales_data( istream &in ) {
    in >> *this;
}

Sales_data::Sales_data( const Sales_data &rhs ) : bookNo( rhs.bookNo ) , units_sold( rhs.units_sold ) , sellingprice( rhs.sellingprice ) , saleprice( rhs.saleprice ) , discount( rhs.discount ) { }

Sales_data &Sales_data::operator = ( const Sales_data &rhs ) {
    bookNo = rhs.bookNo ;
    units_sold = rhs.units_sold ;
    sellingprice = rhs.sellingprice ;
    saleprice = rhs.saleprice ;
    discount = rhs.discount ;
    return *this ;
}

// ��Ա����
Sales_data &Sales_data::operator += ( const Sales_data &rhs ) {
    *this = ( *this ) + rhs ;
    return *this ;
}

string Sales_data::isbn() const {
    return bookNo;
}

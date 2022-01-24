#include "Sales_data.h"
// ��Ԫ����
istream& operator >> ( istream& in , Sales_data& s ) {
    in >> s.bookNo >> s.units_sold >> s.sellingprice >> s.saleprice ;
    if( in && s.sellingprice != 0 )
        s.discount = s.saleprice / s.sellingprice ;
    else
        s = Sales_data() ;
    return in ;
}

ostream& operator << ( ostream& out, const Sales_data& s ) {
    out << s.bookNo << " " << s.units_sold << " " << s.sellingprice << " " << s.saleprice << " " << s.discount ;
    return out ;
}

bool operator == ( const Sales_data &lhs , const Sales_data & rhs ) {
    return lhs.units_sold == rhs.units_sold && lhs.sellingprice == rhs.sellingprice && lhs.saleprice == rhs.saleprice && lhs.bookNo == rhs.bookNo ;
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
    return lhs.bookNo == rhs.bookNo ;
}

// ���캯������������
Sales_data::Sales_data() : Sales_data( "" , 0 , 0 , 0 ) {
    cout << "�ù��캯����������Ϣ��" << endl;
}

Sales_data::Sales_data( const string &book ) : Sales_data( book , 0 , 0 , 0 ) {
    cout << "�ù��캯���������һ����Ϣ��" << endl;
}

Sales_data::Sales_data( const string &book , const unsigned u , const double p1 , const double p2 ) : bookNo( book ) , units_sold( u ) , sellingprice( p1 ) , saleprice( p2 ) {
    discount = ( sellingprice ) ? saleprice / sellingprice : 0 ;
    cout << "�ù��캯��������š���������ԭ�ۼ�ʵ�ۼ��ܼ��ĸ���Ϣ��" << endl;
}

Sales_data::Sales_data( const Sales_data &rhs ) : Sales_data( rhs.bookNo , rhs.units_sold , rhs.sellingprice , rhs.saleprice ) {
    cout << "�ù��캯������ԭ����������Ϣһ����Ϣ��" << endl;
}

Sales_data::Sales_data( istream &is ) {
    is >> *this;
    cout << "�ù��캯�����ܱ�׼�������Ϣ��" << endl;
}

// ��Ա����
Sales_data& Sales_data::operator += ( const Sales_data& rhs ) {
    units_sold += rhs.units_sold;
    saleprice = ( rhs.saleprice * rhs.units_sold + saleprice * units_sold ) / ( rhs.units_sold + units_sold ) ;
    if( sellingprice != 0 )
        discount = saleprice / sellingprice ;
    return *this;
}

string Sales_data::isbn() const {
    return bookNo ;
}

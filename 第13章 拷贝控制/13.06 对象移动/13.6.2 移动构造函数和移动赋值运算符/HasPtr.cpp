#include "HasPtr.h"
// 友元函数
bool operator == ( const HasPtr &h1 , const HasPtr &h2 ) {
    return h1.ps == h2.ps && h1.i == h2.i ;
}

bool operator != ( const HasPtr &lhs , const HasPtr &rhs ) {
    return !( lhs == rhs ) ;
}
// 构造函数与析构函数
HasPtr::HasPtr( const string &s ) : ps( new string( s ) ) , i( 0 ) { }

HasPtr::HasPtr( const string &s , int j ) : ps( new string( s ) ) , i( j ) { }

HasPtr::HasPtr( const HasPtr &h ) : ps( new string( *h.ps ) ) , i( h.i ) { }

HasPtr::HasPtr( HasPtr &&h ) noexcept : ps( h.ps ) , i( h.i ) { h.ps = nullptr ; }

HasPtr &HasPtr::operator = ( HasPtr rhs ) {         // 单一的赋值运算符实现了拷贝赋值运算符和移动赋值运算符的功能
    swap( ps , rhs.ps ) ;
    swap( i , rhs.i ) ;
    return *this ;
}

HasPtr::~HasPtr(){
    delete ps ;
}

// 功能性函数
string *HasPtr::return_sptr() const{
    return ps ;
}

HasPtr &HasPtr::operator = ( const string &s ){
    *ps = s ;
    return *this ;
}

string &HasPtr::operator * () const {
    return *ps ;
}

#include "HasPtr.h"
// 友元函数
bool operator == ( const HasPtr &h1 , const HasPtr &h2 ) {
    return h1.ps == h2.ps && h1.i == h2.i ;
}

bool operator != ( const HasPtr &lhs , const HasPtr &rhs ) {
    return !( lhs == rhs ) ;
}

void swap( HasPtr &lhs , HasPtr &rhs ) {
    using std::swap ;
    swap( lhs.ps , rhs.ps ) ;
    swap( lhs.i , rhs.i ) ;
}

// 构造函数与析构函数
HasPtr::HasPtr( const string &s ) : ps( new string( s ) ) , i( 0 ) { }

HasPtr::HasPtr( const string &s , int j ) : ps( new string( s ) ) , i( j ) { }

HasPtr::HasPtr( const HasPtr &h ) : ps( new string( *h.ps ) ) , i( h.i ) { }

HasPtr::HasPtr( HasPtr &&h ) : ps( h.ps ) , i( h.i ) {
    h.ps = nullptr ;
}

HasPtr &HasPtr::operator = ( HasPtr h ) {
    swap( *this , h ) ;
    return *this ;
}

HasPtr::~HasPtr(){
    delete ps ;
}

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

#include "HasPtr.h"
// ��Ԫ����
bool operator == ( const HasPtr &h1 , const HasPtr &h2 ) {
    return h1.ps == h2.ps && h1.i == h2.i ;
}

bool operator != ( const HasPtr &lhs , const HasPtr &rhs ) {
    return !( lhs == rhs ) ;
}

bool operator < ( const HasPtr &lhs , const HasPtr &rhs ) {
    return *lhs.ps < *rhs.ps ;
}

bool operator <= ( const HasPtr &lhs , const HasPtr &rhs ) {
    return *lhs.ps <= *rhs.ps ;
}

bool operator > ( const HasPtr &lhs , const HasPtr &rhs ) {
    return *lhs.ps > *rhs.ps ;
}

bool operator >= ( const HasPtr &lhs , const HasPtr &rhs ) {
    return *lhs.ps >= *rhs.ps ;
}

void swap( HasPtr &lhs , HasPtr &rhs ) {
    using std::swap ;
    swap( lhs.ps , rhs.ps ) ;
    swap( lhs.i , rhs.i ) ;
    cout << "ִ���˺���swap( HasPtr &lhs , HasPtr &rhs )" << endl;
}

// ���캯������������
HasPtr::HasPtr( const string &s ) : ps( new string( s ) ) , i( 0 ) { }

HasPtr::HasPtr( const string &s , int j ) : ps( new string( s ) ) , i( j ) { }

HasPtr::HasPtr( const HasPtr &h ) : ps( new string( *h.ps ) ) , i( h.i ) { }

HasPtr::~HasPtr(){
    delete ps ;
}

HasPtr &HasPtr::operator = ( const HasPtr &rhs ){
    string *newp = new string( *rhs.ps ) ;
    delete ps ;
    ps = newp ;                                               // ����ʹ�õ�������ָ�룬���Բ�������ȥ������
    i = rhs.i ;
    return *this ;
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

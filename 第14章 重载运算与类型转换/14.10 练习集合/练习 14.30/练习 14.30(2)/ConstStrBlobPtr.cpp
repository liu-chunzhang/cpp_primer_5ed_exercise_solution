#include "ConstStrBlobPtr.h"
// ��Ԫ����
bool operator == ( const ConstStrBlobPtr &lhs , const ConstStrBlobPtr &rhs ) {
    return lhs.wptr.lock() == rhs.wptr.lock() ? ( !rhs.wptr.lock() || lhs.curr == rhs.curr ) : false ;
}

bool operator != ( const ConstStrBlobPtr &lhs , const ConstStrBlobPtr &rhs ) {
    return !( lhs == rhs ) ;
}

// ���캯��
ConstStrBlobPtr::ConstStrBlobPtr() : curr( 0 ) { }

ConstStrBlobPtr::ConstStrBlobPtr( const StrBlob &a , size_t sz ) : wptr( a.data ) , curr( sz ) { }

ConstStrBlobPtr::ConstStrBlobPtr( const ConstStrBlobPtr &rhs ) : wptr( rhs.wptr ) , curr( rhs.curr ) { }

ConstStrBlobPtr& ConstStrBlobPtr::operator = ( const ConstStrBlobPtr &rhs ) {
    wptr = rhs.wptr ;
    curr = rhs.curr ;
    return *this ;
}

// �����Ժ���
string &ConstStrBlobPtr::operator * () const {
    shared_ptr<vector<string>> p = check( curr , "dereference past end" ) ;
    return ( *p )[curr] ;
}

string *ConstStrBlobPtr::operator -> () const {
    return &( this->operator*() ) ;
}

ConstStrBlobPtr& ConstStrBlobPtr::operator ++ () {                                                     // ����ǰ�õ��������++���غ���incr
    check( curr , "increment past end of ConstStrBlobPtr" ) ;
    ++curr ;
    return *this ;
}

ConstStrBlobPtr& ConstStrBlobPtr::operator -- () {                                                     // ����ǰ�õ��������--���غ���decr
    --curr ;                                                                                 // ���curr�Ѿ�Ϊ0���ݼ�������һ�Ƿ��±�
    check( curr , "decrement past begin of ConstStrBlobPtr" ) ;
    return *this ;
}

// ˽�к���
shared_ptr<vector<string>> ConstStrBlobPtr::check( size_t i , const string &msg ) const{
    shared_ptr<vector<string>> ret = wptr.lock() ;                                        // vector������
    if( !ret )
        throw runtime_error( "unbound ConstStrBlobPtr" ) ;
    if( i >= ret->size() )
        throw out_of_range( msg ) ;
    return ret ;                                                                            // ����ָ��vector��shared_ptr
}

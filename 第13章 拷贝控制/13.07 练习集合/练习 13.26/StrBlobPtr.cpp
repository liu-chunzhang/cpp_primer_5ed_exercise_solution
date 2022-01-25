#include "StrBlobPtr.h"
// ��Ԫ����
bool operator == ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) {
    return lhs.wptr.lock() == rhs.wptr.lock() ? ( !rhs.wptr.lock() || lhs.curr == rhs.curr ) : false ;
}

bool operator != ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) {
    return !( lhs == rhs ) ;
}

// ���캯��
StrBlobPtr::StrBlobPtr() : curr( 0 ) { }

StrBlobPtr::StrBlobPtr( StrBlob &a , size_t sz ) : wptr( a.data ) , curr( sz ) { }

// �����Ժ���
string &StrBlobPtr::operator * () const {
    shared_ptr<vector<string>> p = check( curr , "dereference past end" ) ;
    return ( *p )[curr] ;
}

StrBlobPtr &StrBlobPtr::operator++ () {                                                     // ����ǰ�õ��������++���غ���incr
    check( curr , "increment past end of StrBlobPtr" ) ;
    ++curr ;
    return *this ;
}

StrBlobPtr &StrBlobPtr::operator-- () {                                                     // ����ǰ�õ��������--���غ���decr
    --curr ;                                                                                 // ���curr�Ѿ�Ϊ0���ݼ�������һ�Ƿ��±�
    check( -1 , "decrement past begin of StrBlobPtr" ) ;
    return *this ;
}

// ˽�к���
shared_ptr<vector<string>> StrBlobPtr::check( size_t i , const string &msg ) const{
    shared_ptr<vector<string>> ret = wptr.lock() ;                                        // vector������
    if( !ret )
        throw runtime_error( "unbound StrBlobPtr" ) ;
    if( i >= ret->size() )
        throw out_of_range( msg ) ;
    return ret ;                                                                            // ����ָ��vector��shared_ptr
}

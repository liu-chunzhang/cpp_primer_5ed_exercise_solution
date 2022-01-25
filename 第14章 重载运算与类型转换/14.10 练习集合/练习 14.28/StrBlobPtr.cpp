#include "StrBlobPtr.h"
// ��Ԫ����
bool operator == ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) {
    return lhs.wptr.lock() == rhs.wptr.lock() ? ( !rhs.wptr.lock() || lhs.curr == rhs.curr ) : false ;
}

bool operator != ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) {
    return !( lhs == rhs ) ;
}

bool operator < ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) {
    shared_ptr<vector<string>> temp1 = lhs.wptr.lock() , temp2 = rhs.wptr.lock() ;
    if( temp1 == temp2 ){
        if( !temp1 )
            return false ;
        return lhs.curr < rhs.curr ;
    }
    else
        return false ;
}

bool operator <= ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) {
    return lhs < rhs || lhs == rhs ;
}

bool operator > ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) {
    shared_ptr<vector<string>> temp1 = lhs.wptr.lock() , temp2 = rhs.wptr.lock() ;
    if( temp1 == temp2 ){
        if( !temp1 )
            return false ;
        return lhs.curr > rhs.curr ;
    }
    else
        return false ;
}

bool operator >= ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) {
    return lhs > rhs || lhs == rhs ;
}

StrBlobPtr operator + ( const StrBlobPtr &rhs , size_t n ) {
    StrBlobPtr temp( rhs ) ;
    temp += n ;
    return temp ;
}

// ���캯��
StrBlobPtr::StrBlobPtr() : curr( 0 ) { }

StrBlobPtr::StrBlobPtr( StrBlob &a , size_t sz ) : wptr( a.data ) , curr( sz ) { }

StrBlobPtr::StrBlobPtr( const StrBlob &a , size_t sz ) : wptr( a.data ) , curr( sz ) { }

StrBlobPtr::StrBlobPtr( const StrBlobPtr &rhs ) : wptr( rhs.wptr.lock() ) , curr( rhs.curr ) { }

StrBlobPtr& StrBlobPtr::operator = ( const StrBlobPtr &rhs ) {
    wptr = rhs.wptr.lock() ;
    curr = rhs.curr ;
    return *this ;
}

// �����Ժ���
string &StrBlobPtr::operator * () const {
    shared_ptr<vector<string>> p = check( curr , "dereference past end" ) ;
    return ( *p )[curr] ;
}

StrBlobPtr& StrBlobPtr::operator++ () {                                                     // ����ǰ�õ��������++���غ���incr
    check( curr , "increment past end of StrBlobPtr" ) ;
    ++curr ;
    return *this ;
}

StrBlobPtr& StrBlobPtr::operator-- () {                                                     // ����ǰ�õ��������--���غ���decr
    --curr ;                                                                                 // ���curr�Ѿ�Ϊ0���ݼ�������һ�Ƿ��±�
    check( curr , "decrement past begin of StrBlobPtr" ) ;
    return *this ;
}

StrBlobPtr StrBlobPtr::operator ++( int ) {
    StrBlobPtr temp = *this ;
    ++*this ;
    return temp ;
}

StrBlobPtr StrBlobPtr::operator --( int ) {
    StrBlobPtr temp = *this ;
    --*this ;
    return temp ;
}

StrBlobPtr& StrBlobPtr::operator +=( size_t n ) {
    check( curr + n , "increment past end of StrBlobPtr" ) ;
    curr += n ;
    return *this ;
}

StrBlobPtr StrBlobPtr::operator + ( size_t n ) {
    check( curr + n , "increment past end of StrBlobPtr" ) ;
    StrBlobPtr temp = *this ;
    temp.curr += n ;
    return temp ;
}

StrBlobPtr StrBlobPtr::operator - ( size_t n ) {
    check( curr - n , "increment past end of StrBlobPtr" ) ;
    StrBlobPtr temp = *this ;
    temp.curr -= n ;
    return temp ;
}

string &StrBlobPtr::operator [] ( size_t n ) {
    return (*wptr.lock())[n] ;
}

const string &StrBlobPtr::operator [] ( size_t n ) const {
    return (*wptr.lock())[n] ;
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

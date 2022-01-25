#include "StrBlobPtr.h"
// 友元函数
bool operator == ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) {
    return lhs.wptr.lock() == rhs.wptr.lock() ? ( !rhs.wptr.lock() || lhs.curr == rhs.curr ) : false ;
}

bool operator != ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) {
    return !( lhs == rhs ) ;
}

// 构造函数
StrBlobPtr::StrBlobPtr() : curr( 0 ) { }

StrBlobPtr::StrBlobPtr( StrBlob &a , size_t sz ) : wptr( a.data ) , curr( sz ) { }

// 功能性函数
string &StrBlobPtr::operator * () const {
    shared_ptr<vector<string>> p = check( curr , "dereference past end" ) ;
    return ( *p )[curr] ;
}

StrBlobPtr &StrBlobPtr::operator++ () {                                                     // 利用前置递增运算符++重载函数incr
    check( curr , "increment past end of StrBlobPtr" ) ;
    ++curr ;
    return *this ;
}

StrBlobPtr &StrBlobPtr::operator-- () {                                                     // 利用前置递增运算符--重载函数decr
    --curr ;                                                                                 // 如果curr已经为0，递减将产生一非法下标
    check( -1 , "decrement past begin of StrBlobPtr" ) ;
    return *this ;
}

// 私有函数
shared_ptr<vector<string>> StrBlobPtr::check( size_t i , const string &msg ) const{
    shared_ptr<vector<string>> ret = wptr.lock() ;                                        // vector存在吗？
    if( !ret )
        throw runtime_error( "unbound StrBlobPtr" ) ;
    if( i >= ret->size() )
        throw out_of_range( msg ) ;
    return ret ;                                                                            // 否则，指向vector的shared_ptr
}

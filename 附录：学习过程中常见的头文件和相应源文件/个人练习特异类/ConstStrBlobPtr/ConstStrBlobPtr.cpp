#include "ConstStrBlobPtr.h"
// 友元函数
bool operator == ( const ConstStrBlobPtr &lhs , const ConstStrBlobPtr &rhs ) {
    return lhs.wptr.lock() == rhs.wptr.lock() ? ( !rhs.wptr.lock() || lhs.curr == rhs.curr ) : false ;
}

bool operator != ( const ConstStrBlobPtr &lhs , const ConstStrBlobPtr &rhs ) {
    return !( lhs == rhs ) ;
}

// 构造函数
ConstStrBlobPtr::ConstStrBlobPtr() : curr( 0 ) { }

ConstStrBlobPtr::ConstStrBlobPtr( const StrBlob &a , size_t sz ) : wptr( a.data ) , curr( sz ) { }

ConstStrBlobPtr::ConstStrBlobPtr( const ConstStrBlobPtr &rhs ) : wptr( rhs.wptr ) , curr( rhs.curr ) { }

ConstStrBlobPtr& ConstStrBlobPtr::operator = ( const ConstStrBlobPtr &rhs ) {
    wptr = rhs.wptr ;
    curr = rhs.curr ;
    return *this ;
}

// 功能性函数
string &ConstStrBlobPtr::operator * () const {
    shared_ptr<vector<string>> p = check( curr , "dereference past end" ) ;
    return ( *p )[curr] ;
}

string *ConstStrBlobPtr::operator -> () const {
    return &( this->operator*() ) ;
}

ConstStrBlobPtr& ConstStrBlobPtr::operator ++ () {                                                     // 利用前置递增运算符++重载函数incr
    check( curr , "increment past end of ConstStrBlobPtr" ) ;
    ++curr ;
    return *this ;
}

ConstStrBlobPtr& ConstStrBlobPtr::operator -- () {                                                     // 利用前置递增运算符--重载函数decr
    --curr ;                                                                                 // 如果curr已经为0，递减将产生一非法下标
    check( curr , "decrement past begin of ConstStrBlobPtr" ) ;
    return *this ;
}

// 私有函数
shared_ptr<vector<string>> ConstStrBlobPtr::check( size_t i , const string &msg ) const{
    shared_ptr<vector<string>> ret = wptr.lock() ;                                        // vector存在吗？
    if( !ret )
        throw runtime_error( "unbound ConstStrBlobPtr" ) ;
    if( i >= ret->size() )
        throw out_of_range( msg ) ;
    return ret ;                                                                            // 否则，指向vector的shared_ptr
}

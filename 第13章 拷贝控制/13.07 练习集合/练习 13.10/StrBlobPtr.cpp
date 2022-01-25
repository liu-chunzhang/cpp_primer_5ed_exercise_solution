#include "StrBlobPtr.h"

StrBlobPtr::StrBlobPtr( StrBlob &a , size_t sz ) : wptr( a.data ) , curr( sz ) { }

string &StrBlobPtr::operator*() const {
    shared_ptr<vector<string>> p = check( curr , "dereference past end" ) ;
    return ( *p )[curr] ;
}

StrBlobPtr &StrBlobPtr::operator++ () {                                                     // 前缀递增：返回递增后的对象的引用
    check( curr , "increment past end of StrBlobPtr" ) ;                                     // 如果curr已经指向容器的尾后位置，则不许递增
    ++curr ;                                                                                 // 否则是可以递增的
    return *this ;
}

// 私有函数
shared_ptr<vector<string>> StrBlobPtr::check( size_t i , const string &msg ) const{
    shared_ptr<vector<string>> ret = wptr.lock() ;                                         // vector存在吗？
    if( !ret )
        throw runtime_error( "unbound StrBlobPtr" ) ;
    if( i >= ret->size() )
        throw out_of_range( msg ) ;
    return ret ;                                                                            // 否则，指向vector的shared_ptr
}

#ifndef CONSTConstStrBlobPtr_H
#define CONSTConstStrBlobPtr_H

#include "StrBlob.h"
using namespace std;

class StrBlob ;

class ConstStrBlobPtr{
    friend bool operator == ( const ConstStrBlobPtr &lhs , const ConstStrBlobPtr &rhs ) ;
    friend bool operator != ( const ConstStrBlobPtr &lhs , const ConstStrBlobPtr &rhs ) ;

    public:
        ConstStrBlobPtr() ;
        ConstStrBlobPtr( const StrBlob &a , size_t sz = 0 ) ;
        ConstStrBlobPtr( const ConstStrBlobPtr &rhs ) ;
        ConstStrBlobPtr& operator = ( const ConstStrBlobPtr &rhs ) ;
        ~ConstStrBlobPtr() = default ;

    public:
        string &operator* () const ;
        string *operator-> () const ;
        ConstStrBlobPtr& operator ++() ;                                                   // 前缀递增
        ConstStrBlobPtr& operator --() ;                                                   // 前缀递减

    private:
        shared_ptr<vector<string>> check( size_t i , const string &msg ) const ;  // 若检查成功，check返回一个指向vector的shared_ptr
        weak_ptr<vector<string>> wptr ;                                              // 保存一个weak_ptr，说明底层vector可能被销毁
        size_t curr ;                                                                 // 在数组当前的位置
};

#endif // CONSTConstStrBlobPtr_H

#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H

#include "StrBlob.h"
using namespace std;

class StrBlob ;

class StrBlobPtr{
    friend bool operator == ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) ;
    friend bool operator != ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) ;

    public:
        StrBlobPtr() ;
        StrBlobPtr( StrBlob& a , size_t sz = 0 ) ;
        string& operator * () const ;
        StrBlobPtr& operator ++() ;                                                   // 前缀递增
        StrBlobPtr& operator --() ;                                                   // 前缀递减

    private:
        shared_ptr<vector<string>> check( size_t i , const string &msg ) const ;  // 若检查成功，check返回一个指向vector的shared_ptr
        weak_ptr<vector<string>> wptr ;                                              // 保存一个weak_ptr，说明底层vector可能被销毁
        size_t curr ;                                                                 // 在数组当前的位置
};

#endif // STRBLOBPTR_H

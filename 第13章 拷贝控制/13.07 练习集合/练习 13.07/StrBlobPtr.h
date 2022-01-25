#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H

#include "StrBlob.h"
using namespace std;

class StrBlob ;

class StrBlobPtr{
    public:
        StrBlobPtr(): curr( 0 ) { }
        StrBlobPtr( StrBlob &a , size_t sz = 0 ) ;    // 为了访问data成员，等P422上代码一起输入后再编译
        string &operator*() const ;
        StrBlobPtr &operator ++() ;

    private:
        weak_ptr<vector<string>> wptr ;
        size_t curr ;
        shared_ptr<vector<string>> check( size_t i , const string &msg ) const ;
};

#endif // STRBLOBPTR_H

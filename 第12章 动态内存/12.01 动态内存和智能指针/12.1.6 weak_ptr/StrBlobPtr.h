#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H

#include "StrBlob.h"
using namespace std;

class StrBlob ;

class StrBlobPtr{
    public:
        StrBlobPtr(): curr( 0 ) { }
        StrBlobPtr( StrBlob &a , size_t sz = 0 ) ;    // Ϊ�˷���data��Ա����P422�ϴ���һ��������ٱ���
        string &operator*() const ;
        StrBlobPtr &operator ++() ;

    private:
        weak_ptr<vector<string>> wptr ;
        size_t curr ;
        shared_ptr<vector<string>> check( size_t i , const string &msg ) const ;
};

#endif // STRBLOBPTR_H

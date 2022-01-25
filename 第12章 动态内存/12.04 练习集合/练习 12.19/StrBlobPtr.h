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
        StrBlobPtr& operator ++() ;                                                   // ǰ׺����
        StrBlobPtr& operator --() ;                                                   // ǰ׺�ݼ�

    private:
        shared_ptr<vector<string>> check( size_t i , const string &msg ) const ;  // �����ɹ���check����һ��ָ��vector��shared_ptr
        weak_ptr<vector<string>> wptr ;                                              // ����һ��weak_ptr��˵���ײ�vector���ܱ�����
        size_t curr ;                                                                 // �����鵱ǰ��λ��
};

#endif // STRBLOBPTR_H

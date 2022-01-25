#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H

#include "StrBlob.h"
using namespace std;

class StrBlob ;

class StrBlobPtr{
    friend bool operator == ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) ;
    friend bool operator != ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) ;
    friend bool operator < ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) ;
    friend bool operator <= ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) ;
    friend bool operator > ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) ;
    friend bool operator >= ( const StrBlobPtr &lhs , const StrBlobPtr &rhs ) ;
    friend StrBlobPtr operator + ( const StrBlobPtr &rhs , size_t n ) ;

    public:
        StrBlobPtr() ;
        StrBlobPtr( StrBlob &a , size_t sz = 0 ) ;
        StrBlobPtr( const StrBlob &a , size_t sz = 0 ) ;
        StrBlobPtr( const StrBlobPtr &rhs ) ;
        StrBlobPtr& operator = ( const StrBlobPtr &rhs ) ;

    public:
        string& operator * () const ;
        StrBlobPtr& operator ++() ;                                                   // ǰ׺����
        StrBlobPtr& operator --() ;                                                   // ǰ׺�ݼ�
        StrBlobPtr& operator +=( size_t n ) ;

    private:
        shared_ptr<vector<string>> check( size_t i , const string &msg ) const ;  // �����ɹ���check����һ��ָ��vector��shared_ptr
        weak_ptr<vector<string>> wptr ;                                              // ����һ��weak_ptr��˵���ײ�vector���ܱ�����
        size_t curr ;                                                                 // �����鵱ǰ��λ��
};

#endif // STRBLOBPTR_H

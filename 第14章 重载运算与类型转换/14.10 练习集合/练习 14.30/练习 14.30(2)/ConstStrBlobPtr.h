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
        ConstStrBlobPtr& operator ++() ;                                                   // ǰ׺����
        ConstStrBlobPtr& operator --() ;                                                   // ǰ׺�ݼ�

    private:
        shared_ptr<vector<string>> check( size_t i , const string &msg ) const ;  // �����ɹ���check����һ��ָ��vector��shared_ptr
        weak_ptr<vector<string>> wptr ;                                              // ����һ��weak_ptr��˵���ײ�vector���ܱ�����
        size_t curr ;                                                                 // �����鵱ǰ��λ��
};

#endif // CONSTConstStrBlobPtr_H

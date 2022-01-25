#ifndef STRBLOB_H
#define STRBLOB_H

#include <iostream>
#include <vector>
#include <memory>
#include "StrBlobPtr.h"
using namespace std;

class StrBlobPtr ;

class StrBlob{
    friend class StrBlobPtr ;

    public:
        typedef vector<string>::size_type size_type ;

    public:
        StrBlob() ;
        StrBlob( initializer_list<string> il ) ;
        StrBlob( const StrBlob &strblob ) ;
        StrBlob operator = ( const StrBlob &strblob ) ;
        ~StrBlob() = default ;

    public:
        size_type size() const ;
        bool empty() const ;
        void push_back( const string &t ) ;
        void pop_back() ;
        string &front() ;
        const string &front() const ;                                     // �������������������һ���޸ģ���Ϊ��const�汾��Ϊ��ǰ��һ�£�����
        string &back() ;                                                   // ��������Ҳ��Ϊ��const�汾
        const string &back() const ;
        StrBlobPtr begin() ;
        StrBlobPtr end() ;
        bool unique() const ;                                              // ���⣬����shared_ptr�Ĳ�������������в���unique��use_count
        size_t use_count() const ;

    private:
        shared_ptr<vector<string>> data ;
        void check( size_type i , const string &msg ) const ;
};

#endif // STRBLOB_H

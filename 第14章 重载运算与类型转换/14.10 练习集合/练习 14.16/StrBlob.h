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

    friend bool operator == ( const StrBlob &strblob1 , const StrBlob &strblob2 ) ;
    friend bool operator != ( const StrBlob &strblob1 , const StrBlob &strblob2 ) ;

    public:
        typedef vector<string>::size_type size_type ;

    public:
        StrBlob() ;
        StrBlob( initializer_list<string> ilst ) ;
        StrBlob( vector<string> *svec ) ;
        StrBlob( const StrBlob &strblob ) ;
        StrBlob operator = ( const StrBlob &strblob ) ;
        ~StrBlob() = default ;

    public:
        size_type size() const ;
        bool empty() const ;
        void push_back( const string &t ) ;
        void pop_back() ;
        string &front() ;
        const string &front() const ;                                     // 按照题意在这里进行了一定修改，改为了const版本，为了前后一致，所以
        string &back() ;                                                   // 返回类型也改为了const版本
        const string &back() const ;
        StrBlobPtr begin() ;
        StrBlobPtr cbegin() const ;
        StrBlobPtr end() ;
        StrBlobPtr cend() const ;
        bool unique() const ;                                              // 此外，根据shared_ptr的操作定义了其独有操作unique和use_count
        size_t use_count() const ;

    private:
        shared_ptr<vector<string>> data ;
        void check( size_type i , const string &msg ) const ;
};

#endif // STRBLOB_H

#ifndef STRBLOB_H
#define STRBLOB_H

#include <iostream>
#include <memory>
#include <vector>
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

    public:
        size_type size() const ;
        bool empty() const ;
        void push_back( const string &t ) ;
        void pop_back() ;
        string &front() ;
        string &back() ;
        StrBlobPtr begin() ;
        StrBlobPtr end() ;

    private:
        shared_ptr<vector<string>> data ;
        void check( size_type i , const string &msg ) const ;
};

#endif // STRBLOB_H

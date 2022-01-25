#ifndef STRBLOB_H
#define STRBLOB_H

#include <iostream>
#include <vector>
#include <memory>                                                         // <memory>头文件是使用shared_ptr必不可少的
using namespace std;

class StrBlob {
    public:
        typedef vector<string>::size_type size_type ;

    public:
        StrBlob() ;                                                       // 构造函数
        StrBlob( initializer_list<string> il ) ;

    public:
        size_type size() const ;
        bool empty() const ;
        void push_back( const string &t ) ;
        void pop_back() ;
        string &front() ;
        string &back() ;

    private:
        shared_ptr<vector<string>> data ;
        void check( size_type i , const string &msg ) const ;
};

#endif // STRBLOB_H

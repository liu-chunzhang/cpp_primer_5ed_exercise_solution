#ifndef STRBLOB_H
#define STRBLOB_H

#include <iostream>
#include <vector>
#include <memory>                                                         // <memory>ͷ�ļ���ʹ��shared_ptr�ز����ٵ�
using namespace std;

class StrBlob {
    public:
        typedef vector<string>::size_type size_type ;

    public:
        StrBlob() ;                                                       // ���캯��
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

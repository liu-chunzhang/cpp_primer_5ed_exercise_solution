#ifndef STRBLOB_H                                                        // 个人新版本虽然很大程度上搬过来源代码，但和参考答案很不一样：
#define STRBLOB_H                                                        // 1.不要求有StrBlobPtr，打印循环用下标执行（并检查合法性）；
                                                                         // 2.删除了一些对本题没用的辅助函数
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
        StrBlob( initializer_list<string> ilst ) ;
        StrBlob( vector<string> *svec ) ;
        StrBlob( const StrBlob &strblob ) ;                                      // 拷贝构造函数
        StrBlob& operator = ( const StrBlob &strblob ) ;                        // 拷贝赋值运算符
        ~StrBlob() = default ;

    public:
        size_type size() const ;
        bool empty() const ;
        void push_back( const string &t ) ;
        void pop_back() ;
        string &front() ;
        const string &front() const ;
        string &back() ;
        const string &back() const ;
        string &print( size_t u ) ;

    public:
        StrBlobPtr begin() ;
        StrBlobPtr cbegin() const ;
        StrBlobPtr end() ;
        StrBlobPtr cend() const ;

    private:
        shared_ptr<vector<string>> data ;
        void check( size_type i , const string &msg ) const ;
};

#endif // STRBLOB_H

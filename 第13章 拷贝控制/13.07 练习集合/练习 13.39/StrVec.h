#ifndef STRVEC_H
#define STRVEC_H

#include <iostream>
#include <memory>
using namespace std;

class StrVec{
    public:
        StrVec() ;                                                                        // allocator成员进行默认初始化
        StrVec( const StrVec &s ) ;                                                       // 拷贝构造函数
        StrVec &operator = ( const StrVec &s ) ;                                         // 拷贝赋值运算符
        ~StrVec();                                                                        // 析构函数

    public:
        void push_back( const string &s ) ;
        void pop_back() ;
        size_t size() const ;                                                            // 返回真正在使用的元素数目
        size_t capacity() const ;                                                        // 返回可以保存的元素数量
        void reserve( size_t num ) ;
        void resize( size_t num ) ;
        void resize( size_t num , const string &s ) ;

    public:
        string *begin() const ;
        string *end() const ;

    private:
        string *elements ;                                                               // 指向数组首元的指针
        string *first_free ;                                                             // 指向数组第一个控制元素的指针
        string *cap ;                                                                    // 指向数组尾后位置的指针
        static allocator<string> alloc ;                                               // 分配元素

    private:
        void chk_n_alloc() ;                                                              // 工具函数，被拷贝构造函数、赋值运算符和析构函
        pair<string*,string*> alloc_n_copy( const string *b , const string *e ) ;     // 数使用
        void free() ;                                                                    // 销毁元素并释放内存
        void reallocate() ;                                                              // 获得更多内存并拷贝已有元素
};

#endif // STRVEC_H

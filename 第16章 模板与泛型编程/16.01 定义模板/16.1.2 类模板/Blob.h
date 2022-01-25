#ifndef BLOB_H
#define BLOB_H

#include <initializer_list>                 // 模板类成员函数的定义问题：函数实现不能定义在源文件中，一定要在头文件中！原因有：
#include <iostream>                         // 1.因为模板类的成员函数的定义，是一种不完整的定义；
#include <memory>                           // 2.由于编译器不知道模板参数的具体类型，无法为其成员函数生成代码；
#include <vector>                           // 3.编译器在成员函数的调用处，才最终知道如何生成代码．
#include "BlobPtr.h"                        // 基于以上的原因，所以模板类的源文件以后统统都不再定义，直接写在头文件里
using namespace std;

template <typename T> class BlobPtr ;                   // 前置声明，在Blob中声明友元所需要的
template <typename T> class Blob ;                      // 因为运算符==需要，故在这里声明
template <typename T> bool operator ==( const Blob<T> &lhs , const Blob<T> &rhs ) ;

// Blob类
template <typename T> class Blob {                                    // 每个Blob实例将访问权限授予用相同类型实例化的BlobPtr和相等运算符
    friend class BlobPtr<T> ;
    friend bool operator == <T>( const Blob<T> &lhs , const Blob<T> &rhs ) ;

    public:
        typedef T value_type ;
        typedef typename vector<T>::size_type size_type ;

    public:
        Blob() ;
        Blob( std::initializer_list<T> ilst ) ;
        virtual ~Blob() = default ;

    public:
        size_type size() const ;                                                               // Blob中元素的数目
        bool empty() const ;
        void push_back( const T &t ) ;                                                         // 添加和删除元素
        void push_back( T &&t ) ;                                                              // 移动版本
        void pop_back() ;
        T& front() ;                                                                            // 元素访问
        T& back() ;
        T& operator[]( size_type i ) ;

    private:
        shared_ptr<vector<T>> data ;

    private:
        void check( size_type i , const string &msg ) const ;                                        // 操作合法性检查的函数
};

// 友元函数
template <typename T>
bool operator == ( const Blob<T> &lhs , const Blob<T> &rhs ) {
    return lhs.data == rhs.data ;                                                   // 只是判断指针是否相同，而非内容vector<T>是否相等
}

// 构造函数与析构函数
template <typename T>
Blob<T>::Blob() : data( make_shared<vector<T>>() ) { }

template <typename T>
Blob<T>::Blob( initializer_list<T> ilst ) : data( make_shared<vector<T>>( ilst ) ) { }

// 共有功能性函数
template <typename T>
typename Blob<T>::size_type Blob<T>::size() const {
    return data->size() ;
}

template <typename T>
bool Blob<T>::empty() const {
    return data->empty() ;
}

template <typename T>
void Blob<T>::push_back( const T &t ) {
    data->push_back( t ) ;
}

template <typename T>
void Blob<T>::push_back( T &&t ) {
    data->push_back( std::move( t ) ) ;
}

template <typename T>
void Blob<T>::pop_back() {
    check( 0 , "pop_back on empty Blob" ) ;
    data->pop_back() ;
}

template <typename T>
T& Blob<T>::front() {
    check( 0 , "front on empty Blob" ) ;
    return data->front() ;
}

template <typename T>
T& Blob<T>::back() {
    check( 0 , "back on empty Blob" ) ;
    return data->back() ;
}

template <typename T>
T& Blob<T>::operator[]( size_type i ) {
    check( i , "subscript out of range") ;                             // 如果i太大，check会抛出异常，阻止访问一个不存在的元素
    return ( *data )[ i ] ;
}

// 私有检查函数
template <typename T>
void Blob<T>::check( size_type i , const string &msg ) const {      // 若data[i]无效，则抛出msg
    if( i >= data->size() )
        throw out_of_range( msg ) ;
}

#endif // BLOB_H

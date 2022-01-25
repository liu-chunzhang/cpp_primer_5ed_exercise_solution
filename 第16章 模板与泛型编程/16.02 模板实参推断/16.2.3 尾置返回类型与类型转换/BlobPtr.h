#ifndef BLOBPTR_H
#define BLOBPTR_H

#include "Blob.h"
using namespace std;

template <typename T> class Blob ;

template <typename T> class BlobPtr {
    public:
        BlobPtr() ;
        BlobPtr( Blob<T> &a , size_t sz = 0 ) ;

    public:
        T& operator *() const ;
        BlobPtr& operator++() ;                                                    // 前置运算符，返回类型与BlobPtr<T>&等效。
        BlobPtr& operator--() ;                                                    // 前置运算符，返回类型与BlobPtr<T>&等效。
        BlobPtr operator++( int ) ;                                                // 后置运算符，返回一个指针，而非是如前置运算符的引用
        BlobPtr operator--( int ) ;                                                // 后置运算符，返回一个指针，而非是如前置运算符的引用

    private:
        weak_ptr<vector<T>> wptr ;                                                // 保存一个weak_ptr，表示底层vector可能被销毁
        size_t curr ;                                                              // 数组中的当前位置

    private:
        shared_ptr<vector<T>> check( size_t i , const string &msg ) const ;     // 若检查成功，check返回一个指向vector的shared_ptr
};

// BlobPtr<T>类函数定义
// 构造函数与析构函数
template <typename T>
BlobPtr<T>::BlobPtr() : curr( 0 ) { }

template <typename T>
BlobPtr<T>::BlobPtr( Blob<T> &a , size_t sz ) : wptr( a.data ) , curr( sz ) { }

// 功能性函数
template <typename T>
T& BlobPtr<T>::operator *() const {
    shared_ptr<vector<T>> t = check( curr , "dereference past end" ) ;
    return ( *t )[ curr ] ;                                                         // ( *t )为本对象指向的vector
}

template <typename T>
BlobPtr<T>& BlobPtr<T>::operator ++() {
    check( curr , "increment past end of BlobPtr" ) ;
    ++curr ;
    return *this ;
}

template <typename T>
BlobPtr<T>& BlobPtr<T>::operator --() {
    --curr ;
    check( -1 , "decrement past end of BlobPtr" ) ;
    return *this ;
}

template <typename T>
BlobPtr<T> BlobPtr<T>::operator++( int ) {         // 此处无需检查，调用前置递增自会进行检查。下同
    BlobPtr ret = *this ;                           // 保存当前值
    ++*this ;                                       // 推进一个元素，前置++检查递增是否合法
    return ret ;                                    // 返回保存的状态
}

template <typename T>
BlobPtr<T> BlobPtr<T>::operator--( int ) {
    BlobPtr ret = *this ;
    --*this ;
    return ret ;
}

template <typename T>
shared_ptr<vector<T>> BlobPtr<T>::check( size_t i , const string &msg ) const {
	shared_ptr<vector<T>> ret = wptr.lock();
	if( !ret )
		throw runtime_error( "unbound BlobPtr" ) ;
	if( i >= ret->size() )
		throw out_of_range( msg ) ;
	return ret ;
}

#endif // BLOBPTR_H

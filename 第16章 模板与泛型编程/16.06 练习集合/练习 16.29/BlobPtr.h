#ifndef BLOBPTR_H
#define BLOBPTR_H

#include <iostream>
#include <memory>
#include <vector>
using namespace std;

template <typename T> class BlobPtr ;
template <typename T> class Blob ;                                                    // 这声明的存在是为了给BlobPtr的构造函数提供引用
template <typename T> bool operator == ( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) ;
template <typename T> bool operator != ( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) ;
template <typename T> bool operator < ( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) ;
template <typename T> bool operator <= ( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) ;
template <typename T> bool operator > ( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) ;
template <typename T> bool operator >= ( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) ;

template <typename T> class BlobPtr {
    friend bool operator ==<T> ( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) ;
    friend bool operator !=<T> ( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) ;
    friend bool operator < <T>( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) ;
    friend bool operator <=<T> ( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) ;
    friend bool operator > <T>( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) ;
    friend bool operator >=<T> ( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) ;

    public:
        BlobPtr() ;
        BlobPtr( Blob<T> &a , size_t sz = 0 ) ;

    public:
        T& operator *() const ;
        T* operator ->() const ;
        BlobPtr& operator++() ;
        BlobPtr& operator--() ;
        BlobPtr operator++( int ) ;
        BlobPtr operator--( int ) ;

    private:
        weak_ptr<vector<T>> wptr ;
        size_t curr ;

    private:
        shared_ptr<vector<T>> check( size_t i , const string &msg ) const ;
};

// 友元函数
template <typename T>
bool operator ==( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) {
    shared_ptr<vector<T>> l = lhs.wptr.lock() , r = rhs.wptr.lock() ;
    if( l == r )
        return ( !r || lhs.curr == rhs.curr ) ;
    else
        return false ;           // 关心的是wptr关联的shared_ptr的内部指针指向对象
}

template <typename T>
bool operator !=( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) {
    return !( lhs == rhs ) ;
}

template <typename T>
bool operator < ( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) {
    shared_ptr<vector<T>> l = lhs.wptr.lock() , r = rhs.wptr.lock() ;
    if( l == r )
        return lhs.curr < rhs.curr ;
    else
        return false ;
}

template <typename T>
bool operator <= ( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) {
    return lhs == rhs || lhs < rhs ;
}

template <typename T>
bool operator > ( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) {
    shared_ptr<vector<T>> l = lhs.wptr.lock() , r = rhs.wptr.lock() ;
    if( l == r )
        return lhs.curr > rhs.curr ;
    else
        return false ;
}

template <typename T>
bool operator >= ( const BlobPtr<T> &lhs , const BlobPtr<T> &rhs ) {
    return lhs == rhs || lhs > rhs ;
}

// 构造函数与析构函数
template <typename T>
BlobPtr<T>::BlobPtr() : curr( 0 ) { }

template <typename T>
BlobPtr<T>::BlobPtr( Blob<T> &a , size_t sz ) : wptr( a.data ) , curr( sz ) { }

// 功能性函数
template <typename T>
T& BlobPtr<T>::operator *() const {
    shared_ptr<vector<T>> t = check( curr , "dereference past end" ) ;
    return ( *t )[ curr ] ;
}

template <typename T>
T* BlobPtr<T>::operator ->() const {
    return &this->operator*() ;
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
BlobPtr<T> BlobPtr<T>::operator++( int ) {
    BlobPtr ret = *this ;
    ++*this ;
    return ret ;
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

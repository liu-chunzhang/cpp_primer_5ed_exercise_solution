#ifndef SHARED_PTR_H
#define SHARED_PTR_H

#include <functional>
#include <iostream>
using namespace std;

template <typename T> class Shared_ptr ;
template <typename T> void swap( Shared_ptr<T> &lhs , Shared_ptr<T> &rhs ) ;

template <typename T>
class Shared_ptr{
    friend void swap<T>( Shared_ptr &lhs , Shared_ptr &rhs ) ;

    public:
        using DelFuncPtr = void(*)(T*) ;

    public:
        Shared_ptr( T *tp = nullptr , DelFuncPtr del = nullptr ) ;
        Shared_ptr( const Shared_ptr &t ) ;
        Shared_ptr& operator = ( const Shared_ptr &t ) ;
        Shared_ptr( Shared_ptr &&t ) noexcept ;
        Shared_ptr& operator = ( Shared_ptr &&t ) noexcept ;
        ~Shared_ptr() ;

    public:
        T& operator *() ;
        T* operator ->() ;
        T* get() ;
        explicit operator bool() const ;
        void swap( Shared_ptr &t ) ;
        bool unique() const ;
        size_t use_count() const ;
        void reset() ;
        void reset( T *t ) ;
        void reset( T *t , DelFuncPtr del ) ;

    private:
        T *pointer = nullptr ;
        size_t *useCount = nullptr ;
        DelFuncPtr deleter = nullptr ;
        void destroy() ;
};

// 友元函数
template <typename T>
void swap( Shared_ptr<T> &lhs , Shared_ptr<T> &rhs ) {
    using std::swap ;
    swap( lhs.pointer , rhs.pointer ) ;
    swap( lhs.useCount , rhs.useCount ) ;
    swap( lhs.deleter , rhs.deleter ) ;
}

// 构造函数与析构函数
template <typename T>
Shared_ptr<T>::Shared_ptr( T *tp , DelFuncPtr del ) : pointer( tp ) , useCount( new size_t( tp != nullptr ) ) , deleter( del ) { }

template <typename T>
Shared_ptr<T>::Shared_ptr( const Shared_ptr &t ) : pointer( t.pointer ) , useCount( t.useCount ) , deleter( t.deleter ) {
    ++*useCount ;
}

template <typename T>
Shared_ptr<T>& Shared_ptr<T>::operator = ( const Shared_ptr &t ) {
    ++*t.useCount ;
    destroy() ;
    pointer = t.pointer ;
    useCount = t.useCount ;
    deleter = t.deleter ;
    return *this ;
}

template <typename T>
Shared_ptr<T>::Shared_ptr( Shared_ptr &&t ) noexcept : pointer( std::move( t.pointer ) ) , useCount( std::move( t.useCount ) ) , deleter( std::move( t.deleter ) ) {
    t.pointer = nullptr ;
    t.useCount = nullptr ;
}

template <typename T>
Shared_ptr<T>& Shared_ptr<T>::operator = ( Shared_ptr &&t ) noexcept {
    if( this != &t ){
        destroy() ;
        pointer = std::move( t.pointer ) ;
        useCount = std::move( t.useCount ) ;
        deleter = std::move( t.deleter ) ;
        t.pointer = nullptr ;
        t.useCount = nullptr ;
    }
    return *this ;
}

template <typename T>
Shared_ptr<T>::~Shared_ptr() {
    destroy() ;
}

template <typename T>
T& Shared_ptr<T>::operator *() {
    return *pointer ;
}

template <typename T>
T* Shared_ptr<T>::operator ->() {
    return &*pointer ;
}

template <typename T>
T* Shared_ptr<T>::get() {
    return pointer ;
}

template <typename T>
Shared_ptr<T>::operator bool() const {
    return pointer ? true : false ;
}

template <typename T>
void Shared_ptr<T>::swap( Shared_ptr &t ) {
    using std::swap ;
    swap( pointer , t.pointer ) ;
    swap( useCount , t.useCount ) ;
    swap( deleter , t.deleter ) ;
}

template <typename T>
bool Shared_ptr<T>::unique() const {
    return *useCount == 1 ;
}

template <typename T>
size_t Shared_ptr<T>::use_count() const {
    return *useCount ;
}

template <typename T>
void Shared_ptr<T>::reset() {
    destroy() ;
}

template <typename T>
void Shared_ptr<T>::reset( T *t ) {
    if( this != &t ){
        destroy() ;
        pointer = t ;
        useCount = new size_t( 1 ) ;
    }
}

template <typename T>
void Shared_ptr<T>::reset( T *t , DelFuncPtr del ) {
    if( this != &t ){
        destroy() ;
        pointer = t ;
        useCount = new size_t( 1 ) ;
        deleter = del ;
    }
}

// 私有函数
template <typename T>
void Shared_ptr<T>::destroy() {
    if( !pointer )
        return ;
    if( --*useCount == 0 ){
        deleter ? deleter( pointer ) : delete pointer ;
        delete useCount ;
        pointer = nullptr ;
        useCount = nullptr ;
    }
}

#endif // SHARED_PTR_H

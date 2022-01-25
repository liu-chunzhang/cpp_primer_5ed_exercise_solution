#ifndef UNIQUE_PTR_H
#define UNIQUE_PTR_H

#include "DebugDelete.h"

template <typename T,typename D> class Unique_ptr ;
template <typename T,typename D> void swap( Unique_ptr<T,D> &lhs, Unique_ptr<T,D> &rhs ) ;

template <typename T,typename D = DebugDelete>
class Unique_ptr {
    friend void swap<T,D>( Unique_ptr &lhs, Unique_ptr &rhs ) ;

    public:
        Unique_ptr( T *t = nullptr , const D &del = DebugDelete() ) ;
        Unique_ptr( const Unique_ptr & ) = delete ;
        Unique_ptr& operator = ( const Unique_ptr & ) = delete ;
        Unique_ptr( Unique_ptr &&up ) noexcept ;
        Unique_ptr& operator = ( Unique_ptr &&up ) noexcept ;
        Unique_ptr& operator = ( nullptr_t ) ;                                      // nullptr_t是空指针常量类型。这个量只能转化为一个值nullptr
        ~Unique_ptr();

    public:
        explicit operator bool() const ;
        T* release() ;
        void reset( T *t = nullptr ) ;
        void reset( nullptr_t ) ;
        void swap( Unique_ptr &t ) ;

    public:
        T operator * () ;
        T* operator -> () ;
        T* get() ;
        D& getDeleter() ;

    private:
        T *pointer = nullptr ;
        D deleter ;
        void destroy() ;
};

// 友元函数
template <typename T, typename D>
void swap( Unique_ptr<T,D> &lhs, Unique_ptr<T,D> &rhs ) {
    using std::swap ;
    swap( lhs.pointer , rhs.pointer ) ;
    swap( lhs.deleter , rhs.deleter ) ;
}

// 构造函数与析构函数
template <typename T, typename D>
Unique_ptr<T,D>::Unique_ptr( T *t , const D &del ) : pointer( t ) , deleter( del ) { }

template <typename T, typename D>
Unique_ptr<T,D>::Unique_ptr( Unique_ptr &&up ) noexcept : pointer( std::move( up.pointer ) ) , deleter( std::move( up.deleter ) ) {
    up.pointer = nullptr ;
}

template <typename T, typename D>
Unique_ptr<T,D>& Unique_ptr<T,D>::operator = ( Unique_ptr &&up ) noexcept {
    if( this != &up ){
        destroy() ;
        pointer = std::move( up.pointer ) ;
        deleter = std::move( up.deleter ) ;
        up.pointer = nullptr ;
    }
    return *this ;
}

template <typename T,typename D>
Unique_ptr<T,D>& Unique_ptr<T,D>::operator = ( nullptr_t ) {
    destroy() ;
    pointer = nullptr ;
}

template <typename T,typename D>
Unique_ptr<T,D>::~Unique_ptr() {
    destroy() ;
}

template <typename T,typename D>
Unique_ptr<T,D>::operator bool() const {
    return pointer ? true : false ;
}

template <typename T,typename D>
T* Unique_ptr<T,D>::release() {
    T *temp = pointer ;
    pointer = nullptr ;
    return temp ;
}

template <typename T,typename D>
void Unique_ptr<T,D>::reset( T *t ) {
    deleter( pointer ) ;
    pointer = t ;
}

template <typename T,typename D>
void Unique_ptr<T,D>::reset( nullptr_t ) {
    pointer = nullptr ;
}

template <typename T,typename D>
void Unique_ptr<T,D>::swap( Unique_ptr &t ) {
    using std::swap ;
    swap( pointer , t.pointer ) ;
    swap( deleter , t.deleter ) ;
}

template <typename T,typename D>
T Unique_ptr<T,D>::operator * () {
    return *pointer ;
}

template <typename T,typename D>
T* Unique_ptr<T,D>::operator -> () {
    return &*pointer ;
}

template <typename T,typename D>
T* Unique_ptr<T,D>::get() {
    return pointer ;
}

template <typename T,typename D>
D& Unique_ptr<T,D>::getDeleter() {
    return deleter ;
}

// 私有检查合法性和析构函数执行部分
template <typename T, typename D>
void Unique_ptr<T,D>::destroy() {
    deleter( pointer ) ;
}

#endif // UNIQUE_PTR_H

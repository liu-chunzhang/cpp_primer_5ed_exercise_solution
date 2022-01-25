#ifndef BLOB_H
#define BLOB_H

#include "BlobPtr.h"
#include "Shared_ptr.h"

template <typename T> class BlobPtr ;
template <typename T> class Blob ;
template <typename T> bool operator == ( const Blob<T> &lhs , const Blob<T> &rhs ) ;
template <typename T> bool operator != ( const Blob<T> &lhs , const Blob<T> &rhs ) ;

template <typename T> class Blob {
    friend class BlobPtr<T> ;
    friend bool operator ==<T> ( const Blob<T> &lhs , const Blob<T> &rhs ) ;
    friend bool operator !=<T> ( const Blob<T> &lhs , const Blob<T> &rhs ) ;

    public:
        typedef T value_type ;
        typedef typename vector<T>::size_type size_type ;

    public:
        Blob() ;
        Blob( initializer_list<T> lst ) ;
        ~Blob() = default ;

    public:
        size_t size() const ;
        size_t capacity() const ;
        bool empty() const ;
        void push_back( const T &t ) ;
        void push_back( T &&t ) ;
        void pop_back() ;
        T& front() ;
        const T& front() const ;
        T& back() ;
        const T& back() const ;
        T& operator[]( size_type i ) ;
        T& at( size_type i ) ;

    public:
        BlobPtr<T> begin() ;
        BlobPtr<T> cbegin() const ;
        BlobPtr<T> end() ;
        BlobPtr<T> cend() const ;

    private:
        Shared_ptr<vector<T>> data ;

    private:
        void check( size_type i , const string &msg ) const ;
};

// 友元函数
template <typename T>
bool operator == ( const Blob<T> &lhs , const Blob<T> &rhs ) {
    return lhs.data == rhs.data ;
}

template <typename T>
bool operator != ( const Blob<T> &lhs , const Blob<T> &rhs ) {
    return !( lhs == rhs ) ;
}

// 构造函数与析构函数
template <typename T>
Blob<T>::Blob() : data( new vector<T>() ) { }

template <typename T>
Blob<T>::Blob( initializer_list<T> lst ) : data( new vector<T>( lst ) ) { }

// 功能性函数
template <typename T>
size_t Blob<T>::size() const {
    return data->size() ;
}

template <typename T>
size_t Blob<T>::capacity() const {
    return data->capacity() ;
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
const T& Blob<T>::front() const {
    check( 0 , "front on empty Blob" ) ;
    return data->front() ;
}

template <typename T>
T& Blob<T>::back() {
    check( 0 , "back on empty Blob" ) ;
    return data->back() ;
}

template <typename T>
const T& Blob<T>::back() const {
    check( 0 , "back on empty Blob" ) ;
    return data->back() ;
}

template <typename T>
T& Blob<T>::operator[]( size_type i ) {
    check( i , "subscript out of range") ;
    return ( *data )[ i ] ;
}

template <typename T>
T& Blob<T>::at( size_type i ){
    return ( *this )[ i ] ;                                             // 反正[]都已经检查过安全了，直接调用下标运算符就行了
}

template <typename T>
BlobPtr<T> Blob<T>::begin() {
    return BlobPtr<T>( *this ) ;
}

template <typename T>
BlobPtr<T> Blob<T>::cbegin() const {
    return BlobPtr<T>( *this ) ;
}

template <typename T>
BlobPtr<T> Blob<T>::end() {
    return BlobPtr<T>( *this , size() ) ;
}

template <typename T>
BlobPtr<T> Blob<T>::cend() const {
    return BlobPtr<T>( *this , size() ) ;
}

template <typename T>
void Blob<T>::check( size_type i , const string &msg ) const {
    if( i >= data->size() )
        throw out_of_range( msg ) ;
}

#endif // BLOB_H

#ifndef VEC_H
#define VEC_H

#include <memory>
#include <iostream>
using namespace std;

template <typename T> class Vec ;
template <typename T> bool operator == ( const Vec<T> &lhs , const Vec<T> &rhs ) ;
template <typename T> bool operator != ( const Vec<T> &lhs , const Vec<T> &rhs ) ;
template <typename T> bool operator < ( const Vec<T> &lhs , const Vec<T> &rhs ) ;
template <typename T> bool operator <= ( const Vec<T> &lhs , const Vec<T> &rhs ) ;
template <typename T> bool operator > ( const Vec<T> &lhs , const Vec<T> &rhs ) ;
template <typename T> bool operator >= ( const Vec<T> &lhs , const Vec<T> &rhs ) ;

template <typename T>
class Vec {
    friend bool operator == <T> ( const Vec &lhs , const Vec &rhs ) ;
    friend bool operator != <T> ( const Vec &lhs , const Vec &rhs ) ;
    friend bool operator < <T>  ( const Vec &lhs , const Vec &rhs ) ;
    friend bool operator <= <T> ( const Vec &lhs , const Vec &rhs ) ;
    friend bool operator > <T>  ( const Vec &lhs , const Vec &rhs ) ;
    friend bool operator >= <T> ( const Vec &lhs , const Vec &rhs ) ;

    public:
        Vec() = default ;
        Vec( initializer_list<T> tlst ) ;
        Vec( const Vec &vec ) ;
        Vec& operator = ( const Vec &vec ) ;
        Vec( Vec &&vec ) noexcept ;
        Vec& operator = ( Vec &&vec ) noexcept ;
        ~Vec() noexcept ;

    public:
        size_t size() const ;
        size_t capacity() const ;

    public:
        void push_back( const T &t ) ;
        void push_back( T &&t ) ;
        template<class... Args> void emplace_back( Args &&... args ) ;
        void pop_back() ;

    public:
        void reserve( size_t num ) ;
        void resize( size_t num , const string &s ) ;

    public:
        T& front() ;
        const T& front() const ;
        T& back() ;
        const T& back() const ;
        T& operator[]( size_t num ) ;
        T& at( size_t num ) ;

    public:
        T* begin() const ;
        T* end() const ;

    private:
        static allocator<T> alloc ;
        string* first_element = nullptr ;
        string* first_free = nullptr ;
        string* last_element = nullptr ;

    private:
        void check() ;
        pair<T*,T*> alloc_n_copy( const T *b , const T *e ) ;
        void free() ;
        void reallocate() ;

};

template <typename T> allocator<T> Vec<T>::alloc ;

// 友元函数
template <typename T>
bool operator == ( const Vec<T> &lhs , const Vec<T> &rhs ) {
    if( lhs.size() != rhs.size() )
        return false ;
    T *temp1 = lhs.begin() , *temp2 = rhs.begin() ;
    while( temp1 != lhs.end() )
        if( *temp1++ != *temp2++ )
            return false ;
    return true ;
}

template <typename T>
bool operator != ( const Vec<T> &lhs , const Vec<T> &rhs ) {
    return !( lhs == rhs ) ;
}

template <typename T>
bool operator < ( const Vec<T> &lhs , const Vec<T> &rhs ) {
    T *start1 = lhs.begin() , *start2 = rhs.begin() ;
    while( start1 != lhs.end() && start2 != rhs.end() ){
        if( *start1 > *start2 )
            return false ;
        else if( *start1 < *start2 )
                return true ;
        ++start1 ;
        ++start2 ;
    }
    return start1 == lhs.end() && start2 != rhs.end() ? true : false ;
}

template <typename T>
bool operator <= ( const Vec<T> &lhs , const Vec<T> &rhs ) {
    return lhs == rhs || lhs < rhs ;
}

template <typename T>
bool operator > ( const Vec<T> &lhs , const Vec<T> &rhs ) {
    T *start1 = lhs.begin() , *start2 = rhs.begin() ;
    while( start1 != lhs.end() && start2 != rhs.end() ){
        if( *start1 > *start2 )
            return true ;
        else if( *start1 < *start2 )
                return false ;
        ++start1 ;
        ++start2 ;
    }
    return start1 != lhs.end() && start2 == rhs.end() ? true : false ;
}

template <typename T>
bool operator >= ( const Vec<T> &lhs , const Vec<T> &rhs ) {
    return lhs == rhs || lhs > rhs ;
}

// 构造函数和析构函数系列
template <typename T>
Vec<T>::Vec( const Vec &vec ) {
    pair<T*,T*> temp = alloc_n_copy( vec.begin() , vec.end() ) ;
    first_element = temp.first ;
    first_free = last_element = temp.second ;
}

template <typename T>
Vec<T>::Vec( initializer_list<T> tlst ) {
    pair<T*,T*> temp = alloc_n_copy( tlst.begin() , tlst.end() ) ;
    first_element = temp.first ;
    first_free = last_element = temp.second ;
}

template <typename T>
Vec<T>& Vec<T>::operator = ( const Vec &vec ) {
    pair<T*,T*> temp = alloc_n_copy( vec.begin() , vec.end() ) ;
    free() ;
    first_element = temp.first ;
    first_free = last_element = temp.second ;
    return *this ;
}

template <typename T>
Vec<T>::Vec( Vec &&vec ) noexcept : first_element( vec.first_element ) , first_free( vec.first_free ) , last_element( vec.last_element ) {
        vec.first_element = vec.first_free = vec.last_element = nullptr ;
}

template <typename T>
Vec<T>& Vec<T>::operator = ( Vec &&vec ) noexcept {
    if( this != &vec ){
        free() ;
        first_element = vec.first_element ;
        first_free = vec.first_free ;
        last_element = vec.last_free ;
        vec.first_element = vec.first_free = vec.last_element = nullptr ;
    }
    return *this ;
}

template <typename T>
Vec<T>::~Vec() noexcept {
    free() ;
}

// 公有功能性函数
template <typename T>
size_t Vec<T>::size() const {
    return first_free - first_element ;
}

template <typename T>
size_t Vec<T>::capacity() const {
    return last_element - first_element ;
}

template <typename T>
void Vec<T>::push_back( const T &t ) {
    check() ;
    alloc.construct( first_free++ , t ) ;
}

template <typename T>
void Vec<T>::push_back( T &&t ) {
    check() ;
    alloc.construct( first_free++ , std::move( t ) ) ;
}

template <typename T> template <typename... Args>
void Vec<T>::emplace_back( Args&&... args ) {
    check() ;
    alloc.construct( first_free++ , std::forward<Args>( args )... ) ;       // std::forward在教程P614页才提到
}

template <typename T>
void Vec<T>::pop_back() {
    --first_free ;
    alloc.destroy( first_free ) ;
}

template <typename T>
void Vec<T>::reserve( size_t num ) {
    if( capacity() < num ){
        T *newdata = alloc.allocate( num ) , *dest = newdata , *elem = first_element ;
        for( size_t i = 0 ; i != size() ; ++i )
            alloc.construct( dest++ , std::move( *elem++ ) ) ;
        free() ;
        first_element = newdata ;
        first_free = dest ;
        last_element = first_element + num ;
    }
}

template <typename T>
void Vec<T>::resize( size_t num , const string &s ) {
    if( num < size() )
        while( num != size() )
            alloc.destroy( --first_free ) ;
    else
        while( num != size() )
            push_back( s ) ;
}

template <typename T>
T& Vec<T>::front() {
    if( !first_element )
        throw invalid_argument( "此容器是空的，不许使用函数front" ) ;
    return *first_element ;
}

template <typename T>
const T& Vec<T>::front() const {
    if( !first_element )
        throw invalid_argument( "此容器是空的，不许使用函数front" ) ;
    return *first_element ;
}

template <typename T>
T& Vec<T>::back() {
    if( !first_element )
        throw invalid_argument( "此容器是空的，不许使用函数front" ) ;
    T *temp = first_free ;
    return --temp ;
}

template <typename T>
const T& Vec<T>::back() const {
    if( !first_element )
        throw invalid_argument( "此容器是空的，不许使用函数front" ) ;
    T *temp = first_free ;
    return --temp ;
}

template <typename T>
T& Vec<T>::operator [] ( size_t num ) {
    return first_element[num] ;
}

template <typename T>
T& Vec<T>::at( size_t num ) {
    if( num >= size() )
        throw out_of_range( "下标越界！" ) ;
    return first_element[num] ;
}

template <typename T>
T* Vec<T>::begin() const {
    return first_element ;
}

template <typename T>
T* Vec<T>::end() const {
    return first_free ;
}

// 私有操作函数
template <typename T>
void Vec<T>::check() {
    if( first_free == last_element )
        reallocate() ;
}

template <typename T>
pair<T*,T*> Vec<T>::alloc_n_copy( const T *b , const T *e ) {
    T *data = alloc.allocate( b - e ) ;
    return { data , uninitialized_copy( b , e , data ) } ;
}

template <typename T>
void Vec<T>::free() {
    if( first_element ){
        for( T *p = first_free ; p != first_element ; /* empty */ )
            alloc.destroy( --p ) ;
        alloc.deallocate( first_element , first_free - first_element ) ;
    }
}

template <typename T>
void Vec<T>::reallocate() {
    size_t newcapacity = size() ? 2 * size() : 1 ;
    T *newdata = alloc.allocate( newcapacity ) , *dest = newdata , *elem = first_element ;
    for( size_t i = 0 ; i != size() ; ++i )
        alloc.construct( dest++ , std::move( *elem++ ) ) ;
    free() ;
    first_element = newdata ;
    first_free = dest ;
    last_element = first_element + newcapacity ;
}

#endif // VEC_H

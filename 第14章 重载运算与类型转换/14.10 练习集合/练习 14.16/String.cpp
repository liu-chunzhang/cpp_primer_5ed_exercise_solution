#include "String.h"
// 静态成员声明
allocator<char> String::alloc ;

// 辅助函数
size_t strlen( const char *cp ){           // 之所以写这个程序纯粹是因为<string>有毛病，不给反馈strlen函数，甚至加上这个头文件都剧烈报错
    size_t u = 0 ;
    while( cp[u] != '\0' )
        ++u ;
    return u ;
}

// 友元函数及辅助函数
bool operator == ( const String &s1 , const String &s2 ) {
    if( s1.size() != s2.size() )
        return false ;
    const char *temp1 = s1.cbegin() , *temp2 = s2.cbegin() ;
    while( temp1 != s1.cend() )
        if( *temp1++ != *temp2++ )
            break ;
    return temp1 == s1.cend() ;
}

bool operator != ( const String &s1 , const String &s2 ) {
    return !( s1 == s2 ) ;
}

ostream &operator << ( ostream &out , const String &s ){
    for( const char *p = s.cbegin() ; p != s.cend() ; ++p )
        out << *p ;
    return out ;
}

String operator + ( const String &s1 , const String &s2 ){
    String ret( s1 ) ;
    ret += s2 ;
    return ret ;
}

void swap( String &s1 , String &s2 ){
    s1.swap( s2 ) ;
}

// 构造函数与析构函数
String::String( const char *cp ) : p( alloc.allocate( strlen( cp ) ) ) , sz( strlen( cp ) ) {
    uninitialized_copy( cp , cp + sz , p ) ;
}

String::String( const String &s ) : p( alloc.allocate( s.sz ) ) , sz( s.sz ) {
    uninitialized_copy( s.p , s.p + sz , p ) ;
}

String::String( String &&s ) noexcept : p( s.p ) ,sz( s.size() )  {
    s.p = nullptr ; s.sz = 0 ;
}

String::String( size_t u , char c ) : p( alloc.allocate( u ) ) , sz( u ) {
    uninitialized_fill_n( p , u , c ) ;
}

String &String::operator = ( const String &Str ){
    char *newp = alloc.allocate( Str.sz ) ;
    uninitialized_copy( Str.cbegin() , Str.cend() , newp ) ;              // 此处必须投入常量指针（迭代器），否则此算法丢失const限定符
    if( p ){
        for( char *p = begin() ; p != end() ; ++p )
            alloc.destroy( p ) ;
        alloc.deallocate( p , sz ) ;
    }
    p = newp ;
    sz = Str.size() ;
    return *this ;
}

String &String::operator = ( String &&s ) noexcept {
    if( this != &s ){
        if( p ){
            for( char *p = begin() ; p != end() ; ++p )
                alloc.destroy( p ) ;
            alloc.deallocate( p , sz ) ;
        }
        p = s.p ;
        sz = s.sz ;
        s.p = nullptr ;
        s.sz = 0 ;
    }
    return *this ;
}

String &String::operator = ( char c ){
    if( p ){
        for( char *p = begin() ; p != end() ; ++p )
            alloc.destroy( p ) ;
        alloc.deallocate( p , sz ) ;
    }
    sz = 1 ;
    p = alloc.allocate( sz ) ;
    *p = c ;
    return *this ;
}

String &String::operator = ( const char *cp ){
    if( p ){
        for( char *p = begin() ; p != end() ; ++p )
            alloc.destroy( p ) ;
        alloc.deallocate( p , sz ) ;
    }
    sz = strlen( cp ) ;
    p = alloc.allocate( sz ) ;
    uninitialized_copy( cp , cp + sz , p ) ;
    return *this ;
}

String &String::operator = ( initializer_list<char> clst ){
    if( p ){
        for( char *p = begin() ; p != end() ; ++p )
            alloc.destroy( p ) ;
        alloc.deallocate( p , sz ) ;
    }
    sz = clst.size() ;
    p = alloc.allocate( sz ) ;
    uninitialized_copy( clst.begin() , clst.end() , p ) ;
    return *this ;
}

String::~String() noexcept {
    if( p ){
        for( char *p = begin() ; p != end() ; ++p )
            alloc.destroy( p ) ;
        alloc.deallocate( p , sz ) ;
    }
};

size_t String::size() const {
    return sz ;
}

void String::swap( String &s ){
    using std::swap ;
    swap( s.p , p ) ;
    swap( s.sz , sz ) ;
}

String &String::operator += ( const String &s ) {
    char *newp = String::alloc.allocate( sz + size() + 1 ) , *temp = uninitialized_copy( cbegin() , cend() , newp ) ;
    uninitialized_copy( s.cbegin() , s.cend() , temp ) ;
    p = newp ;
    sz += size() + 1 ;
    return *this ;
}

char *String::begin(){
    return p ;
}

const char *String::cbegin() const {
    return p ;
}

char *String::end(){
    return p + sz  ;
}

const char *String::cend() const{
    return p + sz ;
}

#ifndef STRING_H
#define STRING_H

#include <algorithm>
#include <iostream>
#include <memory>
using namespace std;

class String{
    friend ostream &operator << ( ostream &out , const String &s ) ;
    friend String operator + ( const String &s1 , const String &s2 ) ;
    friend void swap( String &s1 , String &s2 ) ;

    public:
        String() = default ;
        String( const char *cp ) ;
        String( const String &s ) ;
        String( String &&s ) noexcept ;
        String( size_t u , char c ) ;
        String &operator = ( const String &Str ) ;
        String &operator = ( String &&s ) noexcept ;
        String &operator = ( char c ) ;
        String &operator = ( const char *cp ) ;
        String &operator = ( initializer_list<char> clst ) ;
        ~String() noexcept ;

    public:
        size_t size() const ;
        void swap( String &s ) ;
        String &operator += ( const String &s ) ;

    public:
        char* begin() ;
        const char* cbegin() const ;
        char* end() ;
        const char* cend() const ;

    private:
        static allocator<char> alloc ;

    private:
        char *p = nullptr ;
        size_t sz = 0 ;
};

#endif // STRING_H

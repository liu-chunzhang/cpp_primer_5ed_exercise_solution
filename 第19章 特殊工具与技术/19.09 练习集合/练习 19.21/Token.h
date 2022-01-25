#ifndef TOKEN_H
#define TOKEN_H

#include <iostream>
using namespace std;

class Token {
    public:
        enum token { INT , CHAR , DOU , STR } ;

    public:
        Token() ;
        Token( int i ) ;
        Token &operator = ( int i ) ;
        Token( char c ) ;
        Token &operator = ( char c ) ;
        Token( double d ) ;
        Token &operator = ( double d ) ;
        Token( string s ) ;
        Token &operator = ( string s ) ;
        Token( const Token &t ) ;
        Token& operator = ( const Token &t ) ;
        ~Token() ;

    private:
        token tok ;
        union {
            int ival ;
            char cval ;
            double dval ;
            string sval ;
        };
        void copyUnion( const Token &t ) ;
};

#endif // TOKEN_H

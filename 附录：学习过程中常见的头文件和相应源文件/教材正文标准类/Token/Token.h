#ifndef TOKEN_H
#define TOKEN_H

#include <iostream>
using namespace std;

class Token {
    public:
        Token() ;
        Token( const Token &t ) ;
        Token& operator = ( const Token &t ) ;
        virtual ~Token();

    public:
        Token& operator = ( const string &s ) ;
        Token& operator = ( char c ) ;
        Token& operator = ( int i ) ;
        Token& operator = ( double d ) ;

    private:
        enum { INT , CHAR , DBL , STR } tok ;
        union {
            char cval ;
            int ival ;
            double dval ;
            string sval ;
        };
        void copyUnion( const Token &t ) ;
};

#endif // TOKEN_H

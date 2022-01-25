#ifndef TOKEN_H
#define TOKEN_H

#include "Sales_data.h"

class Token {
    friend ostream& operator << ( ostream& os , const Token &t ) ;

    public:
        enum token { INT , CHAR , DOU , STR , SAL } ;

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
        Token( Sales_data sp ) ;
        Token &operator = ( Sales_data sp ) ;
        Token( const Token &t ) ;
        Token& operator = ( const Token &t ) ;
        Token( Token &&t ) ;
        Token& operator = ( Token &&t ) ;
        ~Token() ;

    private:
        token tok ;
        union {
            int ival ;
            char cval ;
            double dval ;
            string sval ;
            Sales_data sdata ;
        };
        void copyUnion( const Token &t ) ;
        void moveUnion( Token &t ) ;
};

#endif // TOKEN_H

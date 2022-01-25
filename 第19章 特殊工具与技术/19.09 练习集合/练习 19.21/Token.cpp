#include "Token.h"

Token::Token() : tok( INT ) , ival( 0 ) { }

Token::Token( int i ) : tok( INT ) , ival( i ) { }

Token &Token::operator = ( int i ) {
    if( tok == STR )
        sval.~string() ;
    tok = INT ;
    ival = i ;
    return *this ;
}

Token::Token( char c ) : tok( CHAR ) , cval( c ) { }

Token &Token::operator = ( char c ) {
    if( tok == STR )
        sval.~string() ;
    tok = CHAR ;
    cval = c ;
    return *this ;
}

Token::Token( double d ) : tok( DOU ) , dval( d ) { }

Token &Token::operator = ( double d ) {
    if( tok == STR )
        sval.~string() ;
    tok = DOU ;
    dval = d ;
    return *this ;
}

Token::Token( string s ) : tok( STR ) , sval( s ) { }

Token &Token::operator = ( string s ) {
    if( tok == STR )
        sval = s ;
    else
        new ( &sval ) string ( s ) ;
    tok = STR ;
    return *this ;
}

Token::Token( const Token &t ) : tok( t.tok ) {
    copyUnion( t ) ;
}

Token& Token::operator = ( const Token &t ) {
    if( tok == STR && t.tok != STR )
        sval.~string() ;
    if( tok == STR && t.tok == STR )
        new ( &sval ) string ( t.sval ) ;
    else
        copyUnion( t ) ;
    tok = t.tok ;
    return *this ;
}

Token::~Token() {
    if( tok == STR )
        sval.~string() ;
}

// Ë½ÓÐº¯Êý
void Token::copyUnion( const Token &t ) {
    switch( t.tok ){
        case Token::INT :
            ival = t.ival ;
            break ;
        case Token::CHAR :
            cval = t.cval ;
            break ;
        case Token::DOU :
            dval = t.dval ;
            break ;
        case Token::STR :
            new ( &sval ) string ( t.sval ) ;
            break ;
    }
}

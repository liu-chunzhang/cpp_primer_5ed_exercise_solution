#include "Token.h"

// 构造函数
Token::Token() : tok( INT ) , ival( 0 ) { }

Token::Token( const Token &t ) : tok( t.tok ) {
    copyUnion( t ) ;
}

Token& Token::operator = ( const Token &t ) {
    if( tok == STR && t.tok != STR )
        sval.~string() ;
    if( tok == STR && t.tok == STR )
        sval = t.sval ;
    else
        copyUnion( t ) ;
    tok = t.tok ;
    return *this ;
}

Token::~Token() {
    if( tok == STR )
        sval.~string() ;
}

// 构造函数
Token& Token::operator = ( const string &s ) {
    if( tok == STR )
        sval = s ;
    else
        new( &sval ) string( s ) ;
    tok = STR ;
    return *this ;
}

Token& Token::operator = ( char c ) {
    if( tok == STR )
        sval.~string() ;
    cval = c ;
    tok = CHAR ;
    return *this ;
}

Token& Token::operator = ( int i ) {
    if( tok == STR )
        sval.~string() ;
    ival = i ;
    tok = INT ;
    return *this ;
}

Token& Token::operator = ( double d ) {
    if( tok == STR )
        sval.~string() ;
    dval = d ;
    tok = DBL ;
    return *this ;
}

// 私有函数
void Token::copyUnion( const Token &t ) {
    switch( t.tok ){
        case Token::INT :
            ival = t.ival ;
            break ;
        case Token::CHAR :
            cval = t.cval ;
            break ;
        case Token::DBL :
            dval = t.dval ;
            break ;
        case Token::STR :
            new( &sval ) string( t.sval ) ;
            break ;
    }
}

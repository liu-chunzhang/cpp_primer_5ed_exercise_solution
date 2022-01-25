#include "Token.h"


ostream& operator << ( ostream& os , const Token &t ) {
    switch( t.tok ){
        case Token::INT :
            os << t.ival ;
            break ;
        case Token::CHAR :
            os << t.cval ;
            break ;
        case Token::DOU :
            os << t.dval ;
            break ;
        case Token::STR :
            os << t.sval ;
            break ;
        case Token::SAL :
            os << t.sdata ;
            break ;
    }
    return os ;
}

Token::Token() : tok( INT ) , ival( 0 ) { }

Token::Token( int i ) : tok( INT ) , ival( i ) { }

Token &Token::operator = ( int i ) {
    if( tok == STR )
        sval.~string() ;
    if( tok == SAL )
        sdata.~Sales_data() ;
    tok = INT ;
    ival = i ;
    return *this ;
}

Token::Token( char c ) : tok( CHAR ) , cval( c ) { }

Token &Token::operator = ( char c ) {
    if( tok == STR )
        sval.~string() ;
    if( tok == SAL )
        sdata.~Sales_data() ;
    tok = CHAR ;
    cval = c ;
    return *this ;
}

Token::Token( double d ) : tok( DOU ) , dval( d ) { }

Token &Token::operator = ( double d ) {
    if( tok == STR )
        sval.~string() ;
    if( tok == SAL )
        sdata.~Sales_data() ;
    tok = DOU ;
    dval = d ;
    return *this ;
}

Token::Token( string s ) : tok( STR ) , sval( s ) { }

Token &Token::operator = ( string s ) {
    if( tok == STR )
        sval = s ;
    else {
        if( tok == SAL )
            sdata.~Sales_data() ;
        new ( &sval ) string ( s ) ;
    }
    tok = STR ;
    return *this ;
}

Token::Token( Sales_data sp ) : tok( SAL ) , sdata( sp ) { }

Token &Token::operator = ( Sales_data sp ) {
    if( tok == SAL )
        sdata = sp ;
    else{
        if( tok == STR )
            sval.~string() ;
        new ( &sdata ) Sales_data( sp ) ;
    }
    tok = SAL ;
    return *this ;
}

Token::Token( const Token &t ) : tok( t.tok ) {
    copyUnion( t ) ;
}

Token& Token::operator = ( const Token &t ) {
    if( tok == STR ){
        if( t.tok == STR )
            new ( &sval ) string ( t.sval ) ;
        else
            sval.~string() ;
    }
    if( tok == SAL ){
        if( t.tok == SAL )
            new ( &sdata ) Sales_data ( t.sdata ) ;
        else
            sdata.~Sales_data() ;
    }
    copyUnion( t ) ;
    tok = t.tok ;
    return *this ;
}

Token::~Token() {
    if( tok == STR )
        sval.~string() ;
    if( tok == SAL )
        sdata.~Sales_data() ;
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
        case Token::SAL :
            new ( &sdata ) Sales_data( t.sdata ) ;
            break ;
    }
}

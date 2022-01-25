// 本程序用于验证教材中16.3节内容的可靠性，并提供感性认知
#include <iostream>
#include <sstream>
using namespace std;

//#define NDE_BUG                                               // 此处通过控制NDE_BUG宏来释放函数string debug_rep( const string &s ) ;

template <typename T> string debug_rep( const T &t ) ;
template <typename T> string debug_rep( T *p ) ;
#ifndef NDE_BUG
string debug_rep( const string &s ) ;
#endif // NDE_BUG
string debug_rep( char *p ) ;
string debug_rep( const char *p ) ;

int main() {
    string s( "hi" ) ;
    cout << debug_rep( s ) << endl;
    cout << debug_rep( &s ) << endl;

    const string *sp = &s ;
    cout << debug_rep( sp ) << endl;

    cout << debug_rep( "hi world!" ) << endl;
    return 0;
}

template <typename T> string debug_rep( const T &t ) {
    cout << "Using function template <typename T> string debug_rep( const T &t )" << endl;
    ostringstream ret ;
    ret << t ;
    return ret.str() ;
}

template <typename T> string debug_rep( T *p ) {
    cout << "Using function template <typename T> string debug_rep( T *p )" << endl;
    ostringstream ret ;
    ret << "pointer: " << p ;
    if( p )
        ret << " " << debug_rep( *p ) ;
    else
        ret << " null pointer" ;
    return ret.str() ;
}

#ifndef NDE_BUG
string debug_rep( const string &s ) {
    cout << "Using function string debug_rep( const string &s )" << endl;
    return '"' + s + '"' ;
}
#endif // NDE_BUG
string debug_rep( char *p ) {
    cout << "Using function string debug_rep( char *p )" << endl;
    return debug_rep( string( p ) ) ;
}

string debug_rep( const char *p ) {
    cout << "Using function string debug_rep( const char *p )" << endl;
    return debug_rep( string( p ) ) ;
}

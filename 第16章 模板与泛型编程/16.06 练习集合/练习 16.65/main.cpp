// 本程序用于验证读者在练习16.65中的想法，并在必要的地方予以说明
#include <iostream>
#include <sstream>
using namespace std;

template <typename T> string debug_rep( const T &t ) ;
template <typename T> string debug_rep( T *t ) ;
template <> string debug_rep( char *t ) ;
template <> string debug_rep( const char *t ) ;

int main() {
    double d = 3.50 ;
    cout << debug_rep( d ) << endl;
    char c = 'c' , *cp = &c , *const cp2 = &c ;
    const char *cp3 = &c ;
    cout << debug_rep( c ) << endl;
    cout << debug_rep( cp ) << endl;
    cout << debug_rep( cp2 ) << endl;
    cout << debug_rep( cp3 ) << endl;
    return 0;
}

template <typename T> string debug_rep( const T &t ) {
    ostringstream ret ;
    ret << t ;
    return ret.str() ;
}

template <typename T> string debug_rep( T *t ) {
    ostringstream ret ;
    ret << ( t ? " " + debug_rep( *t ) : "null pointer" ) ;
    return ret.str() ;
}

template <> string debug_rep( char *t ) {
    cout << "Using function template <> string debug_rep( char *t )" << endl;
    return debug_rep( string( t ) ) ;
}

template <> string debug_rep( const char *t ) {
    cout << "Using function template <> string debug_rep( const char *t )" << endl;
    return debug_rep( string( t ) ) ;
}

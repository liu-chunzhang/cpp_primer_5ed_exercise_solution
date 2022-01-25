// 本程序用于验证教材中16.4.2节内容的可靠性，并提供感性认知
#include <sstream>
#include "Sales_data.h"

template <typename T> ostream& print( ostream &os , const T &t ) ;
template <typename T,typename... Args> ostream& print( ostream &os , const T &t , const Args&... rest ) ;
template <typename T> string debug_rep( const T &t ) ;
template <typename... Args> ostream& errorMsg( ostream &os , const Args&... rest ) ;

int main() {
    string fcnName = "fcn" ;
    Sales_data item( "978-7-121-15535-2" , 5 , 128.00 ) ;
    errorMsg( cerr , fcnName , 5 , -4.5 , "other" , item ) ;
    return 0;
}

template <typename T> ostream& print( ostream &os , const T &t ) {
    return os << t ;
}
template <typename T,typename... Args> ostream& print( ostream &os , const T &t , const Args&... rest ) {
    os << t << ", " ;
    return print( os , rest... ) ;
}

template <typename T> string debug_rep( const T &t ) {
    ostringstream ret ;
    ret << t ;
    return ret.str() ;
}

template <typename... Args> ostream& errorMsg( ostream &os , const Args&... rest ) {
    return print( os , debug_rep( rest )... ) ;
}

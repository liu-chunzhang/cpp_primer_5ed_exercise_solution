// 本程序用于验证读者在练习16.56中的想法，并在必要的地方予以说明
#include <sstream>
#include "Sales_data.h"

template <typename T> ostream& print( ostream &os , const T &t ) ;
template <typename T,typename... Args> ostream& print( ostream &os , const T &t , const Args&... rest ) ;
template <typename T> string debug_rep( const T &t ) ;
template <typename... Args> ostream& errorMsg( ostream &os , const Args&... rest ) ;

int main() {
    string fcnName = "fcn" ;
    Sales_data item( "978-7-121-15535-2" , 5 , 128.00 , 108.00 ) ;   // 因为个人版本的Sales_data类的数据结构与教程本身不同，所以仅在此处有修改
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

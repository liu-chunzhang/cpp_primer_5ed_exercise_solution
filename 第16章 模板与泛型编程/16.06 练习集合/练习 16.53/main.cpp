// 本程序用于验证读者在练习16.53中的想法，并在必要的地方予以说明
#include "Sales_data.h"

template <typename T> ostream& print( ostream &os , const T &t ) ;
template <typename T,typename... Args> ostream& print( ostream &os , const T &t , const Args&... rest ) ;

int main() {
    print( cout , 1 ) ;
    cout << endl;
    print( cout , 2 , "A" ) ;
    cout << endl;
    print( cout , 3 , "B" , 'c' , 4.5 , Sales_data( "999-7-121-15535-2" , 5 , 128.00 , 108.00 ) ) ;
    cout << endl;
    return 0;
}

template <typename T> ostream& print( ostream &os , const T &t ) {
    return os << t ;
}

template <typename T,typename... Args> ostream& print( ostream &os , const T &t , const Args&... rest ) {
    os << t << ", " ;
    return print( os , rest... ) ;
}

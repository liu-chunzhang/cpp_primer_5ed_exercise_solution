// 本程序用于验证读者在练习19.23中的想法，并在必要的地方予以说明
#include "Token.h"

int main() {
    Sales_data item( "978-7-121-15535-2" , 5 , 128.00 , 108.00 ) ;
    string str = "hello world" ;
    Token t1( std::move( str ) ) , t2 ;
    t1 = std::move( item ) ;
    cout << t1 << endl;
    t2 = std::move( t1 ) ;
    cout << t1 << endl;
    cout << t2 << endl;
    t2 = t2 ;
    cout << t2 << endl;
    return 0;
}

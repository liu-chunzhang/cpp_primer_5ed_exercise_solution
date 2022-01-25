// 本程序用于验证读者在练习16.52中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

template <typename T,typename... Args> void foo( const T &t , const Args& ... rest ) ;

int main() {
    int i = 0 ;
    double d = 3.14 ;
    string s = "how now brown cow" ;
    foo( i , s , 42 , d ) ;
    foo( s , 42 , "hi" ) ;
    foo( d , s ) ;
    foo( "hi" ) ;
    return 0;
}

template <typename T,typename... Args> void foo( const T &t , const Args& ... rest ) {
    cout << "sizeof...( Args ) = " << sizeof...( Args ) << endl;
    cout << "sizeof...( rest ) = " << sizeof...( rest ) << endl;
}

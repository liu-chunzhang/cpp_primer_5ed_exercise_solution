// 本程序用于验证教材中16.4.0节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

template <typename T,typename... Args> void foo( const T &t , const Args&... rest ) ;

int main() {
    int i = 0 ;
    double d = 3.14 ;
    string s = "how now brown cow" ;
    foo( i , s , 42 , d ) ;                 // 包里有三个参数
    foo( s , 42 , "hi" ) ;                  // 包里有两个参数
    foo( d , s ) ;                          // 包里有一个参数
    foo( "hi" ) ;                           // 空包
    foo( "hi" , i , i , d ) ;
    return 0;
}

template <typename T,typename... Args> void foo( const T &t , const Args&... rest ) {
    cout << "sizeof...( Args ) = " << sizeof...( Args ) << endl;
    cout << "sizeof...( args ) = " << sizeof...( rest ) << endl;
}

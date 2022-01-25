// 本程序用于验证教材中16.2.7节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

template <typename F,typename T1,typename T2> void flip1( F f , T1 t1 , T2 t2 ) ;        // flip1是一个不完整的表现，顶层const和引用都丢失了
void f( int v1 , int &v2 ) ;

template <typename F,typename T1,typename T2> void flip2( F f , T1 &&t1 , T2 &&t2 ) ;

template <typename F,typename T1,typename T2> void flip( F , T1&& , T2&& ) ;

int main() {
    int i = 0 , j = 0 ;
    f( 42 , i ) ;
    cout << i << endl;
    flip1( f , j , 42 ) ;   // 通过flip1调用f不会改变j，flip1实例化为void flip1( void( *fcn )( int , int& ) , int , int )
    cout << j << endl;

    j = 0 ;
    flip2( f , j , 42 ) ;   // 通过flip1调用f不会改变j，flip1实例化为void flip1( void( *fcn )( int , int& ) , int , int )
    cout << j << endl;
    i = 5 , j = 42 ;
    flip( f , i , j ) ;
    cout << i << " " << j << endl;
    return 0;
}

template <typename F,typename T1,typename T2> void flip1( F f , T1 t1 , T2 t2 ) {
    f( t2 , t1 ) ;
}

void f( int v1 , int &v2 ) {
    cout << v1 << " " << ++v2 << endl;
}

template <typename F,typename T1,typename T2> void flip2( F f , T1 &&t1 , T2 &&t2 ) {
    f( t2 , t1 ) ;
}

template <typename F,typename T1,typename T2> void flip( F f , T1 &&t1 , T2 &&t2 ) {
    f( std::forward<T2>( t2 ) , std::forward<T1>( t1 ) ) ;
}

// 本程序用于验证教材中16.2.5节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

template <typename T> void f1( T &t ) ;         // 实参必须是一个左值
template <typename T> void f2( const T &t ) ;  // 可以接受一个右值
template <typename T> void f3( T &&t ) ;        // 右值引用类型实参

int main() {
    int i = 0 ;
    const int ci = 42 ;

    f1( i ) ;                   // i是一个int，模板参数T被推断为int
    f1( ci ) ;                  // ci是一个const int，模板参数T被推断为const int
  //f1( 5 ) ;                   // 错误：传递给一个&参数的实参必须是一个左值！

    f2( i ) ;                   // i是一个int，模板参数T被推断为int
    f2( ci ) ;                  // ci是一个const int，模板参数T被推断为int（与之前不同）
    f2( 5 ) ;                   // 一个const&参数可以绑定到一个右值，模板参数T被推断为int

    f3( 42 ) ;                  // 实参是一个int右值，模板参数T被推断为int
    f3( i ) ;                   // 实参是一个左值，模板参数T被推断为const int&
  //f3( ci ) ;                  // 实参是一个左值，模板参数T是一个const int&
    return 0;
}

template <typename T> void f1( T &t ) { }
template <typename T> void f2( const T &t ) { }
template <typename T> void f3( T &&val ) {
    T t = val ;
    ++t ;
    //t = fcn( t ) ;
    if( val == t ) {
        cout << "val == t" << endl;
        /* ... */
    }
}

// 本程序用于验证教材中14.9.2节内容的可靠性，并提供感性认知
#include "A.h"
#include "A2.h"
#include "C.h"
#include "E.h"

A f( const A &a ) ;
void f2( long double ld ) ;
void manip2( const C &c ) ;
void manip2( const E &e ) ;

int main() {
    B b ;
    A a = f( b ) ;
    cout << a.getAval() << endl;

    A a1 = f( b.operator A() ) , a2 = f( A( b ) ) ;
    cout << "a1 = f( b.operator A() ): " << a1.getAval() << endl;       // 这种二义性调用编译器很可能不会报错！
    cout << "a2 = f( A( b ) ): " << a2.getAval() << endl;

    A2 A1 ;
    f2( A1 ) ;          // 二义性错误：含义是f( A2::operator int() )还是f( A2::operator double() )不确定

    long lg = 999 ;
    A2 a2( lg ) ;       // 二义性错误：含义是A2::A2( int )还是A2::A2( double )不确定

    manip2( 10 ) ;      // 二义性错误：含义是manip2( C(10) )还是manip2( E(10) ) ;
    return 0;
}

A f( const A &a ) {
    int i = a.getAval() + 1 ;
    return A( i ) ;
}

void f2( long double ld ) {
    ++ld ;
}

void manip2( const C &c ) {
    cout << c.getCval() << endl;
}

void manip2( const E &e ) {
    cout << e.getEval() << endl;
}

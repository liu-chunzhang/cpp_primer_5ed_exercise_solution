// ������������֤�̲���14.9.2�����ݵĿɿ��ԣ����ṩ������֪
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
    cout << "a1 = f( b.operator A() ): " << a1.getAval() << endl;       // ���ֶ����Ե��ñ������ܿ��ܲ��ᱨ��
    cout << "a2 = f( A( b ) ): " << a2.getAval() << endl;

    A2 A1 ;
    f2( A1 ) ;          // �����Դ��󣺺�����f( A2::operator int() )����f( A2::operator double() )��ȷ��

    long lg = 999 ;
    A2 a2( lg ) ;       // �����Դ��󣺺�����A2::A2( int )����A2::A2( double )��ȷ��

    manip2( 10 ) ;      // �����Դ��󣺺�����manip2( C(10) )����manip2( E(10) ) ;
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

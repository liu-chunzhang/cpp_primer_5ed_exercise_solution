// ������������֤��������ϰ13.17�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "numbered.h"

void f1( numbered s );
void f2( const numbered &s ) ;

int main() {
    numbered a , b = a , c = b ;
    f1( a ) ; f1( b ) ; f1( c ) ;
    f2( a ) ; f2( b ) ; f2( c ) ;
    system( "pause" ) ;
    return 0;
}

void f1( numbered s ) {
    cout << s.mysn << endl;
}

void f2( const numbered &s ) {
    cout << s.mysn << endl;
}

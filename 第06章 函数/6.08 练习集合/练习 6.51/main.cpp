// ������������֤��������ϰ6.51�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

void f() ;
void f( int i ) ;
void f( int i , int j ) ;
void f( double i , double j = 3.14 ) ;

int main() {
    f( 2.56 , 42 ) ;
    f( 42 ) ;
    f( 42 , 0 ) ;
    f( 2.56 , 3.14 );
    return 0;
}

void f() {
    cout << "f()" << endl;
}

void f( int i ) {
    cout << "f( int " << i << " )" << endl;
}

void f( int i , int j ) {
    cout << "f( int " << i << " , int " << j << " )" << endl;
}

void f( double i , double j ) {
    cout << "f( double " << i << " , double " << j << " )" << endl;
}

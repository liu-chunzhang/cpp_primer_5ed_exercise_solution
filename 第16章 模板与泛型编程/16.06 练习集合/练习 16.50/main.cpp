// ������������֤��������ϰ16.50�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

template <typename T> void f( T t ) ;
template <typename T> void f( const T *t ) ;
template <typename T> void g( T t ) ;
template <typename T> void g( T *t ) ;

int main() {
    int i = 42 , *p = &i ;
    const int ci = 0 , *p2 = &ci ;
    g( 42 ) ;
    g( p ) ;
    g( ci ) ;
    g( p2 ) ;
    f( 42 ) ;
    f( p ) ;
    f( ci ) ;
    f( p2 ) ;
    return 0;
}

template <typename T> void f( T t ) {
    cout << "���ú���template <typename T> void f( T t ), T��" << typeid( T ).name() << endl;
}

template <typename T> void f( const T *t ) {
    cout << "���ú���template <typename T> void f( const T *t ), T��" << typeid( T ).name() << endl;
}

template <typename T> void g( T t ) {
    cout << "���ú���template <typename T> void g( T t ), T��" << typeid( T ).name() << endl;
}

template <typename T> void g( T *t ) {
    cout << "���ú���template <typename T> void g( T *t ), T��" << typeid( T ).name() << endl;
}

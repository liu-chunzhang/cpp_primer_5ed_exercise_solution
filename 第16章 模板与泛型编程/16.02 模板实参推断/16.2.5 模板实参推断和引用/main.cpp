// ������������֤�̲���16.2.5�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

template <typename T> void f1( T &t ) ;         // ʵ�α�����һ����ֵ
template <typename T> void f2( const T &t ) ;  // ���Խ���һ����ֵ
template <typename T> void f3( T &&t ) ;        // ��ֵ��������ʵ��

int main() {
    int i = 0 ;
    const int ci = 42 ;

    f1( i ) ;                   // i��һ��int��ģ�����T���ƶ�Ϊint
    f1( ci ) ;                  // ci��һ��const int��ģ�����T���ƶ�Ϊconst int
  //f1( 5 ) ;                   // ���󣺴��ݸ�һ��&������ʵ�α�����һ����ֵ��

    f2( i ) ;                   // i��һ��int��ģ�����T���ƶ�Ϊint
    f2( ci ) ;                  // ci��һ��const int��ģ�����T���ƶ�Ϊint����֮ǰ��ͬ��
    f2( 5 ) ;                   // һ��const&�������԰󶨵�һ����ֵ��ģ�����T���ƶ�Ϊint

    f3( 42 ) ;                  // ʵ����һ��int��ֵ��ģ�����T���ƶ�Ϊint
    f3( i ) ;                   // ʵ����һ����ֵ��ģ�����T���ƶ�Ϊconst int&
  //f3( ci ) ;                  // ʵ����һ����ֵ��ģ�����T��һ��const int&
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

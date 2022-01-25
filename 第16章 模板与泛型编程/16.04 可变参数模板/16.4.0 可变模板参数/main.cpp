// ������������֤�̲���16.4.0�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

template <typename T,typename... Args> void foo( const T &t , const Args&... rest ) ;

int main() {
    int i = 0 ;
    double d = 3.14 ;
    string s = "how now brown cow" ;
    foo( i , s , 42 , d ) ;                 // ��������������
    foo( s , 42 , "hi" ) ;                  // ��������������
    foo( d , s ) ;                          // ������һ������
    foo( "hi" ) ;                           // �հ�
    foo( "hi" , i , i , d ) ;
    return 0;
}

template <typename T,typename... Args> void foo( const T &t , const Args&... rest ) {
    cout << "sizeof...( Args ) = " << sizeof...( Args ) << endl;
    cout << "sizeof...( args ) = " << sizeof...( rest ) << endl;
}

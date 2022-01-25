// ������������֤�̲���16.2.1�����ݵĿɿ��ԣ����ṩ������֪
#include <fstream>
#include <iostream>
using namespace std;

template <typename T> T fobj( T lhs , T rhs ) ;
template <typename T> int fref( const T &a , const T &b ) ;
template <typename T,typename U> int flexibleCompare( const T &lhs , const U &rhs ) ;
template <typename T> ostream& print( ostream &os , const T &obj ) ;

int main() {
    string s1( "a value" ) ;
    const string s2( "another value" ) ;
    fobj( s1 , s2 ) ;                       // ����fobj( string , string )��const������
    fref( s1 , s2 ) ;                       // ����fref( const string& , const string& )�������ò�����˵��ת��Ϊconst�������
    int a[10] , b[42] , c[10];
    fobj( a , b ) ;                         // ���õ���fobj( int* , int* )
    //fref( a , b ) ;                       // �������Ͳ�ƥ��
    cout << fref( a , c ) << endl ;        // ��������ƥ���ǿ��Ե���fref( const int(&)[10] , const int(&)[10] )��

    long lng = 3 ;
    cout << flexibleCompare( lng , 1024 ) << endl;
    print( cout , 77 ) ;
    ofstream f( "output.txt" ) ;
    print( f , 10 ) ;
    return 0;
}

template <typename T>
T fobj( T lhs , T rhs ) {
    return less<T>()( lhs , rhs ) ? lhs : rhs ;
}

template <typename T>
int fref( const T &a , const T &b ) {
    if( a < b )
        return -1 ;
    if( b < a )
        return 1 ;
    return 0 ;
}

template <typename T,typename U>
int flexibleCompare( const T &lhs , const U &rhs ) {
    if( lhs < rhs )
        return -1 ;
    if( lhs > rhs )
        return 1 ;
    return 0 ;
}

template <typename T>
ostream& print( ostream &os , const T &obj ) {
    os << obj ;
    return os ;
}

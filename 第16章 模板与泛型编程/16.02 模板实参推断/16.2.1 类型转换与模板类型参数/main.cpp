// 本程序用于验证教材中16.2.1节内容的可靠性，并提供感性认知
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
    fobj( s1 , s2 ) ;                       // 调用fobj( string , string )；const被忽略
    fref( s1 , s2 ) ;                       // 调用fref( const string& , const string& )；对引用参数来说，转换为const是允许的
    int a[10] , b[42] , c[10];
    fobj( a , b ) ;                         // 调用的是fobj( int* , int* )
    //fref( a , b ) ;                       // 数组类型不匹配
    cout << fref( a , c ) << endl ;        // 数组类型匹配是可以调用fref( const int(&)[10] , const int(&)[10] )的

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

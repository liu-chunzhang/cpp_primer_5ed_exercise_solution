// 本程序用于验证教材中16.1.1节内容的可靠性，并提供感性认知
#include "Sales_data.h"
#include <vector>
#include <cstring>

template <typename T>
int compare( const T &v1 , const T &v2 ) ;

//template <typename T , U > T calc( const T& , const U& ) ;                    // 错误：U之前必须加上class或typename！

template <typename T , typename U>
T calc( const T &t , const U &u ) ;      // 正确：在模板参数列表中，typename和class意义相同

template <unsigned N , unsigned M>
int compare( const char ( & )[ N ] , const char ( & )[ M ] ) ;

int main() {
    cout << compare( 1 , 0 ) << endl;                           // T为int：实例化出int compare( const int& , const int& )
    vector<int> ivec1{ 1 , 2 , 3 } , ivec2{ 4 , 5 , 6 } ;
    cout << compare( ivec1 , ivec2 ) << endl;                   // T为vector<int>：实例化出int compare( const vector<int>& , const vector<int>& )
    cout << compare( "hi" , "mom" ) ;
    Sales_data data1 , data2 ;
    cout << compare( data1 , data2 ) ;                           // 错误：Sales_data未定义<
    return 0;
}

template <typename T>
int compare( const T &v1 , const T &v2 ){
    if( v1 < v2 )
        return -1 ;
    if( v2 < v1 )
        return 1 ;
    return 0 ;
}

template <unsigned N , unsigned M > int compare( const char ( &p1 )[ N ] , const char ( &p2 )[ M ] ) {
    return strcmp( p1 , p2 ) ;
}

template <typename T> inline T min( const T &v1 , const T &v2 ) ;      // 正确：inline说明符跟在模板参数列表之后
//inline template <typename T> T min2( const T& , const T& ) ;             // 错误： inline说明符的位置不正确

template <typename T> int compare2( const T &v1 , const T &v2 ){
    if( less<T>()( v1 , v2 ) ) return -1 ;
    if( less<T>()( v2 , v1 ) ) return 1 ;
    return 0 ;
}

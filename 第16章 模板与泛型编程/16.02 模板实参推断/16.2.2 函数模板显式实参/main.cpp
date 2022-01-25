// 本程序用于验证教材中16.2.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

template <typename T1,typename T2,typename T3> T1 sum( T2 lhs , T3 rhs ) ;
template <typename T> int compare( const T &lhs , const T &rhs ) ;

int main() {
    int i = 3 ;
    long lng = 5 ;
    long long val3 = sum<long long>( i , lng ) ;
    cout << val3 << endl;
  //compare( lng , 1024 ) ;                              // 错误：模板参数不匹配
    compare<long>( lng , 1024 ) ;                       // 正确：实例化compare( long , long )
    compare<int>( lng , 1024 ) ;                        // 正确：实例化compare( int , int )
    return 0;
}

template <typename T1,typename T2,typename T3> T1 sum( T2 lhs , T3 rhs ) {
    return lhs + rhs ;
}

template <typename T> int compare( const T &lhs , const T &rhs ) {
    if( less<T>()( lhs , rhs ) )
        return -1 ;
    if( less<T>()( rhs , lhs ) )
        return 1 ;
    return 0 ;
}

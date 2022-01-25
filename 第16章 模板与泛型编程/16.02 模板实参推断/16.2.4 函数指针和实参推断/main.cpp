// 本程序用于验证教材中16.2.4节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

template <typename T> int compare( const T &lhs , const T &rhs ) ;


int main() {
    int (*pf1)( const int & , const int & ) = compare ;        // 当然，直接注明int也行，pf1指向实例int compare( const int& , const int& ) ;

    void func( int(*)( const string &lhs , const string &rhs ) ) ;
    void func( int(*)( const int &lhs , const int &rhs ) ) ;

    func( compare ) ;                                            // 错误：二义性调用
    func( compare<int> ) ;                                       // 正确：显式指出使用某一个实例化版本
    func( pf1 ) ;
    return 0;
}

template <typename T> int compare( const T &lhs , const T &rhs ) {
    if( less<T>()( lhs , rhs ) )
        return -1 ;
    if( less<T>()( rhs , lhs ) )
        return 1 ;
    return 0 ;
}

void func( decltype( compare<int> ) ) { }                           // 这句话只是为了消除未定义设定的，无意义

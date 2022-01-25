// 本程序用于验证教材中16.1.3节内容的可靠性，并提供感性认知
#include "Sales_data.h"
#include "Numbers.h"

template <typename T> int calc( const T &lhs , const T &rhs ) ;
template <typename U> int calc( const U &lhs , const U &rhs ) ;

template <typename T>
typename T::value_type top( const T &c ) {                              // 原文用if-else语句有些繁琐，用条件运算符代替简单明了
    return ( !c.empty() ) ? c.back() : typename T::value_type() ;
}

template <typename T,typename F = less<T>>
int compare( const T &lhs , const T &rhs , F f = F() ) ;

int main() {
    cout << compare( 3 , 5 , greater<int>() ) ;
    bool i = compare( 0 , 42 ) ;
    cout << endl;
    Sales_data item1( cin ) , item2( cin ) ;
    bool j = compare( item1 , item2 , less<Sales_data>() ) ;               // compareIsbn不容易实现，现行定义了<运算符，这样less就有意义了
    cout << i << " " << j << " " << compare( 3 , 5 ) ;

    Numbers<long double> lots_of_precision ;
    Numbers<> average_precision ;                                          // <>表示使用默认类型
    return 0;
}

template <typename T,typename F>
int compare( const T &lhs , const T &rhs , F f ) {                           // 原文用if-else语句有些繁琐，用条件运算符代替简单明了
    if( f( lhs , rhs ) )
        return -1 ;
    if( f( rhs , lhs ) )
        return 1 ;
    return 0 ;
}

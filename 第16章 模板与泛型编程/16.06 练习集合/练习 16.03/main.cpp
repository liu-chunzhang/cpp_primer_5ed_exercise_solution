// 本程序用于验证读者在练习16.3中的想法，并在必要的地方予以说明
#include "Sales_data.h"

template <typename T> short compare( const T &lhs , const T &rhs ) ;

int main() {
    Sales_data data1 , data2 ;
    cout << compare( data1 , data2 ) << endl;                               // 会报错：因为compare用<比较两个对象，因此类型T需要事先定义<
    return 0;                                                               // 运算符，但可参考Sales_data类里没有定义此运算符
}

template <typename T> short compare( const T &lhs , const T &rhs ) {
    return ( less<T>()( lhs , rhs ) ) ? -1 : ( less<T>()( rhs , lhs ) ) ? 1 : 0 ;
}

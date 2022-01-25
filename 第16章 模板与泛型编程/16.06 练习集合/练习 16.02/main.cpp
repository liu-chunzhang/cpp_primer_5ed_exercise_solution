// 本程序用于验证读者在练习16.2中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

template <typename T> short compare( const T &lhs , const T &rhs ) ;                // 只在返回类型上选择了更能够节省空间的short

int main() {
    cout << compare( 3.6 , 5.7 ) << endl;
    cout << compare( 6.7 , 3.4 ) << endl;
    cout << compare( 3 , 3 ) << endl;
    return 0;
}

template <typename T> short compare( const T &lhs , const T &rhs ) {
    return ( less<T>()( lhs , rhs ) ) ? -1 : ( less<T>()( rhs , lhs ) ) ? 1 : 0 ;     // 用less保证可移植性，以及用问号运算符简化选择表达
}

// 本程序用于验证教材中6.1.0节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int factorial( int val ) ;

int main() {
    cout << "5!= " << factorial( 5 ) << endl;

    int i = factorial( 3 ) ;
    cout << i << endl;

    int j = factorial( "hello" ) ;                           // 错误：实参类型不正确！因为不能将const char*转化为int，所以此处调用会报错
    cout << j << endl ;
    int k = factorial( 42 , 10 , 0 ) ;                       // 错误：实参数量过多！
    cout << k << endl;
    int l = factorial( ) ;                                   // 错误：实参数量不足！
    cout << l << endl;
    int m = factorial( 3.14 ) ;                              // 正确：该实参可以转化为int类型，但是会进行窄化操作，此处等价于int m = factorial( 3 ) ;
    cout << m << endl;
    return 0;
}

int factorial( int val ) {                                   // factorial中译为“阶乘”
    int ret = 1 ;
    while( val > 1 )
        ret *= val-- ;
    return ret ;
}

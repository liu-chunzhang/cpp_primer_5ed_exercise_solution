// 本程序用于验证教材中6.2.1节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int factorial( int val ) ;
void reset( int *ip ) ;

int main() {
    int n = 0 ;
    int i = n ;
    i = 42 ;
    cout << i << " " << n << endl;

    int k = 5 ;
    cout << factorial( k ) << " " << k << endl;     // 这个例子说明，函数对于形参所作的任何操作都不影响实参

    int i2 = 42 ;
    cout << &i2 << endl;                            // 输出i的地址，与下面打印结果做比较
    reset( &i2 ) ;                                   // 改变了i的值，但是没改变i的地址
    cout << i2 << endl;
    cout << &i2 << endl;                            // 打印i的值证实这一点
    return 0;
}

int factorial( int val ) {
    if( val < 0 )
        return -1 ;
    int ret = 1 ;
    while( val != 0 )
        ret *= val-- ;
    return ret ;
}

void reset( int *ip ) {
    *ip = 0 ;
    ip = 0 ;
}

// 本程序用于验证读者在练习6.3中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int factorial ( int i ) ;

int main() {
    for( int j = 1 ; j != 10 ; ++j )
        cout << j << "!=" << factorial( j ) << endl;  // 打印一些结果表明构造函数的正确性
    return 0;
}

int factorial ( int i ) {
    int factorial = 1 ;
    if( i <= 0 )
        return 1 ;                              // 直接规定非正数的阶乘结果为1
    while( i > 1 )
        factorial *= i-- ;                       // 使用递增运算符的后置版本是因确有需要
    return factorial ;
}

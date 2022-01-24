// 本程序用于验证读者在练习6.4中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int factorial ( int i ) ;                                              // 此处的函数是从练习6.3直接拷贝过来的，相关注释略去

int main() {
    int j ;
    cout << "请输入一个正整数，本程序将给出其阶乘值：" << endl;
    cin >> j ;
    cout << j << "!=" << factorial( j ) << endl;                      // 打印结果表明构造函数的正确性
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

// 本程序用于验证教材中2.2.1节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    double price = 109.99 , discount = price * 0.16;     // 一次定义两个及更多的变量时，可以用先定义的变量值去初始化后定义的其他变量
    cout << discount << endl;

    int u = {0} , v{0} , w(0) ;                          // 此处尝试多种初始化形式
    cout << u << " " << v << " " << w << endl;

    long double ld = 3.1415926536 ;
    int a{ld} , b = {ld} ;                               // 虽然与教材上讲得不同，这里不会有错误，但是会有警告，因为long double的值
    int c(ld) , d = ld ;                                 // 初始化int时可能丢失数据
    cout << a << " " << b << " " << c << " " << d << endl ;
    return 0;
}

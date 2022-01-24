// 本程序用于验证教材中2.5.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    long double i1 = 3.00 ;
    double i2 = -3.00 ;
    auto i3 = i1 + i2 ;
    cout << i3 << " " << sizeof(i3) << endl;      // 输出为16，说明i3是long double类型，而不是int

    int i = 0 , *r = &i ;
    auto sz = 0 , pi = 3.14 ;                      // 错误：sz和pi的类型不一致！

    const int ci = i , &cr = ci;
    auto b = ci ;                                  // b是一个整数(ci的顶层const特性被忽略掉了)
    auto c = cr ;                                  // c也是一个整数(cr是ci的别名，ci本身是一个顶层const)
    auto d = &i ;                                  // d本身是一个整型指针（整数的地址就是指向整数的指针）
    auto e = &ci ;                                 // e是一个指向整数常量的指针（对常量对象取地址是一种底层const）

    const auto f = ci ;                           // ci的推演类型是int，f是const int

    auto &g = ci;                                  // g是一个整型常量引用，绑定到ci
    g = 3 ;
    auto &h = 42;                                  // 错误：不能为非常量引用绑定字面值
    const auto &j = 42 ;                          // 正确：可以为常量引用绑定字面值

    auto k = ci , &l = i ;                         // k是整数，l是整型引用
    auto &m = ci , *p = &ci ;                      // m是对整型常量的引用，p是指向整型常量的指针
    auto &n = i , *p2 = &ci ;                      // 错误：i的类型是int，而&ci的类型是const int
    return 0;
}

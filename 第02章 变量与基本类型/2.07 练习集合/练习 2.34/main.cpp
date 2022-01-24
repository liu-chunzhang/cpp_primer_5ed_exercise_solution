// 本程序用于验证读者在练习2.34中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    int i = 0 , &r = i ;
    auto a = r ;                             // a是一个整型变量
    const int ci = i , &cr = ci ;
    auto b = ci ;                            // b是一个整型变量(ci的顶层const特性被忽略掉了)，可以被改写
    auto c = cr ;                            // c是一个整型变量(cr是ci的别名，ci本身是一个顶层const)，可以被改写
    auto d = &i ;                            // d是一个整型指针
    auto e = &ci ;                           // e是一个指向整型常量的指针
    auto &g = ci ;                           // g是一个绑定到ci的整型常量的引用

    a = 42 ;
    b = 42 ;
    c = 42 ;
    d = 42 ;                                 // 错误：d是一个指针，赋整型字面值常量非法
    e = 42 ;                                 // 错误：d是一个指针，赋整型字面值常量非法
    g = 42 ;                                 // 错误：g是一个常量引用，改写非法
    return 0;
}

// 本程序用于验证读者在练习2.35中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    const int i = 42;                          // i是一个整型常量
    auto j = i ;                               // j是一个整型变量
    const auto &k = i ;                       // k是一个整型引用，由于与整型常量i绑定，从而是一个整型常量
    auto *p = &i ;                             // p是一个指向整型常量的指针
    const auto j2 = i , &k2 = i ;             // j2是一个整型常量，k2是一个整型引用，由于与整型常量i绑定，从而是一个整型常量

    cout << typeid( i ).name() << endl;       // typeid运算符允许向表达式提问：你的对象是什么类型？
    cout << typeid( j ).name() << endl;       // 姑且先记住这个运算这样使用是被允许的，它没有规定固定格式。
    cout << typeid( k ).name() << endl;       // 一些具体的返回值可以参考这个网址：
    cout << typeid( p ).name() << endl;       // https://blog.csdn.net/chenyiming_1990/article/details/8979260
    cout << typeid( j2 ).name() << endl;      // 具体到这个例子里，返回值i表示整型，P代表指针类型
    cout << typeid( k2 ).name() << endl;
    return 0;
}

// 本程序用于验证读者在练习2.20中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    int i = 42 , *p1 = &i ;           // 指针p1取得了整型变量i的地址
    *p1 = *p1 * *p1;                  // 将指针p1指向对象自乘的结果重新赋予指针p1指向的对象，*也可以作为乘法的运算符！
    cout << i << endl;
    return 0;
}

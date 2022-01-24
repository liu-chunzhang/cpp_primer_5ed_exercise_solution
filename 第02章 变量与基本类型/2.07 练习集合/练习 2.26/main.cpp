// 本程序用于验证读者在练习2.26中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    const int buf ;         // (a)是非法的，因为const对象一旦创建后其值不能够改变，所以const对象必须初始化！该句可修改为const int buf = 10
    int cnt = 4 ;            // (b)是合法的
    const int sz = cnt ;    // (c)是合法的，因为常数变量的常量特征仅仅在执行改变其数值时发挥作用
    ++cnt ;                  // (d)是非法的，因为常数变量不能够执行自增操作！
    ++sz ;
    return 0;
}

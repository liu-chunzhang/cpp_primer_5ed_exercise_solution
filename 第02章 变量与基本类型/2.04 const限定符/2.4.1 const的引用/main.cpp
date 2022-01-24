// 本程序用于验证教材中2.4.1节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;
int main()
{   const int ci = 1024 ;
    const int &r0 = ci ;         // 正确：引用及其对应的对象都是常量
    cout << r0 << endl;
  //r1 = 42 ;                     // 不正确：r1是对常量的引用

    /*
    int &r2 = ci ;                // 不正确：施图让一个非常量引用指向一个常量对象，类型不匹配
    cout << r2 << endl;
    */

    int i = 42 ;
    const int &r1 = i ;          // 允许将const int&绑定到一个普通int对象上
    const int &r2 = 42 ;         // r1是一个常量引用
    const int &r3 = r1 * 2 ;     // r3是一个常量引用
  //int &r4 = r1 * 2 ;            // r4是一个普通的非常量引用

    i = i * 2 ;
    cout << r1 ;                 // 这是我随手写出的一个实例：对const的引用可能引用了一个并非const的对象，如果r1真的应该是常量，那么应该输出42，但是答案
                                  // 是84，已经很说明问题了


    return 0;
}

// 本程序用于验证教材中2.4.3节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    int i = 0 ;
    int *const p1 = &i ;                // 常量指针：不能改变p1的值，这是一个顶层const
    const int ci = 42 ;                 // 常量：不能改变ci的值，这是一个顶层const
    const int *p2 = &ci;                // 指向常量的指针：允许改变指针本身的值，这是一个底层const
    const int *const p3 = p2 ;         // 靠右的是顶层const，靠左的是底层const
    const int &r = ci ;                 // 用于声明引用的const都是底层const

    /* 当执行对象的拷贝操作时，常量是顶层const还是底层const的区别明显。其中，顶层const不受什么影响*/
    i = ci ;                             // 正确：拷贝ci的值，ci是一个顶层const，对此操作无影响
    p2 = p3 ;                            // 正确：p2和p3指向的对象类型相同，p3顶层const的部分不影响

    /* 但是对于底层const的限制不能忽视。当执行对象的拷贝操作时，拷入和拷出的对象必须具有相同的底层const的资格，或者两个对象的数据类型必须能够转换！
       一般来说，非常量可以转换为常量，反之不可以*/

    int *p = p3 ;                        // 错误：p3包含底层const的定义，而p没有。
                                         // p3既是顶层const又是底层const，拷贝p3可以不在乎它是一个顶层const，但是必须清楚它指向的对象得是一个常量。
                                         // 因此，不能够用p3初始化p，因为后者指向的是一个普通整数！存放常量对象的地址，只能使用指向常量的指针！
    p2 = p3 ;                            // 正确：p2和p3都是底层const（尽管p3同时也是一个常量指针，顶层const，就这次赋值来讲，语法上无误）
    p2 = &i ;                            // 正确：int*能转化成const int*
    int &q = ci ;                        // 错误：普通的int&不能够绑定到int常量上
    const int &r2 = i ;                 // 正确：const int&可以绑定到一个普通int上
    return 0;
}

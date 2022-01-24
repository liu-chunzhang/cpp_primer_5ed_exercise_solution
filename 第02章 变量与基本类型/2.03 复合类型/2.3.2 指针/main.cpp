// 本程序用于验证教材中2.3.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    int ival = 42 ;
    int *p = &ival ;                           // p存放着变量ival的地址，或者说p是指向变量ival的指针；
    cout << *p << endl ;                      // 由符号*得到指针p所指的对象，输出42
    *p = 0 ;                                   // 由符号*得到指针p所指的对象，即可经由p为变量ival赋值
    cout << ival << endl ;                    // 输出0，“为*p赋值就是为p所指的对象进行赋值”
    system( "pause" );
    int *p1 = nullptr ;
    int *p2 = 0 ;
    int *p3 = NULL ;
    cout << *p1 << endl;
    cout << *p2 << endl;
    cout << *p3 << endl;

    //int zero = 0 ;                           // 将int变量直接赋给指针是错误的操作，即使int变量的值恰好为0也是不允许的！
    //p2 = zero;
    return 0;
}

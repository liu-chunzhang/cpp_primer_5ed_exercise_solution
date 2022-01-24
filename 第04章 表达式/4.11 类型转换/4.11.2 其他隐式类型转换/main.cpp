// 本程序用于验证教材中4.11.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    int i ;
    const int &j = i ;          // 允许将非常量类型的指针转换成指向相应类型的常量类型的指针
    const int *p = &i ;         // 对于引用也是这样
    int &r = j ;                 // 相反的转换不被允许，因为其试图删去底层const
    int *q = p ;
    cout << j << *p << endl;
    return 0;
}

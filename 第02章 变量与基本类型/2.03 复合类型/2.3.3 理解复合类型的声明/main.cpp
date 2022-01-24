// 本程序用于验证教材中2.3.3节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    int ival = 1024 ;
    int *pi = &ival ;
    int **ppi = &pi ;
    cout << "The value of ival\n"
         << "direct value: " << ival << "\n"                  // 这是直接输出变量ival的值
         << "indirect value: " << *pi << "\n"                 // 这是输出int型指针pi指向的值
         << "doubly indirect value: " << **ppi << endl;      // 这是两次解引用ppi，取得ival的值

    int i = 42 ;
    int *p ;                       // p是一个int型指针
    int *&r = p ;                  // r是一个对于指针p的引用
    r = &i ;                       // r引用了一个指针，因此给r赋值i的地址，就是令p指向i
    *r = 0 ;                       // 解引用r得到i，也就是p指向的对象，将i的值改为0，下面打印会打印出0
    cout << i ;
    return 0;
}

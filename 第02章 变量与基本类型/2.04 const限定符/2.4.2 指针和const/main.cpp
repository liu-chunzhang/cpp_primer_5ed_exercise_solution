// 本程序用于验证教材中2.4.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;
int main()
{   const double pi = 3.14 ;
  //double *ptr = &pi ;                 // 错误：ptr只是一个普通浮点型指针
    const double *cptr = &pi ;         // 正确：cptr是一个常量浮点型指针，和变量pi类型一致
  //*cptr = 42 ;                        // 不能够给*cptr赋值

    double dval = 24 ;                 // dval是一个双精度浮点数，它的值可以改变
    cptr = &dval ;                      // 正确：但是不能够通过cptr改变dval的值

    int errNumb = 0;
    int *const curErr = &errNumb ;     // curErr将一直指向errNumb
    const double pi = 3.14159 ;
    const double *const pip = &pi ;   // pip是一个指向常量对象的常量指针
    return 0;
}

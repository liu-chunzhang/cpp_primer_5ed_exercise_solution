// 本程序用于验证教材中2.3.1节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    int ival = 1024 ;
    int &refva1 = ival ;         // refva1指向ival
    //int &refva12;              // 可以去掉前面的双斜线试试，会报错：因为引用必须初始化！

    int i ;                      // 尽管引用必须初始化，但是初始化可以用没有正是初始化的变量去做！虽然不会报错，但是意义可能不再是原来想的那样子！
    int &j = i;
    cout << j << endl;

    cout << refva1 << endl;
    refva1 = 2 ;                 // 把2赋给refva1指向的对象，此处即是赋给了ival，为证明这一点，我特意在下面写了一个输出语句，其输出结果可以证明这一
    int ii = refva1 ;            // 点
    cout << ii << endl;

    /*
    int &re = 10 ;               // 错误，初始值类型必须是一个对象！
    double dval = 3.14 ;
    int &fe = dval ;             // 错误，引用类型的初始值通常与引用本身同型！
    */

    return 0;
}

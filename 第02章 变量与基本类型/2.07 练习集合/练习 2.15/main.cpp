// 本程序用于验证读者在练习2.15中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    int ival = 1.01 ;                            // (a)虽然是不被建议的窄化操作，但是不会报错甚至警告
    int &rval1 = 1.01 ;                          // (b)不合法。引用必须指向一个实际存在的对象而非是字面值常量
    int &rval2 = ival ;                          // (c)合法
    int &rval3 ;                                 // (d)引用必须初始化！
    cout << rval1 << rval2 << rval3 << endl;
    return 0;
}

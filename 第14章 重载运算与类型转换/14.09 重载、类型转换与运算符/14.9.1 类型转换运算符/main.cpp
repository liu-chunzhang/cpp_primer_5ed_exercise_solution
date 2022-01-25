// 本程序用于验证教材中14.9.1节内容的可靠性，并提供感性认知
#include "SmallInt.h"
#include "SmallInt2.h"

int main() {
    SmallInt si ;
    si = 4 ;                        // 首先将4隐式地转换为SmallInt，然后调用SmallInt::operator=
    cout << si + 3 << endl;        // 首先将si隐式地转换成int，然后执行整数的加法

    SmallInt si2 = 3.14 ;           // 内置类型转换将double先转换成int，再调用SmallInt(int)构造函数
    cout << si2 + 3.14 << endl;    // SmallInt的类型转换将si2转化成int，内置类型转换将所得的int继续转换成double

    SmallInt2 si3 = 3 ;
  //cout << si + 3 << endl;                             // 错误：此处需要显式的类型转换，但类的运算符是隐式的
    cout << static_cast<int>( si3 ) + 3 << endl;      // 正确：显示要求类型转换
    return 0;
}

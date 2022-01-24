// 本程序用于验证教材中4.11.1节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    bool flag ;      char cval ;
    short sval ;     unsigned short usval ;
    int ival ;       unsigned int uival ;
    long lval ;      unsigned long ulval ;
    float fval ;     double dval ;                       // typeid运算符返回非类类型和不包含任何虚函数的类的静态类型（更复杂的用法见教程P732-733）
    double a[5] ;                                         // t.name()返回一个C风格字符串，表示类型名字的可打印形式吧（见教程P735）
    cout << typeid( 3.14159L + 'a' ).name() << endl;     // e对应long double类型
    cout << typeid( dval + ival ).name() << endl;        // d对应double类型
    cout << typeid( dval + fval ).name() << endl;        // d对应double类型
    cout << typeid( ival = dval ).name() << endl;        // i对应(signed)int类型
    cout << typeid( flag = dval ).name() << endl;        // b对应bool类型
    cout << typeid( cval + fval ).name() << endl;        // f对应float类型
    cout << typeid( sval + cval ).name() << endl;        // i对应int类型：对应教材所讲整型提升的第一种情况
    cout << typeid( cval + lval ).name() << endl;        // l对应(signed)long(int)类型：对应教材所讲整型提升的第二种情况
    cout << typeid( ival + ulval ).name() << endl;       // m对应unsigned long(int)类型：对应教材所讲无符号类型的运算对象第一种情况
    cout << typeid( usval + ival ).name() << endl;       // i对应int类型：对应教材所讲无符号类型的运算对象第二种情况
    cout << typeid( uival + lval ).name() << endl;       // m对应unsigned long(int)类型：对应教材所讲无符号类型的运算对象第一种情况
    cout << typeid( a ).name() << endl;
    return 0;
}

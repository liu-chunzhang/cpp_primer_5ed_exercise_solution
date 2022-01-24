// 本程序用于验证教材中2.1.1节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main(){
    cout << "Size of bool :" << sizeof(bool) << endl;                    // sizeof 是一个关键字，它是一个编译时运算符，用于判断变量或数据类型的字节大小。
    cout << "Size of char : " << sizeof(char) << endl;                   // sizeof 运算符可用于获取类、结构、共用体和其他用户自定义数据类型的大小。
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;             // 使用 sizeof 的语法如下：
    cout << "Size of char16_t : " << sizeof(char16_t) << endl;           // sizeof (data type)
    cout << "Size of char32_t : " << sizeof(char32_t) << endl;           // 其中，data type 是要计算大小的数据类型，包括类、结构、共用体和其他用户自定义
    cout << "Size of short : " << sizeof(short) << endl;                 // 数据类型。
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of long : " << sizeof(long) << endl;
    cout << "Size of long long: " << sizeof(long long) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of long double : " << sizeof(long double) << endl;
    return 0;
}

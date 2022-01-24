// 本程序用于验证教材中2.2.4节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int reused = 42 ;                                // reuesd拥有全局作用域

int main() {
    int uni = 0 ;                                // uni拥有块作用域
    cout << reused << " " << uni << endl;        // 输出全局变量reuesd
    int reused = 24 ;                            // 新建局部变量reused，覆盖了全局变量reused
    cout << reused << " " << uni << endl;        // 输出局部变量reused的值
    cout << ::reused << " " << uni << endl;      // 显式地访问全局变量reused的值
    return 0;
}

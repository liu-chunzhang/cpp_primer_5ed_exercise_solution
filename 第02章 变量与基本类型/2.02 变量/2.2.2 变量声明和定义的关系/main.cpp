// 本程序用于验证教材中2.2.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;
extern double l = 3.45 ;                 // 在函数体外部，如果试图初始化一个由extern关键字标记的变量，将带来警告。
int main()
{   //extern double pi = 3.1416 ;         // 在函数体内部，如果试图初始化一个由extern关键字标记的变量，将引发错误！
    //cout << pi endl;
    cout << l << endl;
    return 0;
}

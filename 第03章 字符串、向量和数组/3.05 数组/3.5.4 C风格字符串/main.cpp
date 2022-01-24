// 本程序用于验证教材中3.5.4节内容的可靠性，并提供感性认知
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    /*
    char ca1[] = { 'c' , '+' , '+' };                           // 不以空字符结束
    char ca2[] = { 'c' , '+' , '+' , '\0' } ;                   // 以空字符结束
    cout << strlen( ca1 ) << " " << strlen( ca2 ) << endl;      // 严重错误：ca没有以空字符结束！但是这既不会报错，也没有警告！
    */

    /*
    string s1 = "A string example" ;
    string s2 = "A different string" ;
    if( s1 < s2 )                                  // 显然，就字符串之间的比较，s1>s2，所以实现else分支内容
        cout << "s1 < s2" << endl;
    else
        cout << "s2 <= s1" << endl;
    */

    /*
    const char ca1[] = "A string example" ;
    const char ca2[] = "A different string" ;

    if( ca1 > ca2 ){
        cout << "ca1 > ca2" << endl;                // 实际上，运行编译可以通过，无报错和警告，执行效果和上一段没什么区别
        cout << *( ca1 + 3 ) << endl;               // 也可以通过解引用获取字符串内的值
    }
    else
        cout << "ca1 <= ca2" << endl;
    if( strcmp( ca1 , ca2 ) > 0 )
        cout << "ca1 > ca2" << endl;
    const char ca3[] = "A string example" ;       // 使用char数组是其实真正用的是指向数组首元的指针
    if( ca1 == ca3 )
        cout << "1" ;
    */

    /*
    string largeStr0 = s1 + s2 ;
  //string largeStr00 = ca1 + ca2 ;
    char largeStr[50];                             // 变量largeStr的类型必须是char，不能是string，否则不能够调用下面的函数
    strcpy(largeStr , ca1) ;
    strcat(largeStr , " ") ;
    strcat(largeStr , ca2) ;
    cout << largeStr << endl;
    */

    return 0;
}

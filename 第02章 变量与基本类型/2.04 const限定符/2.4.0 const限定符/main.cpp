// 本程序用于验证教材中2.4节内容的可靠性，并提供感性认知
#include <iostream>
#include <stdio.h>
const int bufsize = 512 ;
using namespace std;
int main()
{   const int i = getchar();          // getchar()是C语言中的函数，C++中也包含了该函数。getchar()函数只能接收一个字符，其函数值就是从输入设备获取到的字符。
    const int j = 42 ;                // 1.getchar有一个int型的返回值（返回值是用户输入的字符的ASCII码）.当程序调用getchar时.程序就等着用户按键.
    //const int k ;                    // 2.用户输入的字符被存放在键盘缓冲区中.直到用户按回车为止(回车字符也放在缓冲区中).回车符也是字符，对应ASCII是10
    cout << i << " " << j << endl;    // 当用户键入回车之后,getchar才开始从stdio流中每次读入一个字符。若文件结尾则返回-1(EOF)，且将用户输入的字符回显到屏幕
                                       // 。如用户在按回车之前输入了不止一个字符，其他字符会保留在键盘缓存区中，等待后续getchar调用读取。也就是说，后续的
                                       // getchar调用不会等待用户按键，而直接读取缓冲区中的字符，直到缓冲区中的字符读完后，才等待用户按键。
                                       // 需要注意的一些事项：
                                       // 1.getchar函数的返回值是用户输入的第一个字符的ASCII码,如出错返回-1,且将用户输入的字符回显到屏幕.
                                       // 2.使用本函数前必须包含文件<stdio.h>。
                                       // 更多的内容可参考该网址：https://blog.csdn.net/YKbsmn/article/details/86762783
    int c1 = 42 ;
    const int c2 = c1 ;               // 本例说明允许用常数值赋值其他变量
    int c3 = c2;
    cout << c3 ;

    return 0;
}

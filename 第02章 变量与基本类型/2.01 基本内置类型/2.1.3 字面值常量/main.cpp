// 本程序用于验证教材中2.1.3节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    /*
    int i = 20 ;
    cout << i << endl;
    i = 024 ;
    cout << i << endl;
    i = 0x14;
    cout << i << endl;
    */

    /*
    char a = 'a' ;
    cout << sizeof(a) << endl;
    */

    /*
    string b = "12345678901234567890" ;             // string的实现在各库中可能有所不同，但是在同一库中相同一点是，无论你的string里放多长的字符串，
    cout << sizeof(b) << endl;                      // 它的sizeof()都是固定的，字符串所占的空间是从堆中动态分配的，与sizeof()无关。
    */                                              // 更多的叙述可以参考这个网址：https://www.cnblogs.com/wanghetao/archive/2012/04/04/2431760.html

    /*
    cout << b.length()<< endl;
    cout << "a really, really long string literal"  // 分多行书写的字符串字面值
             " that spans two lines." << endl;
    */

    cout << '\n' << endl;                          // 测试某些转义序列的意义
    cout << "\tHi!\n" << endl;

    cout << '\7' << endl;
    cout << "\x1234" << endl;
    return 0 ;
}

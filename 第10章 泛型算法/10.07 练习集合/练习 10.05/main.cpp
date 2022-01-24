// 本程序用于验证读者在练习10.5中的想法，并在必要的地方予以说明
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    char *p[] = { "Hello" , "world" , "!" } , *q[] = { strdup( p[0] ) , strdup( p[1] ) , strdup( p[2] ) } , *r[] = { p[0] , p[1] , p[2] } ;                                  //
    cout << equal( begin( p ) , end( p ) , q ) << endl;
    cout << equal( begin( p ) , end( p ) , r ) << endl;
    return 0;
}

// equal使用==运算符比较两个序列中的元素。string重载了==，可比较两字符串是否长度相等且其中元素对应位置相等。而C风格字符串的本质是char*类型用==
// 去比较两个char*对象，只是检查两个指针值是否相等，即地址是否相等，而不会比较其中字符是否相同。所以，只有当两个序列中的指针都指向相同的地址时，
// equal才会返回true，否则即使字符串内容完全相同也会返回false。
// strdup函数是c语言中常用的一种字符串拷贝库函数，一般和free函数成对出现。调用需要使用头文件<cstring>或<string.h>，原型是
//                                                  extern char *strdup(char *s);
// 功能是将串拷贝到新建的位置处。strdup()在内部调用了malloc()为变量分配内存，不需要使用返回的字符串时，需要用free()释放相应的内存空间，否则会造
// 成内存泄漏。

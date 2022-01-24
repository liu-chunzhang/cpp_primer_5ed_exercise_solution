// 本程序用于验证读者在练习3.39中的想法，并在必要的地方予以说明：比较两个C风格字符串
#include <iostream>
#include <cstring>                                                                        // 第一个不同之处：比较两个C风格字符串必须使用cstring
using namespace std;                                                                    // 头文件定义的strcmp函数，而标准库string定义了关系运算符

int main() {
    char str1[100] , str2[100] ;
    cout << "请输入要比较的两个字符串，中间用空格隔开，且不要超过100字符：" << endl;     // 第二个不同之处，使用字符串必须在运行前限定大小
    cin >> str1 >> str2 ;
    int result = strcmp( str1 , str2 ) ;
    switch( result ){                                                                    // 此处用strcmp函数的结果运行switch语句，关于这个语句
           case 1:                                                                       // 的一般使用可以见教材5.3.2节
               cout << str1 << ">" << str2 << endl;
               break;
           case -1:
               cout << str1 << "<" << str2 << endl;
               break;
           case 0:
               cout << str1 << "=" << str2 << endl;
               break;
           default:
               cout << "未定义的结果。" << endl;
               break;
    }
    return 0;
}

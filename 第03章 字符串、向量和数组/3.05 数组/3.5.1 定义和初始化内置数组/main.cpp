// 本程序用于验证教材中3.5.1节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

constexpr size_t get_size() ;

int main() {
    /*
    unsigned cnt = 42 ;                // 不是常量表达式
    constexpr unsigned sz = 42 ;       // 是常量表达式
    int arr[10];                       // 含有10个整数的数组
    int *parr[sz];                     // 含有42个整型指针的数组
    string bad[cnt];                   // 虽然不会报错与警告，但是cnt不是常量表达式！
    string strs[get_size()];
    */

  //int a[2]={0,1,2};                  // 错误：初始值过多！
  //const char a4[6] = "Daniel" ;      // 错误：没有空间可存放空字符！

    /*
    int a[] = {0 , 1 , 2} ;
    int a2[] = a ;                     // 错误：不允许用一个数组初始化另一个数组！
    a = a2 ;                           // 错误：不能把一个数组直接赋值给另一个数组！
    */


    /*
    int ptrs[10] ;                     // 如果改为int *ptrs[10]，下面将发生错误，因为下面指的是具有10个整数的数组
    int *p[10] ;                       // p是一个存放了10个整型指针的数组
    int &refs[10]     ;                // 引用不是对象，所以不存在引用的数组
    int (*Parray)[10] = &ptrs ;        // Parray指向了一个含有10个整数的数组
    int (&arrRef)[10] = ptrs ;         // arrRef引用了一个含有10个整数的数组
    int *(&arry)[10] = ptrs;           // arry是含有10个整型指针的数组的引用
    */

    return 0;
}

constexpr size_t get_size() {
    return 10 ;
}

// 本程序用于验证读者在练习2.21中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    int i = 3 ;
    double* dp = &i;                      // dp是一个double指针，而i是一个int型变量，两者类型不匹配
    int *ip = i;                          // 不能将一个int变量赋值给int指针，正确的做法是取地址运算&i得到变量i在内存的地址，然后再将地址
                                          // 赋给指针，正如下一行写得那样。
    int *p = &i;
    return 0;
}

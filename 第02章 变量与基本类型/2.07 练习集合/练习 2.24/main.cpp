//本程序用于验证读者在练习2.24中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    int i = 42;
    void *p = &i;                      // void*是一种特殊的类型指针，可用于存放任意对象的地址
    long *lp = &i;                   // lp是一个long int型指针，与int型变量i的类型不匹配
    return 0;
}

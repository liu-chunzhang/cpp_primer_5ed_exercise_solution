// 本程序用于验证读者在练习2.18中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    int i1 = 0 , i2 = 0 , *p1 = &i1 , *p2 = &i2 ;
    cout << p1 << " " << p2 << endl;                // 打印两个指针的地址，以便与后面作比较
    p1 = p2;                                         // 将i2的地址赋给p1，再打印p1的地址，可以与第一次打印结果对照，实现了改变指针的值
    cout << p1 << endl;
    cout << i2 << endl;                             // 再打印i2的值，以便与下面的输出做对比
    *p1 = 5 ;                                        // 由于上面p1已经是i2的地址了，所以直接修改指针p1所指的指针的值，就是修改i2的值
    cout << i2 ;                                     // 打印i2的值，与前面的输出做对比
    return 0;
}

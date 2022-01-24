// 本程序用于验证读者在练习2.31中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    const int v2 = 0 ;
    int v1 = v2 ;
    int *p1 = &v1 , &r1 = v1 ;
    const int *p2 = &v2 , *const p3 = &v2 , &r2 = v2 ;   // p2是一个底层const

    r1 = v2 ;                                             // 正确：r1是一个非常量引用，v2是一个顶层const，拷贝操作没有影响
    p1 = p2 ;                                             // 错误：p1是一个普通指针，指向的对象可以是任何值；p2是指向常量的指针，底层const。
                                                          // 非常量可以转换为常量，反之不可以！
    p2 = p1 ;                                             // 正确：p2可以指向一个非常量，只不过我们不会通过p2更改它所指的值
    p1 = p3 ;                                             // 错误：p3包含底层const定义，p3所指的对象是常量，不能够把p3的值赋给其他指针
    p2 = p3 ;                                             // 正确：p2和p3具有相同的底层const资格（p3的顶层const资格不妨碍这一点）
    return 0;
}

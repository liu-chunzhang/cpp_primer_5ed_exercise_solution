// 本程序用于验证读者在练习2.36中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    int a = 3 , b = 4 ;
    decltype( a ) c = a ;                                       // c是整型变量
    decltype(( b )) d = a ;                                     // d是整型引用，与a绑定
    ++c ;                                                        // c和其他变量无关，只是单独执行自增操作
    ++d ;                                                        // d是a的别名，所以d执行自增操作，a同样执行
    cout << a << " " << b << " " << c << " " << d << endl;      // 预计输出4 4 4 4
    return 0;
}

// 本程序用于验证读者在练习2.37中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    int a = 3 , b = 4 ;
    decltype( a ) c = a ;                                       // c只是一个整型变量
    decltype( a = b ) d = a ;                                   // d是a的整型引用
    cout << a << " " << b << " " << c << " " << d << endl;      // 输出应该为3 4 3 3
    return 0;
}

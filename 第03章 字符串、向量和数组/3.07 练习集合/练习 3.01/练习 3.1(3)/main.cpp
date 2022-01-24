// 本程序用于验证读者在练习3.1中的想法，并在必要的地方予以说明：重做1.4.1节练习1.11
// 本程序的目的是提示用户输入两个整数，打印这两个整数所指定范围内的所有整数
// 练习1.11个人稍微加强了一点：允许用户输入整数强化到允许输入双精度浮点数,但是不会在两数相等时给出任何结果
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << "本程序将输出一系列用户实现给定的两个整数内的一切整数，并打印出来，请输入：" << endl;
    int i1 , i2 ;
    cin >> i1  >> i2 ;
    int v1 = std::max( i1 , i2 ) , v2 = std::min( i1 , i2 );
    while( v1 >= v2 )
        cout << v1-- << endl;
    return 0;
}

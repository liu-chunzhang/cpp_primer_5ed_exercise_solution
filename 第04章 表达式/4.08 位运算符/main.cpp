// 本程序用于验证教材中4.8节内容的可靠性，并提供感性认知
#include <iostream>
#include <bitset>                                   // bitset类文件定义在头文件bitset中（参考教材17.2节）
using namespace std;

int main() {

    unsigned int i1 = 0233 ;                       // 回顾一下：以0开头的整数代表八进制数（教材P35）
    bitset<32> bitset1{ i1 } ;                     // 此处用bitset包内的函数体现位运算进行后的结果
    cout << bitset1 << endl;

    unsigned int i2 = 0233 << 8 ;                 // 此处用32位位运算表示，<< 8 表示向左移动8位
    bitset<32> bitset2{ i2 } ;
    cout << bitset2 << endl;

    unsigned int i3 = 0233 << 25 ;                // 初始化左移动时，如果溢出时会有警告，但不会报错
    bitset<32> bitset3{ i3 } ;
    cout << bitset3 << endl;

    /*
    unsigned int i4 = 0233 >> 1 ;                 // 初始化右移动时，溢出不会报错和警告
    bitset<32> bitset4{i4} ;
    cout << bitset4 << endl;
    */

    /*
    unsigned int i5 = 0233 ;
    bitset<32> bitset5{i5} ;
    cout << ~bitset5 << endl;                     // 此处检验位求反运算符效果
    */

    /*
    unsigned char b1 = 0145 , b2 = 0257 ;        // 此处检验位与、位或、位异或运算符的效果
    bitset<8> bitset6{b1 & b2} ;
    cout << bitset6 << endl;                     // 对于位与运算符，如果两个运算对象对应位置都是1，则运算结果该位为1，否则为0
    bitset<8> bitset7{b1 | b2} ;
    cout << bitset7 << endl;                     // 对于位或运算符，如果两个运算对象对应位置至少有一个是1，则运算结果该位为1，否则为0
    bitset<8> bitset8{b1 ^ b2} ;
    cout << bitset8 << endl;                     // 对于位与运算符，如果两个运算对象有且仅有是1，则运算结果该位为1，否则为0
    */

    /*
    unsigned long quiz1 = 0 ;
    quiz1 |= 1UL << 27 ;
  //quiz1 &= ~(1UL << 27) ;
    bool status = quiz1 & (1UL << 27) ;
        cout << status << endl;

    cout << 42 + 10 ;                             // 正确：+的优先级更高，因此输出求和结果
    cout << ( 42 > 10 ) ;                         // 正确：因为关系运算符优先级低于移位运算符，所以想实现原意，必须加括号
  //cout << 10 < 42 ;                             // 错误：试图比较cout和42！
    */

    return 0;
}

// 本程序用于验证教材中3.1节内容的可靠性，并提供感性认知
#include <iostream>
using std::cin;                              // 通过下列using声明，我们可以使用标准库中的名字。在这个程序中，一开始就有对cin、cout和endl的
using std::cout;                             // using声明，意味着不必再添加std::形式就能够直接使用它们。不过要注意，用到的每个名字都必须有
using std::endl;                             // 自己的语句声明，并且每句话都得以分号结束

int main() {
    cout << "请键入两个数字：" << endl;
    double v1 , v2 ;
    cin >> v1 >> v2 ;
    cout << "这两个数的和为" << v1 + v2 << "。" << endl;
    return 0;
}

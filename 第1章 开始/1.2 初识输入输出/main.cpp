// 本程序用于验证教材中1.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    cout << "请输入两个双精度浮点数：" << endl;
    double v1 = 0 , v2 = 0 ;
    cin >> v1 >> v2 ;
    cout << "这两个数字的和为" << v1 + v2 <<  "。" << endl;
    return 0;
}

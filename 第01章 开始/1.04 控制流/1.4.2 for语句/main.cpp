// 本程序用于验证教材中1.4.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for( int i = 1 ; i <= 10 ; ++i )                            // 从1加到10，此处循环变量用i代替了教材中的val
        sum += i ;                                              // 等价于sum = sum + i
    cout << "自然数1加到10的和为" << sum << "。" << endl;
    return 0;
}

// 本程序用于验证教材中1.4.1节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    int sum = 0 , val = 1;
    while ( val <= 10 ){                            // 只要val的值小于等于10，while循环就会持续执行
        sum += val ;                                // 将sum + val 赋给sum
        ++val ;                                     // val自增(将val加1)
    }
    cout << "自然数1加到10的和为" << sum << "。" << endl;
    return 0;
}

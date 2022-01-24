// 本程序用于验证教材中3.5.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    unsigned scores[11] = {} , grade ;      // 11个分数段，全部初始化为0
    while( cin >> grade )
        if( grade <= 100 )
            ++scores[grade/10] ;             // 当前分数段的计数值+1
    for( unsigned u : scores )              // 对于scores中的每个计数值
        cout << u << " " ;                  // 输出当前的计数值
    return 0;
}

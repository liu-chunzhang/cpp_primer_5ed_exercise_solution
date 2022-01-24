// 本程序用于验证教材中8.1.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std ;

int main() {
    int ival ;
    cin >> ival ;

    iostream::iostate old_state = cin.rdstate() ;                    // 记住cin的当前状态
    cin.clear() ;                                                    // 使cin有效
    cin >> ival ;                                                     // 使用cin
    cin.setstate( old_state ) ;                                      // 将cin置为原有状态

    cin.clear( cin.rdstate() & ~cin.failbit & ~cin.badbit ) ;       // 复位failbit和badbit，保持其他标志位不变
    return 0;
}

// 本程序用于验证教材中8.1.3节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    cout << "Hi!" << endl;
    cout << "Hi!" << ends;
    cout << "Hi!" << flush;

    cout << unitbuf ;
    cout << nounitbuf ;

    cin.tie( &cout ) ;                              // 标准库将cin和cout关联在一起
    ostream *old_tie = cin.tie( nullptr ) ;         // old_tie关联到当前cin的流（如果有的话），cin不再与其他流有关联
    cin.tie( &cerr ) ;                              // 这句话将cin和cout关联
    cin.tie( old_tie ) ;                            // 重建cin和cout之间的关联
    return 0;
}

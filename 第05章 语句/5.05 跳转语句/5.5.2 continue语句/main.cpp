// 本程序用于验证教材中5.5.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    string buf ;
    while( cin >> buf && !buf.empty() )
        if( buf[0] != '_' ){
           cout << buf << " " ;
           continue ;
           cout << buf << " " ;             // 若前面没有下划线，则可以打印一次，由于有continue，所以第二次无法打印
        }
    return 0;
}

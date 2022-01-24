// 本程序用于验证教材中2.2.3节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int _a2 = 3 ;

int main() {
    int __3 = 0 ;             // 其实，变量名也是一种标识符，可以出现连续的两个下划线
    cout << __3 << endl;
    double _A3 = 4 ;          // 变量名也允许下划线紧连大写字母
    cout << _A3 << endl;

    /*
    int 3A = 6；              // 标识符必须以字母和下划线开头！
    cout << 3A << endl;
    */

    int _ = 5 ;
    cout << _ ;
    return 0;
}

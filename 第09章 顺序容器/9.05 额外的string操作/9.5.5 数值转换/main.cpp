// 本程序用于验证教材中9.5.5节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    int i = 42 ;
    string s = to_string( i ) ;
    double d = stod( s ) ;
    cout << s << " " << d << endl;

    string s2 = "pi = 3.14g" ;
    d = stod( s2.substr( s2.find_first_of( "+-.0123456789" ) ) ) ;  // 转换s中以数字开始的第一个字串，结果d = 3.14
    cout << d << endl;
    return 0;
}

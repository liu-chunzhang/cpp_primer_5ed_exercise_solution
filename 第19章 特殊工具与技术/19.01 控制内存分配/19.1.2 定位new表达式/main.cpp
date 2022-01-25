// 本程序用于验证教材中19.1.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    string *sp = new string( "a value" ) ;
    sp->~string() ;
    delete sp ;
    return 0;
}

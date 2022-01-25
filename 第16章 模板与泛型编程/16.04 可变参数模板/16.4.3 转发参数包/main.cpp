// 本程序用于验证教材中16.4.3节内容的可靠性，并提供感性认知
#include "StrVec.h"

int main() {
    StrVec svec ;
    string s1 = "hello" , s2 = "world" ;
    svec.emplace_back( 10 , 'c' ) ;
    svec.emplace_back( s1 + s2 ) ;
    cout << svec[0] << endl << svec[1] << endl;
    return 0;
}

// 本程序用于验证教材中3.2.1节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    string s1 ;
    string s2{ s1 } ;
    string s3 = "hiya" ;                                               // 拷贝初始化
    string s4( 10 , 'c' ) ;                                                // 直接初始化
    string s5( "value" );                                                // 直接初始化
    string s6 = "value" ;
    return 0;
}

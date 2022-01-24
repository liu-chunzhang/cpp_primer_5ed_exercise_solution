// 本程序用于验证教材中5.1节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> svec{ "Welcome " , "to " , "C++ " , "family" , "!" } ;
    vector<string>::iterator iter = svec.begin() ;
    while( iter != svec.end() ) ;                                          // 逻辑上严重错误：在while语句后跟的分号使得while循环体一直在执行空语句！
        ++iter ;
    return 0;
}

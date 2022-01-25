// 本程序用于验证教材中14.8.0节内容的可靠性，并提供感性认知
#include <algorithm>
#include <vector>
#include "absInt.h"
#include "PrintString.h"

int main() {
    int i = -42 ;
    absInt absObj ;
    int ui = absObj( i ) ;
    cout << ui << endl;

    string s = "hiya" ;
    PrintString printer ;                  // 使用默认值，打印到cout
    printer( s ) ;                         // 在cout中打印string变量s内容，后面跟一个空格
    PrintString errors( cerr , '\n' ) ;
    errors( s ) ;                          // 在cerr中打印string变量s内容，后面跟一个空格

    vector<string> svec = { "a" , "an" , "the" } ;
    for_each( svec.cbegin() , svec.cend() , PrintString( cout , '\t' ) ) ;
    return 0;
}

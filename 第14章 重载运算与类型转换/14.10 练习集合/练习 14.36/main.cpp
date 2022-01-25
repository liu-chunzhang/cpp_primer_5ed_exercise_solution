// 本程序用于验证读者在练习14.36中的想法，并在必要的地方予以说明
#include <fstream>
#include <vector>
#include "PrintString2.h"

int main() {
    vector<string> svec ;
    string str ;
    ifstream in( "data.txt" ) ;
    PrintString2 ps2( in ) ;
    while( in )
        svec.push_back( ps2() ) ;
    for( const string &s : svec )              // 此处打印语句用来检验程序的正确性
        cout << s << endl;
    return 0;
}

// // 即使某行列输入信息为空，我们照样储存进vector，因为题干不要求规避空元素存在

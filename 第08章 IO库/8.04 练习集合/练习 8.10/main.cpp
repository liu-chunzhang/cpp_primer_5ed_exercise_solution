// 本程序用于验证读者在练习8.10中的想法，并在必要的地方予以说明
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    vector<string> vstr ;
    ifstream istr( "data.txt" ) ;               // 打开文件
    string str ;

    if( !istr ) {
        cerr << "无法打开输入文件！" << endl;
        return -1 ;
    }

    while( getline( istr , str ) ) {             // 从文件中读取一行
        vstr.push_back( str ) ;                 // 添加到vector中
    }
    istr.close() ;                               // 输入完毕，关闭文件

    for( const string &line : vstr ){          // 此处使用范围for语句控制循环
        istringstream istr2( line ) ;            // 如果此处使用从流读取的istream，将无法输出有效信息，因为i是string类型，应该由istring
        while( istr2 >> str )                   // stream类型读取
            cout << str << " " ;
        cout << endl;
    }
    return 0;
}

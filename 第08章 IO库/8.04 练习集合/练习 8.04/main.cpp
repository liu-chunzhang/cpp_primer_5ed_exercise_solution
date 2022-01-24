// 本程序用于验证读者在练习8.4中的想法，并在必要的地方予以说明
#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
using namespace std;

static vector<string> svec ;

int main() {
    ifstream in( "data.txt" ) ;                                                       // 一定要保证确实有同名文件在同一个文件夹里，否则程序
    if( !in ){                                                                        // 只会真的去执行if语句！
        cerr << "无法打开输入文件！" << endl;
        return -1 ;
    }
    string str ;
    while( getline( in , str ) )
        svec.push_back( str ) ;
    in.close() ;

    copy( svec.cbegin() , svec.cend() , ostream_iterator<string>( cout , "\n" ) ) ; // 这里是检验程序正确性的语句
    return 0;
}

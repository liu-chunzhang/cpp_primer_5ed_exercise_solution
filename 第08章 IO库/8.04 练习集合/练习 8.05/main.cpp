// 本程序用于验证读者在练习8.5中的想法，并在必要的地方予以说明
#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream in( "data.txt" ) ;
    if( !in ){
        cerr << "无法打开输入文件！" << endl;
        return -1 ;
    }
    string str ;
    vector<string> svec ;
    while( in >> str )
        svec.push_back( str ) ;
    in.close() ;

    copy( svec.cbegin() , svec.cend() , ostream_iterator<string>( cout , " " ) ) ;
    return 0;
}




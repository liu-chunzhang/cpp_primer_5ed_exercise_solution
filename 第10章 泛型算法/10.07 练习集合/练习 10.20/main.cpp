// 本程序用于验证读者在练习10.21中的想法，并在必要的地方予以说明
#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> svec ;
    string str ;
    ifstream in( "data.txt" ) ;
    while( in >> str )
        svec.push_back( str ) ;
    cout << "我们的文本文件中长度超过6字符的单词数为" << count_if( svec.begin() , svec.end() , []( const string &s ) -> bool { return s.size() > 6 ? true : false ; } ) << endl;
    return 0;
}


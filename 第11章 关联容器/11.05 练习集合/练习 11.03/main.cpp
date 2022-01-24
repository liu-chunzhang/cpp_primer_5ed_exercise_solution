// 本程序用于验证读者在练习11.3中的想法，并在必要的地方予以说明
#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main() {
    map<string,size_t> str_num ;
    ifstream in( "data.txt" ) ;
    string str ;
    while( in >> str )
        ++str_num[ str ] ;
    for( const pair<string,size_t> &i : str_num )
        cout << "单词" << i.first << "出现了" << i.second << "次。" << endl;
    return 0;
}

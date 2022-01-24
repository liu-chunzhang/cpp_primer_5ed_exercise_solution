// 本程序用于验证读者在练习11.4中的想法，并在必要的地方予以说明
#include <iostream>
#include <fstream>
#include <map>
using namespace std;

string &trans( string &s ) ;

int main() {
    map<string,size_t> str_num ;
    ifstream in( "data.txt" ) ;
    string str ;
    while( in >> str )
        ++str_num[ trans(str) ] ;
    for( const pair<string,size_t> &i : str_num )
        cout << "单词" << i.first << "出现了" << i.second << "次。" << endl;
    return 0;
}

string &trans( string &s ){
    for( char &c : s )
        c = tolower( c ) ;
    size_t strsize = s.size() ;
    for( size_t u = 0 ; u != strsize ; ++u )        // 删节字符会导致函数size的值发生变化，所以要提前记录
        if( ispunct( s[u] ) )
            s.erase( u , 1 ) ;      // 这属于string的特殊操作
    return s ;
}

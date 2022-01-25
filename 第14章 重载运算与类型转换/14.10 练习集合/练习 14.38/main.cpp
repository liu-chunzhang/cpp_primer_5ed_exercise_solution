// 本程序用于验证读者在练习14.38中的想法，并在必要的地方予以说明
#include <algorithm>
#include <fstream>
#include <iterator>
#include <vector>
#include "SizeCompare.h"

string &trans( string &s ) ;

int main() {
    ifstream in( "data.txt" ) ;
    vector<string> svec ;
    string str ;
    while( in >> str )
        svec.push_back( trans( str ) ) ;
    stable_sort( svec.begin() , svec.end() , []( const string &a , const string &b ) -> bool { return a.size() < b.size() ; } ) ;
    size_t sz = 0 ;
    for( vector<string>::const_iterator iter = svec.cbegin() ; iter != svec.cend() ; ++sz ){
        vector<string>::const_iterator iter2 = find_if_not( iter , svec.cend() , SizeCompare( sz ) ) ;
        cout << "长度为" << sz << "的单词有" << iter2 - iter << "个。" ;                             // 打印确认程序的正确性，可以解封查看
        copy( iter , iter2 , ostream_iterator<string>( cout , " " ) ) ;                       // 为了简洁高效，使用输出流迭代器+泛
        cout << endl;                                                                               // 型算法
        iter = iter2 ;
    }
    return 0;
}

string &trans( string &s ) {
    for( char &c : s )
        c = tolower( c ) ;
    size_t temp = s.size() ;
    for( size_t u = 0 ; u != temp ; ++u )
        if( ispunct( s[u] ) )
            s.erase( u , 1 ) ;
    return s ;
}

// 整个程序思路是先排序，再比较使用文件流输入，提高效率

// 本程序用于验证读者在练习14.39中的想法，并在必要的地方予以说明
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
    vector<string>::const_iterator iter = find_if_not( svec.cbegin() , svec.cend() , SizeCompare( 9 ) ) ;
    cout << "长度为1~9的单词有" << iter - svec.cbegin() << "个。" << endl;                             // 由于输出只需要两部分，不必写循环
    cout << "长度为10及以上的单词有" << svec.cend() - iter << "个。" << endl;
    copy( iter , svec.cend() , ostream_iterator<string>( cout , " " ) ) ;
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

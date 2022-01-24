// 本程序用于验证读者在练习11.38中的想法，并在必要的地方予以说明：用unordered_map重写单词计数程序
#include <iostream>
#include <fstream>
#include <unordered_map>
using namespace std;

string &trans( string &s ) ;

int main() {
    unordered_map<string,size_t> word_count ;
    string word ;
    ifstream in( "data.txt" ) ;
    while( in >> word )
        ++word_count[ trans( word ) ] ;
    for( const auto &w : word_count )
        cout << w.first << " occurs " << w.second << ( ( w.second > 1 ) ?  " times." : " time." ) << endl;
    return 0;
}

string &trans( string &s ){
    for( char &c : s )
        c = tolower( c ) ;
    size_t temp = s.size() ;
    for( size_t u = 0 ; u != temp ; ++u )
        if( ispunct( s[u] ) )
            s.erase( u , 1 ) ;
    return s ;
}

// ������������֤��������ϰ11.38�е��뷨�����ڱ�Ҫ�ĵط�����˵������unordered_map��д���ʼ�������
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

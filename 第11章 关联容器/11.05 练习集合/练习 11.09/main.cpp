// ������������֤��������ϰ11.9�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <fstream>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <sstream>
using namespace std;

string &trans( string &s ) ;

int main() {
    ifstream in( "data.txt" ) ;
    map<string,list<int>> word_lineNo ;                       // map�Ķ���Ϊ��map<string,list<int>> word_lineNo ;
    string line , word ;
    for( unsigned lineNo = 1 ; getline( in , line , in.widen( '\n' ) ) ; ++lineNo ){
        istringstream lin( line ) ;
        while( lin >> word )
            word_lineNo[ trans( word ) ].push_back( lineNo ) ;
    }
    for( const pair<string,list<int>> &w : word_lineNo ){
        cout << w.first << "�����У�" ;
        copy( w.second.cbegin() , w.second.cend() , ostream_iterator<int>( cout , " " ) ) ;
        cout << endl;
    }
    return 0;
}

string &trans( string &s ) {
    for( char &c : s )
        c = tolower( c ) ;
    size_t temp = s.size() ;
    for( size_t p = 0 ; p != temp  ; ++p )
        if( ispunct( s[p] ) )
            s.erase( p , 1 ) ;
    return s ;
}

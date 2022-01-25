// ������������֤��������ϰ17.27�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <fstream>
#include <iostream>
#include <regex>
using namespace std;

bool valid( sregex_iterator sit ) ;

int main() {
    regex r( "(\\d{5})([-. ])?(\\d{4})?" ) ;
    string fmt = "$1-$3" , str ;
    ifstream in( "data.txt" ) ;
    if( !in ){
        cerr << "δ����ȷ���ļ���" << endl;
        return -1 ;
    }
    while( getline( in , str ) )
        for( sregex_iterator it( str.begin() , str.end() , r ) , end_it ; it != end_it ; ++it )
            cout << ( valid( it ) ?  ( *it ).format( fmt ) : ( *it ).str() ) << endl;
    return 0 ;
}

bool valid( sregex_iterator sit ) {
    if( !( *sit )[2].matched )
        return true ;
    else
        return ( *sit )[2] == '-' || ( *sit )[2] == ' ' || ( *sit )[2] == '.' ;
}

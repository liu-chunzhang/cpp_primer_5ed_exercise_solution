// ������������֤��������ϰ14.39�е��뷨�����ڱ�Ҫ�ĵط�����˵��
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
    cout << "����Ϊ1~9�ĵ�����" << iter - svec.cbegin() << "����" << endl;                             // �������ֻ��Ҫ�����֣�����дѭ��
    cout << "����Ϊ10�����ϵĵ�����" << svec.cend() - iter << "����" << endl;
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

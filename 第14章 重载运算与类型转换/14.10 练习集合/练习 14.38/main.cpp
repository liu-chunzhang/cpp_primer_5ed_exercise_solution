// ������������֤��������ϰ14.38�е��뷨�����ڱ�Ҫ�ĵط�����˵��
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
        cout << "����Ϊ" << sz << "�ĵ�����" << iter2 - iter << "����" ;                             // ��ӡȷ�ϳ������ȷ�ԣ����Խ��鿴
        copy( iter , iter2 , ostream_iterator<string>( cout , " " ) ) ;                       // Ϊ�˼���Ч��ʹ�������������+��
        cout << endl;                                                                               // ���㷨
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

// ��������˼·���������ٱȽ�ʹ���ļ������룬���Ч��

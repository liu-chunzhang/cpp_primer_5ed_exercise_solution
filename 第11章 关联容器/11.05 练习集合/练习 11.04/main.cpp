// ������������֤��������ϰ11.4�е��뷨�����ڱ�Ҫ�ĵط�����˵��
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
        cout << "����" << i.first << "������" << i.second << "�Ρ�" << endl;
    return 0;
}

string &trans( string &s ){
    for( char &c : s )
        c = tolower( c ) ;
    size_t strsize = s.size() ;
    for( size_t u = 0 ; u != strsize ; ++u )        // ɾ���ַ��ᵼ�º���size��ֵ�����仯������Ҫ��ǰ��¼
        if( ispunct( s[u] ) )
            s.erase( u , 1 ) ;      // ������string���������
    return s ;
}

// ������������֤��������ϰ11.20�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <fstream>
#include <map>
using namespace std;

string &trans( string &s ) ;

int main() {
    map<string,size_t> str_num ;
    ifstream in( "data.txt" ) ;
    string str ;
    while( in >> str ){
        pair<map<string,size_t>::iterator,bool> ret = str_num.insert( { trans( str ) , 1 } ) ;
        if( !ret.second )
            ++ret.first->second ;
    }
    for( const pair<string,size_t> &i : str_num )
        cout << "����" << i.first << "������" << i.second << "�Ρ�" << endl;
    return 0;
}

string &trans( string &s ){
    for( char &c : s )
        c = tolower( c ) ;
    for( size_t u = 0 ; u < s.size() ; ++u )
        if( ispunct( s[u] ) )
            s.erase( u , 1 ) ;
    return s ;
}

// ʹ��insert�����ķ�ʽ�ǣ�����һ��pair(����,1)����insert�����������������һ��pair���������Ѵ��ڣ��򷵻�pair��second��ԱΪfalse����ʾ����ʧ�ܣ�
// ����Ա����Ҫͨ������pair��first��Ա�����������������е��ʵļ��������жϵ����Ƿ���ڣ���������Ӧ�����Ĺ�����ȫ���ɳ���Ա�Լ�����ġ�
// ʹ���±�����ķ�ʽ�ǣ��Ե���Ϊ�±��ȡԪ��ֵ���������Ѵ��ڣ�����ȡ�����е�ֵ�������±������pair(����,0)������������ȡ����Ԫ�ص�ֵ��������
// ���Ѿ����ڵ���ش�����ȫ�����±��������ģ�����Ա���ع��ģ�ֱ�ӷ�����ȡ����ֵ�����ˡ�
// ���ɣ����ڵ�ǰ������ԣ��±����һ�Ǽ�࣬�����׶����Ǹ��õ�д����

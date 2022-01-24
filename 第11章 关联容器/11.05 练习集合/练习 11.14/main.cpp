// ������������֤��������ϰ11.14�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <map>
#include <vector>
using namespace std;        // ��ʵ������⣬д���ڶ���ĳ�������˼·��Ϊ����

void add_family( map<string,vector<pair<string,string>>> &families , const string &family ) ;
void add_child( map<string,vector<pair<string,string>>> &families , const string &family , const pair<string,string> &child  ) ;

int main() {
    map<string,vector<pair<string,string>>> families ;
    add_family( families , "��" ) ;
    add_child( families , "��" , pair<string,string>( "��" , "1998.12.25" ) ) ;
    add_child( families , "��" , pair<string,string>( "ͳ" , "1997.12.25" ) ) ;
    add_child( families , "Ǯ" , pair<string,string>( "�巽" , "1996.12.25" ) ) ;
    add_family( families , "Ǯ" ) ;
    for( const auto &f : families ) {
        cout << f.first << "�ҵĺ����У�" ;
        for( const auto &c : f.second )
            cout << f.first+c.first << "(���գ�" << c.second << ") " ;
        cout << endl;
    }
    return 0;
}

void add_family( map<string,vector<pair<string,string>>> &families , const string &family ){
    if( families.find( family ) == families.end() )
        families[ family ] = vector<pair<string,string>>() ;
}

void add_child( map<string,vector<pair<string,string>>> &families , const string &family , const pair<string,string> &child  ){
    families[ family ].push_back( { child.first , child.second } ) ;
}

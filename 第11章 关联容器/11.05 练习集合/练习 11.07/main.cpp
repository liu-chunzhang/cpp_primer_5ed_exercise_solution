// ������������֤��������ϰ11.7�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <map>
#include <vector>
using namespace std;

void add_family( map<string,vector<string>>& , const string& ) ;
void add_child( map<string,vector<string>>& , const string& , const string& ) ;

int main()
{   map<string,vector<string>> families ;
    add_family( families , "��" ) ;
    add_child( families , "��" , "��" ) ;
    add_child( families , "��" , "ܲ" ) ;
    add_child( families , "Ǯ" , "ΰ��" ) ;
    add_family( families , "Ǯ" ) ;
    for( const auto &f : families ) {
        cout << f.first << "�ҵĺ����У�" ;
        for( const string &c : f.second )
            cout << c << " " ;
        cout << endl;
    }
    return 0;
}

void add_family( map<string,vector<string>>& families , const string& family ){
    if( families.find(family) == families.end() )
        families[ family ] = vector<string>() ;
}

void add_child( map<string,vector<string>>& families , const string& family , const string& child ){
    families[ family ].push_back( child ) ;
}

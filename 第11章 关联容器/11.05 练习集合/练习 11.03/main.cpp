// ������������֤��������ϰ11.3�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main() {
    map<string,size_t> str_num ;
    ifstream in( "data.txt" ) ;
    string str ;
    while( in >> str )
        ++str_num[ str ] ;
    for( const pair<string,size_t> &i : str_num )
        cout << "����" << i.first << "������" << i.second << "�Ρ�" << endl;
    return 0;
}

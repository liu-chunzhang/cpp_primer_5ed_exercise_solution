// ������������֤��������ϰ10.21�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> svec ;
    string str ;
    ifstream in( "data.txt" ) ;
    while( in >> str )
        svec.push_back( str ) ;
    cout << "���ǵ��ı��ļ��г��ȳ���6�ַ��ĵ�����Ϊ" << count_if( svec.begin() , svec.end() , []( const string &s ) -> bool { return s.size() > 6 ? true : false ; } ) << endl;
    return 0;
}


// ������������֤��������ϰ10.9�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print( vector<string>& ) ;
void elimDups( vector<string>& ) ;

int main() {
    vector<string> svec ;                      // �ṩһ����������ܵĺþ��ӣ�Can you can a can as a canner can can a can ?
    string str ;
    while( cin >> str )
        svec.push_back( str ) ;
    print( svec ) ;
    elimDups( svec ) ;
    print( svec ) ;
    return 0;
}

void print( vector<string> &svec ){
    for( const string &str : svec )
        cout << str << " " ;
    cout << endl;
}

void elimDups( vector<string>& svec ){
    sort( svec.begin() , svec.end() ) ;
    vector<string>::iterator end_unique = unique( svec.begin() , svec.end() ) ;
    svec.erase( end_unique , svec.end() ) ;
}

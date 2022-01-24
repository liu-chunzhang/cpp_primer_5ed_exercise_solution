// ������������֤��������ϰ10.11�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print( vector<string>& ) ;
void elimDups( vector<string>& ) ;
bool isShorter( const string& , const string& ) ;

int main() {
    vector<string> svec ;                                      // ����ʹ��Can you can a can as a canner can can a can ?����������
    string str ;
    while( cin >> str )
        svec.push_back( str ) ;
    print( svec ) ;
    elimDups( svec ) ;
    print( svec ) ;
    stable_sort( svec.begin() , svec.end() , isShorter ) ;
    print( svec ) ;
    return 0;
}

void print( vector<string> &svec ){
    for( const string &str : svec )
        cout << str << " " ;
    cout << endl;
}

void elimDups( vector<string> &svec ){
    sort( svec.begin() , svec.end() ) ;
    vector<string>::iterator end_unique = unique( svec.begin() , svec.end() ) ;
    svec.erase( end_unique , svec.end() ) ;
}

bool isShorter( const string &s1 , const string &s2 ){
    return s1.size() < s2.size() ;
}

// ������������֤��������ϰ9.47�е��뷨�����ڱ�Ҫ�ĵط�����˵������find_first_not_of���
#include <iostream>
using namespace std;

void findNumbers( const string &target ) ;

int main() {
    string target_str( "ab2c3d7R4E6" ) ;
    findNumbers( target_str ) ;
    return 0;
}

void findNumbers( const string &target ){
    const string refer = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
    for( string::size_type pos = target.find_first_not_of( refer , 0 ) ; pos != string::npos ; pos = target.find_first_not_of( refer , pos ) )
        cout << target[pos++] << " " ;
}

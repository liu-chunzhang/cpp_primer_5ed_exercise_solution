// ������������֤�̲���11.3.0�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <fstream>
#include <map>
#include <set>
using namespace std;

int main() {
    set<string>::value_type v1( "hello world!" ) ;          // v1��һ��string
    set<string>::key_type v2( "welcome to C++ family!" ) ;   // v2��һ��string
    map<string,int>::value_type v3( "hiya" , 3 ) ;          // v3��һ��pair<const string,int>
    map<string,int>::key_type v4( "good work" ) ;            // v4��һ��string
    v4 = "hello" ;
    map<string,int>::mapped_type v5( 5 ) ;                   // v5��һ��int
    return 0;
}

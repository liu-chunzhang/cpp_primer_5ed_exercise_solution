// 本程序用于验证教材中11.3.0节内容的可靠性，并提供感性认知
#include <iostream>
#include <fstream>
#include <map>
#include <set>
using namespace std;

int main() {
    set<string>::value_type v1( "hello world!" ) ;          // v1是一个string
    set<string>::key_type v2( "welcome to C++ family!" ) ;   // v2是一个string
    map<string,int>::value_type v3( "hiya" , 3 ) ;          // v3是一个pair<const string,int>
    map<string,int>::key_type v4( "good work" ) ;            // v4是一个string
    v4 = "hello" ;
    map<string,int>::mapped_type v5( 5 ) ;                   // v5是一个int
    return 0;
}

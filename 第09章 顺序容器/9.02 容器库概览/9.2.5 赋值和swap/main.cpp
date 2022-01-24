// 本程序用于验证教材中9.2.5节内容的可靠性，并提供感性认知
#include <array>
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    array<int,10> a1 = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    array<int,10> a2 = { 0 , 2 , 4 , 7 } ;
    a1 = a2 ;
    a2 = { 3 } ;
    for( const int i : a2 )
        cout << i << " " ;

    list<string> names ;
    vector<const char*> oldstyle ;
  //names = oldstyle ;                                      // 错误：两者类型不匹配
    names.assign( oldstyle.cbegin() , oldstyle.cend() ) ;

    list<string> slst( 1 ) ;
    slst.assign( 10 , "Hiya!" ) ;

    vector<string> svec1( 10 , "hiya" ) , svec2( 42 , "hello" ) ;
    swap( svec1 , svec2 ) ;

    return 0;
}

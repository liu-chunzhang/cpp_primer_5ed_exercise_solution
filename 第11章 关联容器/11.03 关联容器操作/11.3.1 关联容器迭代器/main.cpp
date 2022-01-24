// 本程序用于验证教材中11.3.1节内容的可靠性，并提供感性认知
#include <iostream>
#include <fstream>
#include <map>
#include <set>
using namespace std;

int main() {
    map<string,int> word_count{ { "hello" , 3 } } ;
    map<string,int>::iterator map_it = word_count.begin() ;
    cout << map_it->first << " " << map_it->second << endl;
  //map_it->first = "new key" ;                                                // 关键字是const的
    ++map_it->second = 3 ;                                                     // 可以通过迭代器改变元素

    set<int> iset = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    set<int>::iterator set_it = iset.begin() ;
    if( set_it != iset.end() ){
  //    *set_it = 42 ;                                                         // set中的关键字仅仅是可读的
        cout << *set_it << endl;
    }

    map<string,unsigned> word_count2 ;
    ifstream in( "data.txt" ) ;
    string str ;
    while( in >> str )
        ++word_count2[str] ;                                                   // 为简化书写，用for循环代替了教材上的while循环
    for( map<string,unsigned>::const_iterator map_it = word_count2.cbegin() ; map_it != word_count2.cend() ; ++map_it )
        cout << map_it->first << " occurs " << map_it->second << ( ( map_it->second == 1 ) ? " time." : " times." ) << endl;

    return 0;
}

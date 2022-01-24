// 本程序用于验证教材中11.3.2节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

void print( set<int> &iset ) ;

int main() {
    vector<int> ivec = { 2 , 4 , 6 , 8 , 2 , 4 , 6 , 8 } ;
    set<int> set2 ;
    set2.insert( ivec.cbegin() , ivec.cend() ) ;
    print( set2 ) ;
    set2.insert( { 1 , 3 , 5 , 7 , 1 , 3 , 5 , 7 ,} ) ;
    print( set2 ) ;

    map<string,size_t> word_count ;
    string word = "hello world!" ;
    word_count.insert( { word , 1 } ) ;
    word_count.insert( make_pair( word , 1 ) ) ;
    word_count.insert( pair<string,int>( word , 1 ) ) ;
    word_count.insert( map<string,size_t>::value_type( word , 1 ) ) ;

    map<string,size_t> word_count2 ;                                                            // 从string到size_t的空map
    string word2 ;
    while( cin >> word2 ){
        pair<map<string,size_t>::iterator,bool> ret = word_count2.insert( { word2 , 1 } ) ;  // 插入一个元素，关键字等于word，值为1；若word
        if( !ret.second )                                                                        // 已在word_count中，则其什么也不做。
            ++ret.first->second ;                                                                // 而若ret->second是false，则说明没有发生插入操
    }                                                                                            // 作，需要在以前有的相应位置补充自增操作。

    multimap<string,string> authors ;
    authors.insert( { "Barth, John" , "Sot-Weed Factor" } ) ;
    authors.insert( { "Barth, John" , "Lost in the Funhouse" } ) ;                               // 正确：multimap允许相同关键字出现多次
    return 0;
}

void print( set<int> &iset ){
    for( const int i : iset )
        cout << i << " " ;
    cout << endl;
}

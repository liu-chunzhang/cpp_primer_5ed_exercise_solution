// 本程序用于验证教材中11.1节内容的可靠性，并提供感性认知
#include <iostream>
#include <fstream>
#include <map>
#include <set>
using namespace std;

int main() {
    map<string,size_t> word_count ;
    string word ;
    ifstream in( "data.txt" ) ;                                                 // 为了提高输入效率，用文本输入代替标准输入
    while( in >> word )
        ++word_count[ word ] ;                                                  // 提取word的计数器并执行自增操作
    for( const pair<string,size_t> &w : word_count )
        cout << w.first << " occurs " << w.second << ( ( w.second > 1 ) ?  " times." : " time." ) << endl;

    set<string> exclude = { "The" , "But" , "And" , "Or" , "An" , "A" , "the" , "but" , "and" , "or" , "an" , "a" , } ;
    ifstream in2( "data.txt" ) ;
    while( in2 >> word )
        if( exclude.find( word ) == exclude.end() )                             // 只统计不在exclude中的元素
            ++word_count[ word ] ;
    for( const pair<string,size_t> &w : word_count )                          // 对map中的每个元素
        cout << w.first << " occurs " << w.second << ( ( w.second > 1 ) ?  " times." : " time." ) << endl;
    return 0;
}

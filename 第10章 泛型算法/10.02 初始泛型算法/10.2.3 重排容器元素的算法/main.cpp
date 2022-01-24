// 本程序用于验证教材中10.2.3节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void elimDups( vector<string>& ) ;

int main() {
    vector<string> svec = { "the" , "quick" , "red" , "fox" , "jumps" , "over" , "the" , "slow" , "red" , "turtle" } ;
    for( const string &s : svec )
        cout << s << " " ;
    cout << endl;
    elimDups( svec ) ;
    for( const string &s : svec )
        cout << s << " " ;
    return 0;
}

void elimDups( vector<string>& words ){
    sort( words.begin() , words.end() ) ;                                                   // 按字典序排序words，以便查找重复单词
    for( const string &i : words )
        cout << i << " " ;
    cout << endl;
    vector<string>::iterator end_unique = unique( words.begin() , words.end() ) ;        // unique重排输入范围，使得每个单词只出现一次
    for( const string &i : words )                                                         // 排列在范围的前部，返回指向不重复区域之后一个
        cout << i << " " ;                                                                  // 位置的的迭代器
    cout << endl;
    words.erase( end_unique , words.end() ) ;                                               // 使用vector操作删除重复单词
}

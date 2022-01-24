// 本程序用于验证教材中10.3.1节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isShorter( const string &s1 , const string &s2 ) ;
void elimDups( vector<string> &words ) ;

int main() {
    vector<string> words = { "the" , "quick" , "red" , "fox" , "jumps" ,  "over" , "the" , "slow"  , "red" , "turtle"  } ;
    sort( words.begin() , words.end() , isShorter ) ;
    for( const string& s : words )
        cout << s << " " ;
    cout << endl;
    elimDups( words ) ;
    stable_sort( words.begin() , words.end() , isShorter ) ;
    for( const string& s : words )
        cout << s << " " ;
    cout << endl;
    return 0;
}

bool isShorter( const string& s1 , const string& s2 ){
    return s1.size() < s2.size() ;
}

void elimDups( vector<string> &words ){
    sort( words.begin() , words.end() ) ;
    vector<string>::iterator iter = unique( words.begin() , words.end() ) ;
    words.erase( iter , words.end() ) ;
}

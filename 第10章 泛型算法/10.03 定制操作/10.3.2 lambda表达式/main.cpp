// 本程序用于验证教材中10.3.2节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isShorter( const string &s1 , const string &s2 ) ;
void elimDups( vector<string> &svec ) ;
void biggies( vector<string>& , vector<string>::size_type ) ;
auto f = []() -> int { return 42 ; } ;
string make_plural( size_t , const string& , const string& ) ;

int main() {
    cout << f() << endl;

    vector<string> words = { "the" , "quick" , "red" , "fox" , "jumps" ,  "over" , "the" , "slow"  , "red" , "turtle"  } ;
    biggies( words , 4 ) ;
    return 0;
}

bool isShorter( const string &s1 , const string &s2 ){
    return s1.size() < s2.size() ;
}

void elimDups( vector<string> &words ){
    sort( words.begin() , words.end() ) ;
    vector<string>::iterator iter = unique( words.begin() , words.end() ) ;
    words.erase( iter , words.end() ) ;
}

void biggies( vector<string>& words , vector<string>::size_type sz ){
    elimDups( words ) ;
    stable_sort( words.begin() , words.end() , isShorter ) ;
    vector<string>::iterator wc = find_if( words.begin() , words.end() , [sz]( const string& a ){ return a.size() >= sz ; } ) ;
    size_t count_num = words.end() - wc ;
    cout << count_num << " " << make_plural( count_num , "word" , "s" ) << " of length " << sz << " or longer" << endl;
    for_each( wc , words.end() , []( const string &s ){ cout << s << " " ; } ) ;
    cout << endl;
}

string make_plural( size_t ctr , const string &word, const string &ending ){
    return ( ctr == 1 ) ? word : word + ending ;
}

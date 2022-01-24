// 本程序用于验证读者在练习10.18中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void elimDups( vector<string> &words ) ;
void biggies( vector<string> &words , vector<string>::size_type sz ) ;
string make_plural( size_t cnt , const string &word , const string &ending ) ;

int main() {
    vector<string> svec = { "the" , "quick" , "red" , "fox" , "jumps" , "over" , "the" , "slow"  , "red" , "turtle"  } ;
    biggies( svec , 4 ) ;
    return 0;
}

string make_plural( size_t ctr , const string &word, const string &ending ){
    return ( ctr == 1 ) ? word : word + ending ;
}

void elimDups( vector<string> &words ){
    sort( words.begin() , words.end() ) ;
    vector<string>::iterator iter = unique( words.begin() , words.end() ) ;
    words.erase( iter , words.end() ) ;
}

void biggies( vector<string> &words , vector<string>::size_type sz ){
    elimDups( words ) ;
    vector<string>::iterator iter = stable_partition( words.begin() , words.end() , []( const string &s ){ return s.size() >= 4 ; } ) ;    // ()>=sz的元素，同时排为字典序
    size_t count_num = iter - words.cbegin() ;
    cout << count_num << " " << make_plural( count_num , "word" , "s" ) << " of length " << sz << " or longer" << endl;
    for_each( words.begin() , iter , []( const string& s ) -> void { cout << s << " " ; } ) ;
}

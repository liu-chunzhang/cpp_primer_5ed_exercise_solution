// 本程序用于验证读者在练习10.13中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool strlenGreat5( const string &s ) ;

int main() {
    vector<string> words = { "the" , "quick" , "red" , "fox" , "jumps" ,  "over" , "the" , "slow"  , "red" , "turtle"  } ;
    vector<string>::const_iterator iter =  partition( words.begin() , words.end() , strlenGreat5 ) ;
    for( vector<string>::const_iterator iter2 = words.cbegin() ; iter2 != iter ; ++iter2 )
        cout << *iter2 << " " ;
    return 0;
}

bool strlenGreat5( const string &s ) {
    return s.size() >= 5 ;
}

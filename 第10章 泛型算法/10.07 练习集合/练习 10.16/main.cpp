// 本程序用于验证读者在练习10.16中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void elimDups( vector<string> &svec ) ;
void biggies( vector<string> &svec , vector<string>::size_type sz ) ;
string make_plural( size_t cnt , const string &word , const string &ending ) ;

int main() {
    vector<string> svec = { "welcome" , "to" , "C++" , "family" , "eternal" , "love" } ;
    biggies( svec , 4 ) ;
    return 0;
}

string make_plural( size_t ctr , const string &word , const string &ending ){
    return ( ctr == 1 ) ? word : word + ending ;
}

void elimDups( vector<string> &words ){
    sort( words.begin() , words.end() ) ;
    vector<string>::iterator iter = unique( words.begin() , words.end() ) ;
    words.erase( iter , words.end() ) ;
}

void biggies( vector<string> &words , vector<string>::size_type sz ){
    elimDups( words ) ;
    stable_sort( words.begin() , words.end() , []( const string &a , const string &b ) -> bool { return a.size() < b.size() ; } ) ;
    vector<string>::iterator wc = find_if( words.begin() , words.end() , [sz]( const string& a ){ return a.size() >= sz ; } ) ;
    size_t count_num = words.end() - wc ;
    cout << count_num << " " << make_plural( count_num , "word" , "s" ) << " of length " << sz << " or longer" << endl;
    stable_sort( wc , words.end() ) ;
    for_each( wc , words.end() , []( const string &s ){ cout << s << " " ; } ) ;
}

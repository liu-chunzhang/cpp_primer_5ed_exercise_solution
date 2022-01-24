// 本程序用于验证读者在练习10.25中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders ;

void elimDups( vector<string> &words ) ;
string make_plural( size_t cnt , const string &word , const string &ending ) ;
bool check_size( const string &s , string::size_type sz ) ;
ostream &print( ostream &out , const string &s , char c ) ;
void biggies( vector<string> &words , vector<string>::size_type sz , ostream &out ) ;

int main() {
    vector<string> svec = { "the" , "quick" , "red" , "fox" , "jumps" , "over" , "the" , "slow"  , "red" , "turtle"  } ;
    biggies( svec , 4 , cout ) ;
    return 0;
}

void elimDups( vector<string> &words ){
    sort( words.begin() , words.end() ) ;
    vector<string>::iterator iter = unique( words.begin() , words.end() ) ;
    words.erase( iter , words.end() ) ;
}

string make_plural( size_t ctr , const string &word , const string &ending ){
    return ( ctr == 1 ) ? word : word + ending ;
}

bool check_size( const string &s , string::size_type sz ){
    return s.size() >= sz ;
}

ostream &print( ostream &out , const string &s , char c ){
    return out << s << c ;
}

void biggies( vector<string> &words , vector<string>::size_type sz , ostream &out ){
    elimDups( words ) ;
    vector<string>::iterator iter =  partition( words.begin() , words.end() , bind( check_size , _1 , sz ) ) ;
    size_t count_num = iter - words.cbegin() ;
    cout << count_num << " " << make_plural( count_num , "word" , "s" ) << " of length " << sz << " or longer" << endl;
    stable_sort( words.begin() , iter ) ;
    for_each( words.begin() , iter , bind( print , ref(out) , _1 , ' ' ) ) ;
}

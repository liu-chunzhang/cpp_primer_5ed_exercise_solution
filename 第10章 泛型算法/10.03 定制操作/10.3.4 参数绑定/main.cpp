// 本程序用于验证教材中10.3.4节内容的可靠性，并提供感性认知
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool check_size( const string &s , string::size_type sz ) ;
auto check6 = bind( check_size , _1 , 6 ) ;
void elimDups( vector<string> &words ) ;
string make_plural( size_t ctr , const string &word, const string &ending ) ;
ostream &print( ostream &out , const string &s , char c ) ;
void biggies( vector<string> &words , vector<string>::size_type sz , ostream &out ) ;

int main() {

    string s = "hello" ;
    bool b1 = check6( s ) ;
    if( !b1 )
        cout << "The length of string s is less than 6." << endl;

    vector<string> svec ;
    string str ;
    ifstream in( "data.txt" ) ;
    while( in >> str )
        svec.push_back( str ) ;
    biggies( svec , 6 , cout ) ;

    return 0;
}

bool check_size( const string &s , string::size_type sz ){
    return s.size() >= sz ;
}

void elimDups( vector<string> &words ) {
    sort( words.begin() , words.end() ) ;
    vector<string>::iterator iter = unique( words.begin() , words.end() ) ;
    words.erase( iter , words.end() ) ;
}

string make_plural( size_t ctr , const string &word, const string &ending ) {
  return ( ctr == 1 ) ? word : word + ending ;
}

ostream &print( ostream &out , const string &s , char c ){
    return out << s << c ;
}

void biggies( vector<string> &words , vector<string>::size_type sz , ostream &out ){
    elimDups( words ) ;
    stable_sort( words.begin() , words.end() , []( const string &a , const string &b ) -> bool { return a.size() < b.size() ; } ) ;
    vector<string>::iterator wc = find_if( words.begin() , words.end() , bind( check_size , _1 , sz ) ) ;
    size_t count_num = words.end() - wc ;
    cout << count_num << " " << make_plural( count_num , "word" , "s" ) << " of length " << sz << " or longer" << endl;
    for_each( wc , words.end() , bind( print , ref( out ) , _1, ' ' ) );    // 函数ref返回一个对象，包含给定的引用
    cout << endl;
}

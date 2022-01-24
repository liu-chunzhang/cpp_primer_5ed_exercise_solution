// 本程序用于验证读者在练习10.22中的想法，并在必要的地方予以说明
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool check_size( const string& , string::size_type ) ;
auto check7_not = bind( check_size , _1 , 6 ) ;
void elimDups( vector<string>& ) ;
string make_plural( size_t , const string& , const string& ) ;
bool isShorter( const string& , const string& ) ;
ostream& print( ostream& , const string& , char ) ;
void biggies( vector<string>& , vector<string>::size_type , ostream& ) ;

int main()
{   ifstream in( "data.txt" ) ;
    string str ;
    vector<string> svec ;
    while( in >> str )
        svec.push_back( str ) ;
    biggies( svec , 6 , cout ) ;
    return 0;
}

bool check_size( const string& s , string::size_type sz ){
    return s.size() > sz ;
}

void elimDups( vector<string>& words ){
    sort( words.begin() , words.end() ) ;
    vector<string>::iterator iter = unique( words.begin() , words.end() ) ;
    words.erase( iter , words.end() ) ;
}

string make_plural( size_t ctr , const string& word, const string& ending ){
  return ( ctr < 2 ) ? word : word + ending ;
}

bool isShorter( const string& a , const string& b ) {
    return a.size() < b.size() ;
}

ostream& print( ostream& out , const string& s , char c ){
    return out << s << c ;
}

void biggies( vector<string>& words , vector<string>::size_type sz , ostream& out ){
    elimDups( words ) ;
    stable_sort( words.begin() , words.end() , isShorter ) ;
    vector<string>::iterator wc = find_if( words.begin() , words.end() , check7_not ) ;           // wc返回的使check7_not成true的第一个值，
    size_t count0 = wc - words.cbegin() ;                                                           // 但是因为从0开始计数，所以不必-1
    cout << count0 << " " << make_plural( count0 , "word" , "s" )
                                              << " of length " << sz << " or shorter" << endl;
  for_each( words.begin() , wc , bind( print , ref(out) , _1 , ' ' ) );
}

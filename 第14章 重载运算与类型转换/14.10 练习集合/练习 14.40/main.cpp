// 本程序用于验证读者在练习14.40中的想法，并在必要的地方予以说明
#include <algorithm>
#include <fstream>
#include <vector>
#include "ShorterString.h"
#include "SizeCompare.h"
#include "PrintString.h"

void elimDups( vector<string> &words ) ;
void biggies( vector<string> &words , vector<string>::size_type sz ) ;
string make_plural( size_t ctr , const string &word, const string &ending ) ;

int main() {
    ifstream in( "data.txt" ) ;
    vector<string> svec ;
    string str ;
    while( in >> str )
        svec.push_back( str ) ;
    biggies( svec , 10 ) ;
    return 0;
}

void elimDups( vector<string> &words ){
    sort( words.begin() , words.end() ) ;
    vector<string>::iterator iter = unique( words.begin() , words.end() ) ;
    words.erase( iter , words.end() ) ;
}

void biggies( vector<string> &words , vector<string>::size_type sz ) {
    elimDups( words ) ;
    stable_sort( words.begin() , words.end() , ShorterString() ) ;                                // 这里进行了修改
    vector<string>::iterator wc = find_if( words.begin() , words.end() , SizeCompare( sz ) ) ;  // 这里进行了修改
    size_t count_num = words.end() - wc ;
    cout << count_num << " " << make_plural( count_num , "word" , "s" ) << " of length " << sz << " or longer" << endl;
    for_each( wc , words.end() , PrintString() ) ;                                                            // 这里进行了修改
    cout << endl;
}

string make_plural( size_t ctr , const string &word, const string &ending ){
  return ( ctr == 1 ) ? word : word + ending ;
}

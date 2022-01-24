// 本程序用于验证教材中11.3.3节内容的可靠性，并提供感性认知
#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main() {
    map<string,size_t> word_count ;
    ifstream in( "data.txt" ) ;
    string str ;
    while( in >> str )
        ++word_count[str] ;
    string remove_word = "and" ;
    if( word_count.erase( remove_word ) )
        cout << "ok: " << remove_word << " removed." << endl;
    else
        cout << "oops: " << remove_word << " not found!" << endl;

    ifstream in2( "data.txt" ) ;
    multimap<string,size_t> word_count2 ;
    while( in2 >> str )
        word_count2.insert( { str , 1 } );
    string remove_word2 = "and" ;
    cout << word_count2.erase( remove_word2 ) << remove_word2 << " removed." << endl;
    return 0;
}


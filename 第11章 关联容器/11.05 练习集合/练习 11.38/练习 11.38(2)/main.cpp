// 本程序用于验证教材中11.38节内容的可靠性，并提供感性认知：用unordered_map重写单词转换程序
#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
using namespace std;

const string &transform( const string &s , const unordered_map<string,string> &m ) ;
unordered_map<string,string> buildMap( ifstream &map_file ) ;
void word_transform( ifstream &map_file , ifstream &input ) ;

int main() {
    ifstream rules( "rules.txt" ) , text( "text.txt" ) ;
    word_transform( rules , text ) ;
    return 0;
}

const string &transform( const string &s , const unordered_map<string,string> &m ){
    unordered_map<string,string>::const_iterator miter = m.find( s ) ;
    return miter != m.cend() ? miter->second : s ;
}

unordered_map<string,string> buildMap( ifstream &map_file ){
    unordered_map<string,string> trans_map ;
    string key , value ;
    while( map_file >> key && getline( map_file , value ) )
        if( value.size() > 1 )
            trans_map[key] = value.substr( 1 ) ;
        else
            throw runtime_error( "no rule for " + key ) ;
    return trans_map ;
}

void word_transform( ifstream &map_file , ifstream &input ){
    unordered_map<string,string> trans_map = buildMap( map_file ) ;
    string text ;
    while( getline( input , text ) ){
        istringstream stream( text ) ;
        string word ;
        bool firstword = true ;
        while( stream >> word ){
            if( firstword )
                firstword = false ;
            else
                cout << " " ;
            cout << transform( word , trans_map ) ;
        }
        cout << endl;
    }
}

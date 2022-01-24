// 本程序用于验证读者在练习10.9中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print( vector<string>& ) ;
void elimDups( vector<string>& ) ;

int main() {
    vector<string> svec ;                      // 提供一个检验程序功能的好句子：Can you can a can as a canner can can a can ?
    string str ;
    while( cin >> str )
        svec.push_back( str ) ;
    print( svec ) ;
    elimDups( svec ) ;
    print( svec ) ;
    return 0;
}

void print( vector<string> &svec ){
    for( const string &str : svec )
        cout << str << " " ;
    cout << endl;
}

void elimDups( vector<string>& svec ){
    sort( svec.begin() , svec.end() ) ;
    vector<string>::iterator end_unique = unique( svec.begin() , svec.end() ) ;
    svec.erase( end_unique , svec.end() ) ;
}

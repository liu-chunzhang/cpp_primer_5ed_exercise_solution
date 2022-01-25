// 本程序用于验证读者在练习17.24中的想法，并在必要的地方予以说明
#include <fstream>
#include <iostream>
#include <regex>
using namespace std;

bool valid( const smatch &s ) ;
bool bracevalid( const smatch &s ) ;
bool prefixvalid( const smatch &s ) ;
bool suffixvalid( const smatch &s ) ;

int main() {
    ifstream in( "data.txt" ) ;
    regex r( "(\\()?(\\+)?(\\d{2})?(\\))?(\\ )?(\\d{3})([ ])?(\\d{4})([ ])?(\\d{4})" ) ;
    string s , fmt = "$1$2$3$4$6 $8 $10\t" ;
    while( getline( in , s ) )
        cout << regex_replace( s , r , fmt ) << endl;
    return 0;
}

bool valid( const smatch &s ) {
    return prefixvalid( s ) && bracevalid( s ) && suffixvalid( s ) ;
}

bool bracevalid( const smatch &s ) {
    return !( s[1].matched ^ s[4].matched ) ;
}

bool prefixvalid( const smatch &s ) {
    return !( s[2].matched ^ s[3].matched ) ;
}

bool suffixvalid( const smatch &s ) {
    return !( s[7].matched ^ s[9].matched ) ;
}

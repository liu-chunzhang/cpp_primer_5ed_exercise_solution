// 本程序用于验证读者在练习17.20中的想法，并在必要的地方予以说明
#include <iostream>
#include <regex>
using namespace std;

bool valid( const smatch &s ) ;
bool bracevalid( const smatch &s ) ;
bool prefixvalid( const smatch &s ) ;
bool suffixvalid( const smatch &s ) ;

int main() {
    regex phone( "(\\()?(\\+)?(\\d{2})?(\\))?(\\ )?(\\d{3})([ ])?(\\d{4})([ ])?(\\d{4})" ) ;     // 希望一般的格式为(+86)159 XXXX XXXX或+86159XXXX XXXX之类
    smatch m ;
    string s ;
    while( getline( cin , s ) )
        for( sregex_iterator it( s.begin() , s.end() , phone ) , end_it ; it != end_it ; ++it )
            cout << ( valid( *it ) ? "valid: " : "not valid: " ) << it->str() << endl;
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

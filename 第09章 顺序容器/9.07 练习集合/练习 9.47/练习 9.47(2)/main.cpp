// 本程序用于验证读者在练习9.47中的想法，并在必要的地方予以说明：用find_first_not_of语句
#include <iostream>
using namespace std;

void findNumbers( const string &target ) ;

int main() {
    string target_str( "ab2c3d7R4E6" ) ;
    findNumbers( target_str ) ;
    return 0;
}

void findNumbers( const string &target ){
    const string refer = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
    for( string::size_type pos = target.find_first_not_of( refer , 0 ) ; pos != string::npos ; pos = target.find_first_not_of( refer , pos ) )
        cout << target[pos++] << " " ;
}

// 本程序用于验证读者在练习19.2中的想法，并在必要的地方予以说明
#include "StrVec.h"

int main() {
    StrVec svec1 = { "hello" , "welcome" , "to" , "C++" , "family" } , svec2( svec1 ) ;
    svec2.push_back( "!" ) ;
    for( const string &s : svec2 )
        cout << s << " " ;
    return 0;
}

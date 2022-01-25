// 本程序用于验证读者在练习17.14中的想法，并在必要的地方予以说明
#include <iostream>
#include <regex>
using namespace std;

int main() {
    #ifdef NDE_BUG1
    regex r1( "[[:alnum:]]+\\.(cpp|cxx|cc)$" , regex::icase ) ;
    #endif // NDE_BUG1

    #ifdef NDE_BUG2
    regex r2( "[[::alnum:]]+\\.(cpp|cxx|cc)$" , regex::icase ) ;  // "std::regex_error",what():  Unexpected end of character class.
    #endif // NDE_BUG2

    #ifdef NDE_BUG3
    regex r3( "[[:alnum::]]+\\.(cpp|cxx|cc)$" , regex::icase ) ;  // "std::regex_error",what():  Unexpected end of character class.
    #endif // NDE_BUG3

    #ifdef NDE_BUG4
    regex r4( "[[:alnum]]+\\.(cpp|cxx|cc)$" , regex::icase ) ;    // "std::regex_error",what():  Unexpected end of character class.
    #endif // NDE_BUG4

    system( "pause" ) ;
    return 0;
}

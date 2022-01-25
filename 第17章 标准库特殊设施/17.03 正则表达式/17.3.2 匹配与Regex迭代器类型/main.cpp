// 本程序用于验证教材中17.3.2节内容的可靠性，并提供感性认知
#include <iostream>
#include <regex>
using namespace std;

int main() {
    string pattern( "[^c]ei" ) , file = "receipt freind theif receive" ;
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*" ;
    regex r( pattern , regex::icase ) ;

    for( sregex_iterator it( file.begin() , file.end() , r ) , end_it ; it != end_it ; ++it )
        cout << it->str() << endl;
    cout << endl;

    for( sregex_iterator it( file.begin() , file.end() , r ) , end_it ; it != end_it ; ++it ){
        size_t pos = it->prefix().length() ;
        pos = pos > 40 ? pos - 40 : 0 ;
        cout << it->prefix().str().substr( pos ) << ">>> " << it->str() << " <<<" << it->suffix().str().substr( 0 , 40 ) << "|" << endl;
    }
    return 0;
}

// 本程序用于验证读者在练习10.35中的想法，并在必要的地方予以说明
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    ifstream istm( "data.txt" ) ;
    istream_iterator<string> in( istm ) , eof ;
    vector<string> svec( in , eof ) ;
    ostream_iterator<string> out( cout , " " ) ;
    for( vector<string>::const_iterator csiter = svec.cend() ; csiter != svec.cbegin() ; )
         *out++ = *(--csiter) ;
    return 0;
}

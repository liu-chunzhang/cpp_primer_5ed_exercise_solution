// 本程序用于验证读者在练习10.29中的想法，并在必要的地方予以说明
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    ifstream in( "data.txt" ) ;
    istream_iterator<string> initer( in ) , eof ;
    vector<string> svec( initer , eof ) ;
    copy( svec.cbegin() , svec.cend() , ostream_iterator<string>( cout , " " ) ) ;
    return 0;
}

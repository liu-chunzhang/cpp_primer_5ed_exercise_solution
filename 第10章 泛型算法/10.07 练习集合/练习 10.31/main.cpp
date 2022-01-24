// 本程序用于验证读者在练习10.31中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    istream_iterator<int> initer( cin ) , eof ;
    vector<int> ivec( initer , eof ) ;
    sort( ivec.begin() , ivec.end() ) ;
    unique_copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , " " ) ) ;
    return 0;
}

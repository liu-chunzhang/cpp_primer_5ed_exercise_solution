// 本程序用于验证读者在练习12.20中的想法，并在必要的地方予以说明
#include "StrBlobPtr.h"
#include <fstream>
using namespace std;

int main() {
    StrBlob b ;
    ifstream in( "data.txt" ) ;
    string str ;
    while( getline( in , str ) )
        b.push_back( str ) ;
    for( StrBlobPtr it = b.begin() ; it != b.end() ; ++it )
        cout << *it << endl;
    return 0;
}

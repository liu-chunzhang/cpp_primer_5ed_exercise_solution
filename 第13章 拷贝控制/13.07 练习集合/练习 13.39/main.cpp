// 本程序用于验证读者在练习13.39中的想法，并在必要的地方予以说明
#include <fstream>
#include "StrVec.h"

int main() {
    StrVec svec ;
    ifstream in( "data.txt" ) ;
    string str ;
    while( in >> str )
        svec.push_back( str ) ;
    cout << svec.size() << " " << svec.capacity() << endl;
    svec.resize( 20 ) ;
    cout << svec.size() << " " << svec.capacity() << endl;

    return 0;
}

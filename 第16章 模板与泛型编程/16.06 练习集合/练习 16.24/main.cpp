// 本程序用于验证读者在练习16.24中的想法，并在必要的地方予以说明
#include <vector>
#include "Blob.h"

int main() {
    vector<string> b1 = { "welcome" , "to" , "C++" , "family" } ;
    Blob<string> b3( b1.begin() , b1.end() ) ;
    for( BlobPtr<string> p = b3.begin() ; p != b3.end() ; ++p )
        cout << *p << " " ;
    return 0;
}

// 本程序用于验证读者在练习16.12中的想法，并在必要的地方予以说明：其实就是补足一些教材上版本没有的功能
#include "Blob.h"

int main() {
    Blob<string> sblob = { "welcome" , "to" , "C++" , "family" } ;
    sblob.push_back( "!" ) ;
    cout << sblob.capacity() << " " << sblob.size() << endl;
    return 0;
}

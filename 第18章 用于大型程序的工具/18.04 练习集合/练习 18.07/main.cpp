// 本程序用于验证读者在练习18.7中的想法，并在必要的地方予以说明
#include "Blob.h"

int main() {
    Blob<string> sblob = { "hello" , "welcome" , "to" , "C++" , "family" } ;
    BlobPtr<string> sbp( sblob ) ;
    return 0;
}

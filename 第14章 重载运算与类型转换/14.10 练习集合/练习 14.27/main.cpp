// 本程序用于验证读者在练习14.27中的想法，并在必要的地方予以说明
#include "StrBlob.h"
#include "StrBlobPtr.h"

int main() {
    StrBlob a1 ;
    StrBlobPtr p( a1 ) ;
    p.operator++( 0 ) ;
    ++p ;
    return 0;
}

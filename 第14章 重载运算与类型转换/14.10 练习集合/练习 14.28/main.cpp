// 本程序用于验证读者在练习14.28中的想法，并在必要的地方予以说明
#include "StrBlob.h"
#include "StrBlobPtr.h"

int main() {
    StrBlob a1 = { "a" , "an" , "the" };
    StrBlobPtr p( a1 ) ;
    cout << *( p + 2 ) ;
    return 0;
}

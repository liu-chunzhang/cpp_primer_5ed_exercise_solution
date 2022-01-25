// 本程序用于验证读者在练习12.22中的想法，并在必要的地方予以说明
#include "StrBlob.h"
#include "ConstStrBlobPtr.h"

int main() {
    const StrBlob b = { "Hello" , "world" , "!" } ;
    for( ConstStrBlobPtr it = b.cbegin() ; it != b.cend() ; ++it )
        cout << *it << " " ;
    return 0;
}

// 本程序用于验证读者在练习14.32中的想法，并在必要的地方予以说明
#include "StrBlob.h"
#include "StrBlobPtr.h"
#include "StrBlobPtr2.h"

int main() {
    StrBlob sb = { "a" , "an" , "the" } ;
    StrBlobPtr sbp1( sb , 2 ) ;
    StrBlobPtr2 sbp2( sbp1 ) ;
    return 0;
}

// StrBlobPtr2是题干中要求定义的新类，可前去查看其定义

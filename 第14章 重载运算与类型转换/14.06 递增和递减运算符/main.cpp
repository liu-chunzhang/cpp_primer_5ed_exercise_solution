// 本程序用于验证教材中14.6节内容的可靠性，并提供感性认知
#include "StrBlob.h"
#include "StrBlobPtr.h"

int main() {
    StrBlob a1 ;
    StrBlobPtr p( a1 ) ;
    p.operator++( 0 ) ;
    ++p ;
    return 0;
}

// ������������֤��������ϰ14.27�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "StrBlob.h"
#include "StrBlobPtr.h"

int main() {
    StrBlob a1 ;
    StrBlobPtr p( a1 ) ;
    p.operator++( 0 ) ;
    ++p ;
    return 0;
}

// ������������֤��������ϰ14.28�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "StrBlob.h"
#include "StrBlobPtr.h"

int main() {
    StrBlob a1 = { "a" , "an" , "the" };
    StrBlobPtr p( a1 ) ;
    cout << *( p + 2 ) ;
    return 0;
}

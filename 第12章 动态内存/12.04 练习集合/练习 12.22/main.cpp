// ������������֤��������ϰ12.22�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "StrBlob.h"
#include "ConstStrBlobPtr.h"

int main() {
    const StrBlob b = { "Hello" , "world" , "!" } ;
    for( ConstStrBlobPtr it = b.cbegin() ; it != b.cend() ; ++it )
        cout << *it << " " ;
    return 0;
}

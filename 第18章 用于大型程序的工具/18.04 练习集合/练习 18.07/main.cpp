// ������������֤��������ϰ18.7�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Blob.h"

int main() {
    Blob<string> sblob = { "hello" , "welcome" , "to" , "C++" , "family" } ;
    BlobPtr<string> sbp( sblob ) ;
    return 0;
}

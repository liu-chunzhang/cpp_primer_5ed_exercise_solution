// ������������֤��������ϰ16.12�е��뷨�����ڱ�Ҫ�ĵط�����˵������ʵ���ǲ���һЩ�̲��ϰ汾û�еĹ���
#include "Blob.h"

int main() {
    Blob<string> sblob = { "welcome" , "to" , "C++" , "family" } ;
    sblob.push_back( "!" ) ;
    cout << sblob.capacity() << " " << sblob.size() << endl;
    return 0;
}

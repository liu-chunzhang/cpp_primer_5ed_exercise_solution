// ������������֤�̲���14.7�����ݵĿɿ��ԣ����ṩ������֪
#include "StrBlob.h"
#include "StrBlobPtr.h"

int main() {
    StrBlob a1 = { "hi" , "bye" , "now" } ;
    StrBlobPtr p( a1 , 2 ) ;
    cout << p->size() << endl;
    *p = "okay" ;
    cout << p->size() << endl;
    cout << (*p).size() << endl;
    return 0;
}

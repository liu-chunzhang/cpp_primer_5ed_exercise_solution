// ������������֤��������ϰ13.27�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "HasPtr.h"

int main() {
    HasPtr h1( "hello world!" ) , h2 = h1 ;                   // ����δ�����µ�string��h2��h1ָ����ͬ��string
    h1 = "welcome to C++ family!" ;
    cout << "h1: " << *h1 << endl;
    cout << "h2: " << *h2 << endl;
    return 0;
}

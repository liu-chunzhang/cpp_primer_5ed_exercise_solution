// ������������֤�̲���13.2.1�����ݵĿɿ��ԣ����ṩ������֪
#include "HasPtr.h"

int main() {
    HasPtr h1( "hello world!" ) , h2( h1 ) , h3 = h1 ;
    h2 = "welcome to C++ family!" ;
    h3 = "hiya" ;
    cout << "h1:" << *h1 << endl;
    cout << "h2:" << *h2 << endl;
    cout << "h3:" << *h3 << endl;
    return 0;
}

// �������������Ч���ǽ��п�����HasPtr����ײ�����

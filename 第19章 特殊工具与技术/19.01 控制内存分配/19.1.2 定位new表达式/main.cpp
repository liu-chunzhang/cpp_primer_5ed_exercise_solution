// ������������֤�̲���19.1.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    string *sp = new string( "a value" ) ;
    sp->~string() ;
    delete sp ;
    return 0;
}

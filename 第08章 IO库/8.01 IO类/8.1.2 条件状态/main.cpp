// ������������֤�̲���8.1.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std ;

int main() {
    int ival ;
    cin >> ival ;

    iostream::iostate old_state = cin.rdstate() ;                    // ��סcin�ĵ�ǰ״̬
    cin.clear() ;                                                    // ʹcin��Ч
    cin >> ival ;                                                     // ʹ��cin
    cin.setstate( old_state ) ;                                      // ��cin��Ϊԭ��״̬

    cin.clear( cin.rdstate() & ~cin.failbit & ~cin.badbit ) ;       // ��λfailbit��badbit������������־λ����
    return 0;
}

// ������������֤�̲���7.6�����ݵĿɿ��ԣ����ṩ������֪
#include "Account.h"

int main() {
    double r = Account::rate() ;

    Account ac1 , *ac2 = &ac1 ;
    r = ac1.rate() ;           // ͨ��Account�Ķ��������
    r = ac2->rate() ;          // ͨ��ָ��Account�����ָ��
    cout << r ;
    return 0;
}

// ������������֤�̲���15.2.2�����ݵĿɿ��ԣ����ṩ������֪
#include "Bulk_quote.h"
#include "Derived.h"

class Derived ;

int main() {
    Quote item ;            // �������
    Bulk_quote bulk ;       // ���������
    Quote *p = &item ;      // pָ��Quote����
    p = &bulk ;             // pָ��bulk��Quote����
    Quote &r = bulk ;       // r�󶨵�bulk��Quote����

    Derived d ;
    d.f( d ) ;
    return 0;
}

// ������������֤�̲���13.1.6�����ݵĿɿ��ԣ����ṩ������֪
#include "NoCopy.h"

int main() {

    NoDtor nd ;                     // ����NoDtor������������ɾ����
    NoDtor *p = new NoDtor() ;      // ��ȷ���������ǲ���ɾ��p
    delete p ;                     // ����NoDtor������������ɾ����

    return 0;
}

// ������������֤�̲���15.5�����ݵĿɿ��ԣ����ṩ������֪
#include "Sneaky.h"
#include "Derived.h"
#include "Base3.h"
#include "Base4.h"

int main() {
    Pub_Derv d1 ;       // �̳���Base2�ĳ�Ա��public��
    Priv_Derv d2 ;      // �̳���Base2�ĳ�Ա��private��
    d1.pub_men() ;      // ��ȷ��pub_mem������������public��
  //d2.pub_mem() ;      // ����pub_mem������������private��
    return 0;
}

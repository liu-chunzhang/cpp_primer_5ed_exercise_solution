// ������������֤�̲���2.5.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

typedef double wages ;                  // wages��double��ͬ���
typedef wages base , *p ;               // ����base��double��ͬ��ʣ�p��double*��ͬ���
typedef char *pstring ;

int main() {
    base hourly = 3.0 , weekly = 2.99 ;
    p q ;
    q = &hourly ;

    using in = int ;
    in i = 42 ;

    const pstring cstr = 0 ;
    const pstring *ps ;

    return 0;
}

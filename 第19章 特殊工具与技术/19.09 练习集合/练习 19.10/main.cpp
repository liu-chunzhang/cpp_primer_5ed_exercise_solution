// ������������֤��������ϰ19.10�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include "A.h"
using namespace std;

int main() {
    A *pa = new C ;
    cout << typeid( pa ).name() << endl;

    C cobj ;
    A &ra = cobj ;
    cout << typeid( &ra ).name() << endl;

    B *px = new B ;
    A &ra2 = *px ;
    cout << typeid( ra2 ).name() << endl;
    return 0;
}

// �ڵ�ǰ�ı�����ˮƽ�£��õ��Ľ���ֱ���P1A��P1A��1B

// ������������֤�̲���13.6.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    int i = 42 ;
    int &r = i ;
    int &&rr = i ;                  // ���󣺲��ܽ�һ����ֵ���ð󶨵�һ����ֵ��
    int &r2 = i * 42 ;              // ����i*42��һ����ֵ
    const int &r3 = i * 42 ;        // ��ȷ�����Խ�һ��const�����ð󶨵�һ����ֵ��
    int &&rr2 = i * 42 ;            // ��ȷ����rr2�󶨵��˷������

    int &&rr1 = 42 ;
    int &&rr22 = rr1 ;               // ���󣺱��ʽrr1����ֵ
    int &&rr3 = std::move( rr1 ) ;
    return 0;
}

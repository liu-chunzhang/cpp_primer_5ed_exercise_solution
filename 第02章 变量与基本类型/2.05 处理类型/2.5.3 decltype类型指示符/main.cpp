// ������������֤�̲���2.5.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    const int ci = 0 , &cj = ci ;
    decltype(ci) x = 0 ;                // x�����������ͳ���
    decltype(cj) y = x ;                // y���������������ó���
    decltype(cj) z ;                    // z������ͬy����һ�����ã����Ա����ʼ��!

    int i = 42 , *p = &i , &r = i ;
    decltype(r + 0) b ;                 // �ӷ��Ľ����int�����b��һ��δ��ʼ����int
    decltype(*p) c ;                    // c��int&�����Ա����ʼ����

    decltype((i)) d;                    // d��int&�������ʼ����
    decltype(i) e;                      // c��int�����س�ʼ��
    return 0;
}

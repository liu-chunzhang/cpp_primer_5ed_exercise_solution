// ������������֤�̲���2.3.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    int ival = 1024 ;
    int *pi = &ival ;
    int **ppi = &pi ;
    cout << "The value of ival\n"
         << "direct value: " << ival << "\n"                  // ����ֱ���������ival��ֵ
         << "indirect value: " << *pi << "\n"                 // �������int��ָ��piָ���ֵ
         << "doubly indirect value: " << **ppi << endl;      // �������ν�����ppi��ȡ��ival��ֵ

    int i = 42 ;
    int *p ;                       // p��һ��int��ָ��
    int *&r = p ;                  // r��һ������ָ��p������
    r = &i ;                       // r������һ��ָ�룬��˸�r��ֵi�ĵ�ַ��������pָ��i
    *r = 0 ;                       // ������r�õ�i��Ҳ����pָ��Ķ��󣬽�i��ֵ��Ϊ0�������ӡ���ӡ��0
    cout << i ;
    return 0;
}

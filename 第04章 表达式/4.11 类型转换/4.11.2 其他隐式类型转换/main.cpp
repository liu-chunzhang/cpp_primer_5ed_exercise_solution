// ������������֤�̲���4.11.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    int i ;
    const int &j = i ;          // �����ǳ������͵�ָ��ת����ָ����Ӧ���͵ĳ������͵�ָ��
    const int *p = &i ;         // ��������Ҳ������
    int &r = j ;                 // �෴��ת������������Ϊ����ͼɾȥ�ײ�const
    int *q = p ;
    cout << j << *p << endl;
    return 0;
}

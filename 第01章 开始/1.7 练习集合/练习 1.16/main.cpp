// ������������֤��������ϰ1.16�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main(){
    double sum = 0 , value = 0 ;
    cout << "������һ��˫���ȸ���������Ctrl+C����ʾ������" << endl;
    while( cin >> value )                                              // �˴���whileѭ��������forѭ������Ϊ�����ڴ����޷�Ԥ֪�������
        sum += value ;                                                  // ��Ը�����һ��
    cout << "��������˫���ȸ������ĺ�Ϊ" << sum << "��" << endl;
    return 0;
}

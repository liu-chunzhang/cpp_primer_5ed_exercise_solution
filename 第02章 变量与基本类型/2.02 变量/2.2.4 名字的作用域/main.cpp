// ������������֤�̲���2.2.4�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int reused = 42 ;                                // reuesdӵ��ȫ��������

int main() {
    int uni = 0 ;                                // uniӵ�п�������
    cout << reused << " " << uni << endl;        // ���ȫ�ֱ���reuesd
    int reused = 24 ;                            // �½��ֲ�����reused��������ȫ�ֱ���reused
    cout << reused << " " << uni << endl;        // ����ֲ�����reused��ֵ
    cout << ::reused << " " << uni << endl;      // ��ʽ�ط���ȫ�ֱ���reused��ֵ
    return 0;
}

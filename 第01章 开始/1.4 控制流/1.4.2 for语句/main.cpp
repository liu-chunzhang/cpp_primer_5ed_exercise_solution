// ������������֤�̲���1.4.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for( int i = 1 ; i <= 10 ; ++i )                            // ��1�ӵ�10���˴�ѭ��������i�����˽̲��е�val
        sum += i ;                                              // �ȼ���sum = sum + i
    cout << "��Ȼ��1�ӵ�10�ĺ�Ϊ" << sum << "��" << endl;
    return 0;
}

// ������������֤��������ϰ3.1�е��뷨�����ڱ�Ҫ�ĵط�����˵��������1.4.1�ڵ���ϰ1.9
// ������Ŀ����ʹ��whileѭ��ʵ��50��100�������������
#include <iostream>
using std::cout;
using std::endl;

int main() {
    unsigned sum = 0 , i = 50;
    while( i <= 100 )
        sum += i++ ;
    cout << "50�ӵ�100�ĺ�Ϊ" << sum << "��" << endl;
    return 0;
}

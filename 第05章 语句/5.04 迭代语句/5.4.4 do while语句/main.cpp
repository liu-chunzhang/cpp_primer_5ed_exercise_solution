// ������������֤�̲���5.4.4�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    string rsp ;
    do{
        cout << "����������ֵ��" ;
        int val1 = 0 , val2 = 0 ;
        cin >> val1 >> val2 ;
        cout << val1 << "��" << val2 << "�ĺ�Ϊ" << val1 + val2 << endl;
        cout << "���ʻ�Ҫ��������𣿲�����N��ʾ������" << endl;
        cin >> rsp ;
    }while( !rsp.empty() && rsp[0] != 'N' );
    return 0;
}

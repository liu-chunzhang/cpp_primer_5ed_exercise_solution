// ������������֤��������ϰ5.9�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    unsigned vowelCnt = 0 ;
    char ch;
    cout << "������һ��Ӣ���ı���" << endl;
    while( cin >> ch )
        if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
            ++vowelCnt ;
    cout << "�������Ӣ���ı�����" << vowelCnt << "��Ԫ����ĸ��" << endl;
    return 0;
}

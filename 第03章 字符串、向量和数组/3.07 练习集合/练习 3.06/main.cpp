// ������������֤��������ϰ3.6�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "������һ���ַ�������������ո�" << endl;
    getline( cin , s ) ;                                       // ��getline���ڶ�ȡ�ո������س�������
    for( char &c : s )                                         // ���δ����ַ����е�ÿһ���ַ�
        c = 'X' ;
    cout << s << endl;
    return 0;
}

// ������������֤��������ϰ3.8�е��뷨�����ڱ�Ҫ�ĵط�����˵������whileѭ����д��ϰ3.6
#include <iostream>
using namespace std;

int main() {
    string s ;
    string::size_type num = 0 ;
    cout << "������һ���ַ�������������ո�" << endl;
    getline( cin , s ) ;                                          // ��getline���ڶ�ȡ�ո������س�������
    while( num != s.size() )                                     // ���δ����ַ����е�ÿһ���ַ�
        s[num++] = 'X' ;
    cout << s << endl;
    return 0;
}

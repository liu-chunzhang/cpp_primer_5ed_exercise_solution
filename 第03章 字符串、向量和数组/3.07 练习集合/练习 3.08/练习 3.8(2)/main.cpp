// ������������֤��������ϰ3.8�е��뷨�����ڱ�Ҫ�ĵط�����˵�����ô�ͳforѭ����д��ϰ3.6
#include <iostream>
using namespace std;

int main() {
    string s ;
    cout << "������һ���ַ�������������ո�" << endl;
    getline( cin , s );                                    // ��getline���ڶ�ȡ�ո������س�������
    for( size_t num = 0 ; num != s.size() ; ++num )       // ���δ����ַ����е�ÿһ���ַ�
        s[num] = 'X' ;
    cout << s << endl;
    return 0;
}

// ������������֤��������ϰ3.4�е��뷨�����ڱ�Ҫ�ĵط�����˵�����Ƚ�����������ַ����Ƿ�ȳ��������ȳ����������Ƚϴ���ַ�����
#include <iostream>
using namespace std;

int main() {
    string s1 , s2 ;
    cin >> s1 >> s2 ;
    if( s1.size() != s2.size() )
        cout << ( ( s1.size() > s2.size() ) ? s1 : s2 ) << endl;
    else
        cout << "�������ַ����ȳ���" << endl;
    return 0 ;
}

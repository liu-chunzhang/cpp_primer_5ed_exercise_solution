// ������������֤��������ϰ3.4�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    string s1 , s2 ;
    cin >> s1 >> s2 ;
    if( s1 != s2 )
        cout << ( ( s1 > s2 ) ? s1 : s2 ) << endl;
    else
        cout << "�������ַ�����ȣ�" << endl;
    return 0;
}

// ������������֤��������ϰ3.39�е��뷨�����ڱ�Ҫ�ĵط�����˵�����Ƚ�����string����
#include <iostream>
using namespace std;

int main() {
    string str1 , str2 ;
    cout << "�����������ַ������ÿո��������" << endl;
    cin >> str1 >> str2 ;
    if( str1 > str2 )
        cout << str1 << ">" << str2 << endl;
    else if( str1 < str2 )
        cout << str1 << "<" << str2 << endl;
    else
        cout << str1 << "=" << str2 << endl;
    return 0;
}

// ������������֤�̲���9.5.5�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    int i = 42 ;
    string s = to_string( i ) ;
    double d = stod( s ) ;
    cout << s << " " << d << endl;

    string s2 = "pi = 3.14g" ;
    d = stod( s2.substr( s2.find_first_of( "+-.0123456789" ) ) ) ;  // ת��s�������ֿ�ʼ�ĵ�һ���ִ������d = 3.14
    cout << d << endl;
    return 0;
}

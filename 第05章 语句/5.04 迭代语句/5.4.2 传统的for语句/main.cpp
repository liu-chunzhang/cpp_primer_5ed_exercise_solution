// ������������֤�̲���5.4.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    string s{ "Welcome to C++ family!" } ;
    for( string::size_type index = 0 ; index != s.size() ; ++index ){   // �̲��е�decltype(s,size())������string::size_type
        s[index] = toupper( s[index] ) ;                                  // �����±����Ԫ��ʱ��vectorʹ��vector<T>::size_type��Ϊ�±����ͣ�
        cout << s[index] ;                                                // �������±����ȷ��������size_t���̲�P103��
    }                                                                     // Ϊ��ʹ�Լ��ĳ����кܺõ���ֲ�ԣ�C++����ԱӦ�þ���ʹ��size_t��
    return 0;                                                            // size_type������int��unsigned��
}

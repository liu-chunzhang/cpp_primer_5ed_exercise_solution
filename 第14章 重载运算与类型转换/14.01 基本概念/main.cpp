// ������������֤�̲���14.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    string s = "world!" ;
    string t = s + "!" ;          // ��ȷ�������ܰ�һ��const char*�ӵ�һ��string������
    string u = "hi" + s ;         // ���+��string��Ա�����������
    cout << u << " " << t << endl;
    return 0;
}

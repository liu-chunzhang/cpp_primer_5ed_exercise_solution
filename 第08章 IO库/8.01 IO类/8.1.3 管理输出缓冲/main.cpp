// ������������֤�̲���8.1.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    cout << "Hi!" << endl;
    cout << "Hi!" << ends;
    cout << "Hi!" << flush;

    cout << unitbuf ;
    cout << nounitbuf ;

    cin.tie( &cout ) ;                              // ��׼�⽫cin��cout������һ��
    ostream *old_tie = cin.tie( nullptr ) ;         // old_tie��������ǰcin����������еĻ�����cin�������������й���
    cin.tie( &cerr ) ;                              // ��仰��cin��cout����
    cin.tie( old_tie ) ;                            // �ؽ�cin��cout֮��Ĺ���
    return 0;
}

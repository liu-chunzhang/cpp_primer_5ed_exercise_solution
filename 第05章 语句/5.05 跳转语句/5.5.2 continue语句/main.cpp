// ������������֤�̲���5.5.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    string buf ;
    while( cin >> buf && !buf.empty() )
        if( buf[0] != '_' ){
           cout << buf << " " ;
           continue ;
           cout << buf << " " ;             // ��ǰ��û���»��ߣ�����Դ�ӡһ�Σ�������continue�����Եڶ����޷���ӡ
        }
    return 0;
}

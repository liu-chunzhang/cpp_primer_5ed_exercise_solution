// ������������֤�̲���6.2.5�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main( int argc , char **argv ) {
    string str ;
    for( int i = 0 ; i != argc ; ++i ) {    //Ԫ��0ָ���������֣�λ�ã��������֤���鲻ֹ1��Ԫ�أ���ȫ���Ըĳ�i = 1��
        str = argv[i] ;
        cout << "argv[" << i << "] = " << str << endl;
    }
    system( "pause" ) ;
    return 0;
}

// ������������֤�̲���6.2.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int factorial( int val ) ;
void reset( int *ip ) ;

int main() {
    int n = 0 ;
    int i = n ;
    i = 42 ;
    cout << i << " " << n << endl;

    int k = 5 ;
    cout << factorial( k ) << " " << k << endl;     // �������˵�������������β��������κβ�������Ӱ��ʵ��

    int i2 = 42 ;
    cout << &i2 << endl;                            // ���i�ĵ�ַ���������ӡ������Ƚ�
    reset( &i2 ) ;                                   // �ı���i��ֵ������û�ı�i�ĵ�ַ
    cout << i2 << endl;
    cout << &i2 << endl;                            // ��ӡi��ֵ֤ʵ��һ��
    return 0;
}

int factorial( int val ) {
    if( val < 0 )
        return -1 ;
    int ret = 1 ;
    while( val != 0 )
        ret *= val-- ;
    return ret ;
}

void reset( int *ip ) {
    *ip = 0 ;
    ip = 0 ;
}

// ������������֤��������ϰ6.3�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int factorial ( int i ) ;

int main() {
    for( int j = 1 ; j != 10 ; ++j )
        cout << j << "!=" << factorial( j ) << endl;  // ��ӡһЩ����������캯������ȷ��
    return 0;
}

int factorial ( int i ) {
    int factorial = 1 ;
    if( i <= 0 )
        return 1 ;                              // ֱ�ӹ涨�������Ľ׳˽��Ϊ1
    while( i > 1 )
        factorial *= i-- ;                       // ʹ�õ���������ĺ��ð汾����ȷ����Ҫ
    return factorial ;
}

// ������������֤�̲���6.1.0�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int factorial( int val ) ;

int main() {
    cout << "5!= " << factorial( 5 ) << endl;

    int i = factorial( 3 ) ;
    cout << i << endl;

    int j = factorial( "hello" ) ;                           // ����ʵ�����Ͳ���ȷ����Ϊ���ܽ�const char*ת��Ϊint�����Դ˴����ûᱨ��
    cout << j << endl ;
    int k = factorial( 42 , 10 , 0 ) ;                       // ����ʵ���������࣡
    cout << k << endl;
    int l = factorial( ) ;                                   // ����ʵ���������㣡
    cout << l << endl;
    int m = factorial( 3.14 ) ;                              // ��ȷ����ʵ�ο���ת��Ϊint���ͣ����ǻ����խ���������˴��ȼ���int m = factorial( 3 ) ;
    cout << m << endl;
    return 0;
}

int factorial( int val ) {                                   // factorial����Ϊ���׳ˡ�
    int ret = 1 ;
    while( val > 1 )
        ret *= val-- ;
    return ret ;
}

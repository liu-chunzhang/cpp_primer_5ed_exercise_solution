// ������������֤��������ϰ6.4�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int factorial ( int i ) ;                                              // �˴��ĺ����Ǵ���ϰ6.3ֱ�ӿ��������ģ����ע����ȥ

int main() {
    int j ;
    cout << "������һ���������������򽫸�����׳�ֵ��" << endl;
    cin >> j ;
    cout << j << "!=" << factorial( j ) << endl;                      // ��ӡ����������캯������ȷ��
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

// ������������֤�̲���2.2.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    double price = 109.99 , discount = price * 0.16;     // һ�ζ�������������ı���ʱ���������ȶ���ı���ֵȥ��ʼ���������������
    cout << discount << endl;

    int u = {0} , v{0} , w(0) ;                          // �˴����Զ��ֳ�ʼ����ʽ
    cout << u << " " << v << " " << w << endl;

    long double ld = 3.1415926536 ;
    int a{ld} , b = {ld} ;                               // ��Ȼ��̲��Ͻ��ò�ͬ�����ﲻ���д��󣬵��ǻ��о��棬��Ϊlong double��ֵ
    int c(ld) , d = ld ;                                 // ��ʼ��intʱ���ܶ�ʧ����
    cout << a << " " << b << " " << c << " " << d << endl ;
    return 0;
}

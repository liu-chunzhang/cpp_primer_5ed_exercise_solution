// ������������֤�̲���4.11.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    bool flag ;      char cval ;
    short sval ;     unsigned short usval ;
    int ival ;       unsigned int uival ;
    long lval ;      unsigned long ulval ;
    float fval ;     double dval ;                       // typeid��������ط������ͺͲ������κ��麯������ľ�̬���ͣ������ӵ��÷����̳�P732-733��
    double a[5] ;                                         // t.name()����һ��C����ַ�������ʾ�������ֵĿɴ�ӡ��ʽ�ɣ����̳�P735��
    cout << typeid( 3.14159L + 'a' ).name() << endl;     // e��Ӧlong double����
    cout << typeid( dval + ival ).name() << endl;        // d��Ӧdouble����
    cout << typeid( dval + fval ).name() << endl;        // d��Ӧdouble����
    cout << typeid( ival = dval ).name() << endl;        // i��Ӧ(signed)int����
    cout << typeid( flag = dval ).name() << endl;        // b��Ӧbool����
    cout << typeid( cval + fval ).name() << endl;        // f��Ӧfloat����
    cout << typeid( sval + cval ).name() << endl;        // i��Ӧint���ͣ���Ӧ�̲��������������ĵ�һ�����
    cout << typeid( cval + lval ).name() << endl;        // l��Ӧ(signed)long(int)���ͣ���Ӧ�̲��������������ĵڶ������
    cout << typeid( ival + ulval ).name() << endl;       // m��Ӧunsigned long(int)���ͣ���Ӧ�̲������޷������͵���������һ�����
    cout << typeid( usval + ival ).name() << endl;       // i��Ӧint���ͣ���Ӧ�̲������޷������͵��������ڶ������
    cout << typeid( uival + lval ).name() << endl;       // m��Ӧunsigned long(int)���ͣ���Ӧ�̲������޷������͵���������һ�����
    cout << typeid( a ).name() << endl;
    return 0;
}

// ������������֤�̲���14.9.1�����ݵĿɿ��ԣ����ṩ������֪
#include "SmallInt.h"
#include "SmallInt2.h"

int main() {
    SmallInt si ;
    si = 4 ;                        // ���Ƚ�4��ʽ��ת��ΪSmallInt��Ȼ�����SmallInt::operator=
    cout << si + 3 << endl;        // ���Ƚ�si��ʽ��ת����int��Ȼ��ִ�������ļӷ�

    SmallInt si2 = 3.14 ;           // ��������ת����double��ת����int���ٵ���SmallInt(int)���캯��
    cout << si2 + 3.14 << endl;    // SmallInt������ת����si2ת����int����������ת�������õ�int����ת����double

    SmallInt2 si3 = 3 ;
  //cout << si + 3 << endl;                             // ���󣺴˴���Ҫ��ʽ������ת������������������ʽ��
    cout << static_cast<int>( si3 ) + 3 << endl;      // ��ȷ����ʾҪ������ת��
    return 0;
}

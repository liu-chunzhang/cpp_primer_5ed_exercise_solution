// ������������֤�̲���14.52�����ݵĿɿ��ԣ����ṩ������֪
#include "SmallInt.h"

int main() {
    SmallInt s1( 3 ) , s2( 4 ) ;
    SmallInt s3 = s1 + s2 ;         // ʹ�����ص�operator+
    int i = s3 + 0 ;                // �����Դ���
    return 0;
}

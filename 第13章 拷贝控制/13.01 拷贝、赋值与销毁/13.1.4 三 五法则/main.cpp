// ������������֤�̲���13.1.4�����ݵĿɿ��ԣ����ṩ������֪
#include "HasPtr.h"

HasPtr f( HasPtr ) ;

int main() {
    HasPtr p( "some values" ) ;
    f( p ) ;                       // ��f����ʱ��p.psָ������Ч�ڴ棡
    HasPtr q( p ) ;                // ����p��q��ָ����Ч�ڴ棡
    return 0;
}

HasPtr f( HasPtr hp ){    // HasPtr�Ǵ�ֵ���������Խ�������
    HasPtr ret = hp ;     // ����������HasPtr
    return ret ;         // ret��hp���������٣���������ζ��ͬһ���ڴ汻�������Σ�����δ�����Σ����Ϊ��
}

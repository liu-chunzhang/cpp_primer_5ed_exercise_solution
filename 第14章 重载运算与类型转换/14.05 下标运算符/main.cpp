// ������������֤�̲���14.5�����ݵĿɿ��ԣ����ṩ������֪
#include "StrVec.h"

int main() {
    StrVec svec = { "a" , "an" , "the" } ;          // ��㶨���һ��svec�����������������
    const StrVec cvec = svec ;                      // ��svec��Ԫ�ؿ�����cvec��
    if( svec.size() && svec[0].empty() ){          // ��svec�к���Ԫ�أ������Ԫ����stting��empty����
        svec[0] = "zero" ;                          // �±���������ض�string������
      //cvec[0] = "zip" ;                           // ���󣺶�cvecȡ�±����㷵�ص��ǳ������ã�
    }
    for( const string &s : svec )
        cout << s << " " ;
    cout << endl;
    return 0;
}

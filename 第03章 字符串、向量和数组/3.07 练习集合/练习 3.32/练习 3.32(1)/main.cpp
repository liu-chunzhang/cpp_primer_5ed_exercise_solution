// ������������֤��������ϰ3.32�е��뷨�����ڱ�Ҫ�ĵط�����˵��������ϰ3.31�ﴴ�������鿽����һ�������飨����vector��
#include <iostream>
using namespace std;

int main() {
    int ia1[10] ;
    for( size_t i = 0 ; i != 10 ; ++i )
        ia1[i] = i ;

    int ia2[10] ;
    for( size_t i = 0 ; i != 10 ; ++i )
        ia2[i] = ia1[i] ;
    for( int i : ia2 )                      // ��ӡ�Ա������
        cout << i << " " ;
    return 0;
}

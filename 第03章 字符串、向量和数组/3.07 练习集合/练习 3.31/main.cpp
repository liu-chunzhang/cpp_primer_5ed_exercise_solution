// ������������֤��������ϰ3.31�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    int ia[10] ;                                 // ��ʵ����ϰ3.30�Ĵ�����΢��һ�¾��������ϰ�Ĵ�
    for( size_t i = 0 ; i != 10 ; ++i )
        ia[i] = i ;
    for( int i : ia )                           // ��ӡ�����Ա�ȷ�Ͻ������ȷ��
        cout << i << " ";
    return 0;
}

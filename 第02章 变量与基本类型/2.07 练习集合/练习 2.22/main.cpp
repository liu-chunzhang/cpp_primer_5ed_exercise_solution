//������������֤��������ϰ2.22�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    int i = 0 , *p1 = nullptr , *p = &i ;
    if( p1 )                                  // ����ָ���ֵ(��ָ����ָ����ĵ�ַ)
        cout << "p1 pass." << endl;
    if( p )                                   // ����ָ���ֵ(��ָ����ָ����ĵ�ַ)
        cout << "p pass." << endl;
    if( *p )                                  // ����ָ����ָ�����ֵ
        cout << "i pass." << endl;
    return 0;
}

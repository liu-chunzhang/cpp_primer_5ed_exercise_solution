// ������������֤��������ϰ3.35�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    int a[10] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    for( int *p = a ; p != end( a ) ; ++p )
        *p = 0 ;                                    // ��ѭ����������ָ���ƶ�����ȻҲ����ѡ��������������ָ��ӷ������ƶ�
    for( int i : a )
        cout << i << " ";
    return 0;
}

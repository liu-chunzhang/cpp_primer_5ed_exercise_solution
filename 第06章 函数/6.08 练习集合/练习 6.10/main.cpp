// ������������֤��������ϰ6.10�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

void exchange2IntValue( int *i , int *j ) ;     // �ú���������ָ����ָ������

int main() {
    cout << "����������������������ֵ��" ;
    int i , j ;
    cin >> i >> j ;
    cout << i << " " << j << endl;
    exchange2IntValue( &i , &j ) ;
    cout << i << " " << j << endl;
    return 0;
}

void exchange2IntValue( int *i , int *j ) {
    int temp = *j ;
    *j = *i ;
    *i = temp ;
}

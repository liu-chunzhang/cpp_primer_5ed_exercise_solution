// ������������֤��������ϰ6.12�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

void exchange2IntValues( int &i , int &j ) ;

int main() {
    int i , j ;
    cout << "������������������������" << endl;
    cin >> i >> j ;
    exchange2IntValues( i , j ) ;
    cout << "���������������ֵΪ" << i << " " << j << endl;
    return 0;
}

void exchange2IntValues( int &i , int &j ) {                        // �ʹﵽ�����������������򵥵�Ŀ�Ķ��ԣ������ʹ��ָ�룬ʹ�����ý���������
    int temp = i ;                                                   // ���ݴ���ʽ����������һ�㣬�����������ָ�������Ҳ�����˿���ָ���ֵ��
    i = j ;
    j = temp ;
}

// ������������֤��������ϰ1.19�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std ;

int main() {
    cout << "���������һϵ���û�ʵ�ָ��������������ڵ�һ������������ӡ����������������������" << endl;
    int i1 , i2 ;
    cin >> i1 >> i2 ;
    int v1 = max( i1 , i2 ) , v2 = min( i1 , i2 ) ;
    while( v1 >= v2 )
        cout << v1-- << " " ;
    cout << endl;
    return 0;
}

// ������������֤��������ϰ6.23�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

void print1( const int *p ) ;
void print2( const int *p , const int *q ) ;
void print2( const int *p , size_t sz ) ;

int main() {
    int i = 0 , j[2] = { 0 , 1 } ;
    print1( &i ) ;                                   // ���ں�����Ҫ����ָ�룬��������ʵ���Ǳ���i�ĵ�ַ
    print1( j ) ;
    print2( j , end( j ) ) ;                         // ��������ָ�뱾����ָ���Լ�����Ԫ�����Բ��ص���begin(j)��
    print2( j , sizeof( j )/sizeof( *j ) ) ;          // ����û��size��Ա��������Ҫ��sizeof(j)/sizeof(*j)��ȡ���С
    return 0;
}

void print1( const int *p ) {                      // �������ǳ�������ָ��
    cout << *p << endl;
}

void print2( const int *p , const int *q ) {      // ���������������ֱ����������β�߽�ʱ
    while( p != q )
         cout << *p++ << " " ;
    cout << endl;
}

void print2( const int *p , size_t sz ) {         // ���������������ֱ��ǳ�������ָ�뼰��������
    for( size_t i = 0 ; i != sz ; ++i  )
        cout << *p++ << " " ;
    cout << endl;
}

// ������������֤��������ϰ12.26�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    allocator<string> alloc ;                       // ��allocator����alloc�����ڴ棬����ֻ���������ڴ棬��û�г�ʼ��string����
    auto const p = alloc.allocate( 10 ) ;
    string str , *q = p ;
    ifstream in( "data.txt" ) ;
    while( in >> str && q != p + 10 )
        alloc.construct( q++ , str ) ;                // ��construct�����Ӷ�ȡ��string���г�ʼ��
    const size_t size1 = q - p ;
    for( size_t i = 0 ; i != size1 ; ++i )
        cout << p[i] << " " ;
    while( q != p )                                   // �������ͷ��ڴ�
        alloc.destroy( --q ) ;
    alloc.deallocate( p , 10 ) ;                      // �ͷ����
    return 0;
}

// ������������֤��������ϰ16.7�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

template<typename T, size_t N>
constexpr size_t size( const T( &t )[N] ) ;

int main() {
    int a[ 10 ] = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 } , b[] = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 } ;
    cout << size( a ) << endl;
    cout << size( b ) << endl;
    return 0;
}

template<typename T, size_t N> constexpr size_t size( const T( &t )[ N ] ) {
    return N ;
}

// ���������С���������͵�һ���֣�ͨ��ģ��������Ի�ȡ����constexprģ���з��ؼ���

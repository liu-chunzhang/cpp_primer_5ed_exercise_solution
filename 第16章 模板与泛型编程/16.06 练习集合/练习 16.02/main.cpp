// ������������֤��������ϰ16.2�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

template <typename T> short compare( const T &lhs , const T &rhs ) ;                // ֻ�ڷ���������ѡ���˸��ܹ���ʡ�ռ��short

int main() {
    cout << compare( 3.6 , 5.7 ) << endl;
    cout << compare( 6.7 , 3.4 ) << endl;
    cout << compare( 3 , 3 ) << endl;
    return 0;
}

template <typename T> short compare( const T &lhs , const T &rhs ) {
    return ( less<T>()( lhs , rhs ) ) ? -1 : ( less<T>()( rhs , lhs ) ) ? 1 : 0 ;     // ��less��֤����ֲ�ԣ��Լ����ʺ��������ѡ����
}

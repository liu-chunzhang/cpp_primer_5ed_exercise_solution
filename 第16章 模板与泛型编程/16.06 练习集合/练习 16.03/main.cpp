// ������������֤��������ϰ16.3�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Sales_data.h"

template <typename T> short compare( const T &lhs , const T &rhs ) ;

int main() {
    Sales_data data1 , data2 ;
    cout << compare( data1 , data2 ) << endl;                               // �ᱨ����Ϊcompare��<�Ƚ����������������T��Ҫ���ȶ���<
    return 0;                                                               // ����������ɲο�Sales_data����û�ж���������
}

template <typename T> short compare( const T &lhs , const T &rhs ) {
    return ( less<T>()( lhs , rhs ) ) ? -1 : ( less<T>()( rhs , lhs ) ) ? 1 : 0 ;
}

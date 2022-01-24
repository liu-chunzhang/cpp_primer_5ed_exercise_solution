// ������������֤�̲���4.9�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
#include "Sales_data.h"
using namespace std;

int main() {
    Sales_data data , *p ;                             // Ϊ�������ԣ����صؽ��̲��ϵ���䶼�ĳ���������
    cout << sizeof( Sales_data ) << endl;              // ����洢Sales_data���͵Ķ�����ռ�Ŀռ��С
    cout << sizeof( data ) << endl;                    // ���data�����ʹ�С����sizeof(Sales_data)
    cout << sizeof( p ) << endl;                       // ���ָ����ռ�ռ�Ĵ�С
    cout << sizeof( *p ) << endl;                      // p��ָ���͵Ŀռ��С����sizeof(Sales_data)
    cout << sizeof( data.revenue ) << endl;            // ���Sales_data��revenue��Ա��Ӧ���͵Ĵ�С
    cout << sizeof( Sales_data::revenue ) << endl;     // ��һ�ֻ�ȡrevenue��С�ķ�ʽ
    vector<int> ivec1( 10 ) , ivec2( 10 , 1 ) ;
    for( int i = 0 ; i != 5 ; ++i )
        ivec1.push_back( i ) ;
    cout << sizeof( ivec1 ) << " " << sizeof( ivec2 ) << endl;

    int ia[] = { 1 , 2 , 3 , 5 , 8 , 13 } ;
    constexpr size_t sz = sizeof( ia ) / sizeof( *ia ) ;    // sizeof(ia)/sizeof(*ia)����ia��Ԫ������
    cout << sz << endl;

    return 0;
}

// ������������֤�̲���6.3.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;
typedef int arrT[10] ;                    // arrT��һ�����ͱ�������ʾ����Ϊ����10�����������飬һ���ȼ������� using arrT = int[10] ;

arrT* func( int i ) ;

auto func2( int i ) -> int(*) [10] ;

int odd[] = { 1 , 3 , 5 , 7, 9 } ;
int even[] = { 0 , 2 , 4 , 6, 8 } ;
decltype( odd ) *arrPtr( int i ) ;

int main() {

    return 0;
}

decltype( odd ) *arrPtr( int i ){
    return ( i % 2 ) ? &odd : &even ;
}

// ������������֤�̲���9.3.6�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    vector<int>::const_iterator iter = ivec.cbegin() ;
    while( iter != ivec.cend() )
        if( *iter & 1 ){
            iter = ivec.insert( iter , *iter ) ;     // ���Ƶ�ǰԪ��
            iter += 2 ;                               // ��ǰ�ƶ���������������ǰԪ���Լ����뵽��֮ǰ��Ԫ�ء�
        }
        else
            iter = ivec.erase( iter ) ;               // ɾ��ż��Ԫ�أ��������ƶ���������iter�Ѿ�ָ��������ɾ��Ԫ��֮���Ԫ��
    for( const int i : ivec )                        // ���д�ӡ����֤���
        cout << i << " " ;
    return 0;
}

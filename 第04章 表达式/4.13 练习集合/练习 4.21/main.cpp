// ������������֤��������ϰ4.21�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
#include <random>
using namespace std;

int main() {
    constexpr size_t sz = 10 ;                   // ʹ�ó���sz��Ϊ�����ά��
    vector<int> ivec ;
    static default_random_engine e ;
    static uniform_int_distribution<unsigned> u( 0 , 9 ) ;
    for( size_t i = 0 ; i != sz ; ++i )
        ivec.push_back( u(e) ) ;                 // ����100���ڵ������
    cout << "���������Ϊ��" << endl;
    for( int i : ivec )
        cout << i << " " ;                       // ��ӡ���������Ա������Ƚ�
    cout << endl;
    cout << "���������Ϊ��" << endl;
    for( int &i : ivec )                         // ��ΪҪ��д�����Ա���������
         i = ( ( i % 2 != 0 ) ? 2 * i : i ) ;    // �������ʽ�������������������ż���򲻱�
    for( int i : ivec )
        cout << i << " " ;
    return 0;
}

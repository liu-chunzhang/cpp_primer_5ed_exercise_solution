// ������������֤�̲���17.2.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<32> bitvec( 1U ) ;           // bitvec��32λ����λΪ1������λΪ0
    cout << bitvec << endl;

    bitset<13> bitvec1( 0xbeef ) ;      // bitvec1�ȳ�ʼֵС����ʼֵ�еĸ�λ������
    cout << bitvec1 << endl;
    bitset<20> bitvec2( 0xbeef ) ;      // bitset2�ȳ�ʼֵ�����ĸ�λ����Ϊ0
    cout << bitvec2 << endl;
    bitset<128> bitvec3( ~0ULL ) ;      // ��64λ�����У�long long 0ULL��64��0���أ�����~0ULL��64��1
    cout << bitvec3 << endl;

    bitset<32> bitvec4( "1100" ) ;      // 2��3��λΪ1������λΪ0

    string str0 = "010001011" ;         // ��������˵��string���±���ϰ����bitsetǡ���෴������
    bitset<3> b1( str0 , 1 ) ;
    cout << b1 << endl;

    string str( "1111111000000011001101" ) ;
    bitset<32> bitvec5( str , 5 , 4 ) ;             // ��str[5]��ʼ���ĸ�������λ��1100
    cout << bitvec5 << endl;
    bitset<32> bitvec6( str , str.size() - 4 ) ;    // ʹ������ĸ��ַ�
    cout << bitvec6 << endl;

    return 0;
}

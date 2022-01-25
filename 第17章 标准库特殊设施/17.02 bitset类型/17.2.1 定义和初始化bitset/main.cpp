// 本程序用于验证教材中17.2.1节内容的可靠性，并提供感性认知
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<32> bitvec( 1U ) ;           // bitvec有32位，低位为1，其他位为0
    cout << bitvec << endl;

    bitset<13> bitvec1( 0xbeef ) ;      // bitvec1比初始值小，初始值中的高位被丢弃
    cout << bitvec1 << endl;
    bitset<20> bitvec2( 0xbeef ) ;      // bitset2比初始值大，它的高位被置为0
    cout << bitvec2 << endl;
    bitset<128> bitvec3( ~0ULL ) ;      // 在64位机器中，long long 0ULL是64个0比特，所以~0ULL是64个1
    cout << bitvec3 << endl;

    bitset<32> bitvec4( "1100" ) ;      // 2、3两位为1，其余位为0

    string str0 = "010001011" ;         // 此例用以说明string的下标标号习惯与bitset恰好相反！！！
    bitset<3> b1( str0 , 1 ) ;
    cout << b1 << endl;

    string str( "1111111000000011001101" ) ;
    bitset<32> bitvec5( str , 5 , 4 ) ;             // 从str[5]开始的四个二进制位，1100
    cout << bitvec5 << endl;
    bitset<32> bitvec6( str , str.size() - 4 ) ;    // 使用最后四个字符
    cout << bitvec6 << endl;

    return 0;
}

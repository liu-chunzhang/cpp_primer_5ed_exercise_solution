// ������������֤�̲���4.8�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <bitset>                                   // bitset���ļ�������ͷ�ļ�bitset�У��ο��̲�17.2�ڣ�
using namespace std;

int main() {

    unsigned int i1 = 0233 ;                       // �ع�һ�£���0��ͷ����������˽��������̲�P35��
    bitset<32> bitset1{ i1 } ;                     // �˴���bitset���ڵĺ�������λ������к�Ľ��
    cout << bitset1 << endl;

    unsigned int i2 = 0233 << 8 ;                 // �˴���32λλ�����ʾ��<< 8 ��ʾ�����ƶ�8λ
    bitset<32> bitset2{ i2 } ;
    cout << bitset2 << endl;

    unsigned int i3 = 0233 << 25 ;                // ��ʼ�����ƶ�ʱ��������ʱ���о��棬�����ᱨ��
    bitset<32> bitset3{ i3 } ;
    cout << bitset3 << endl;

    /*
    unsigned int i4 = 0233 >> 1 ;                 // ��ʼ�����ƶ�ʱ��������ᱨ��;���
    bitset<32> bitset4{i4} ;
    cout << bitset4 << endl;
    */

    /*
    unsigned int i5 = 0233 ;
    bitset<32> bitset5{i5} ;
    cout << ~bitset5 << endl;                     // �˴�����λ�������Ч��
    */

    /*
    unsigned char b1 = 0145 , b2 = 0257 ;        // �˴�����λ�롢λ��λ����������Ч��
    bitset<8> bitset6{b1 & b2} ;
    cout << bitset6 << endl;                     // ����λ������������������������Ӧλ�ö���1������������λΪ1������Ϊ0
    bitset<8> bitset7{b1 | b2} ;
    cout << bitset7 << endl;                     // ����λ������������������������Ӧλ��������һ����1������������λΪ1������Ϊ0
    bitset<8> bitset8{b1 ^ b2} ;
    cout << bitset8 << endl;                     // ����λ��������������������������ҽ�����1������������λΪ1������Ϊ0
    */

    /*
    unsigned long quiz1 = 0 ;
    quiz1 |= 1UL << 27 ;
  //quiz1 &= ~(1UL << 27) ;
    bool status = quiz1 & (1UL << 27) ;
        cout << status << endl;

    cout << 42 + 10 ;                             // ��ȷ��+�����ȼ����ߣ���������ͽ��
    cout << ( 42 > 10 ) ;                         // ��ȷ����Ϊ��ϵ��������ȼ�������λ�������������ʵ��ԭ�⣬���������
  //cout << 10 < 42 ;                             // ������ͼ�Ƚ�cout��42��
    */

    return 0;
}

// ������������֤�̲���19.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

enum class open_modes{ input , output , append };
enum color { red , yellow , green };                    // ���޶��������ö������
//enum stoplight { red , yellow , green };              // �����ظ�������ö�ٳ�Ա
enum class peppers { red , yellow , green };           // ��ȷ��ö�ٳ�Ա��������

enum intValues : unsigned long long { charTyp = 255 , shortTyp = 65535 , intTyp = 65535 , longTyp = 4294967296UL , long_longTyp = 18446744073709551615ULL };
enum Tokens { INLINE = 128 , VIRTUAL = 129 };

void ff( int i ) ;
void ff( Tokens tokens ) ;

int main() {
    color eyes = green ;                 // ���޶��������ö������
  //peppers p = green ;                 // ����peppers��ö�ٳ�Ա������Ч���������У�color::green����Ч���������У������ʹ���
    color hair = color::red ;           // ��ȷ��������ʽ�ط���ö�ٳ�Ա
    peppers p2 = peppers::red ;         // ��ȷ��ʹ��pappers��red

  //open_modes om = 2 ;                 // ����2����������open_modes
    open_modes om ;
    om = open_modes::input ;            // ��ȷ��input��open_modes��һ��ö�ٳ�Ա

    int i = color::red ;                // ��ȷ�����޶��������ö�����͵�ö�ٳ�Ա��ʽ��ת����int
  //int j = peppers::red ;              // �����޶��������ö�����Ͳ��������ʽת��

    Tokens curTok = INLINE ;
    ff( 128 ) ;                         // ��ȷƥ��ff( int )
    ff( INLINE ) ;                      // ��ȷƥ��ff( Tokens )
    ff( curTok ) ;                      // ��ȷƥ��ff( Tokens )
    return 0;
}

void ff( int i ) {
    cout << "Using function void ff( int i )" << endl;
}

void ff( Tokens tokens ) {
    cout << "Using function void ff( Tokens tokens )" << endl;
}

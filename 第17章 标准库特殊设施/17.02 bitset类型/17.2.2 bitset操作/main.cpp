// ������������֤��������ϰ17.2.2�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <bitset>
using namespace std;

int main() {

    bitset<32> bitvec( 1U ) ;                                                   // 32λ����λΪ1������λΪ0
    cout << bitvec << endl;
    bool is_set = bitvec.any() ;
    cout << boolalpha ;                                                         // ����IO��������ʽ����boolֵ��string��ӡ
    cout << "is_set: " << is_set << endl;                                       // �õ�true����Ϊ�е�λ����λ
    bool is_not_set = bitvec.none() ;
    cout << "is_not_set: " << is_not_set << endl;                               // �õ�false����Ϊ��һλ��λ
    bool all_set = bitvec.all() ;
    cout << "all_set: " << all_set << endl;                                     // �õ�false����Ϊֻ��1λ��λ
    size_t onBits = bitvec.count() ;
    cout << "onBits: " << onBits << endl;                                      // ֻ��1λ��λ���ʷ���1
    size_t sz = bitvec.size() ;
    cout << "sz: " << sz << endl;                                              // ���ش�С32
    bitvec.flip() ;                                                             // ��ת����λ
    cout << bitvec << endl;
    bitvec.reset() ;                                                            // ������λ��λ
    cout << bitvec << endl;
    bitvec.set() ;                                                              // ������λ��λ
    cout << bitvec << endl;
    cout << endl;

    bitvec.flip( 0 ) ;                                                                     // ��ת��һλ
    cout << bitvec << endl;
    bitvec.set( bitvec.size() - 3 , false ) ;                                             // ��λ���һλ
    cout << bitvec << endl;
    bitvec.set( 0 , true ) ;                                                              // ����λ��λ
    cout << bitvec << endl;
    bitvec.reset( 3 ) ;                                                                    // ����3λ��λ
    cout << bitvec << endl;
    cout << "bitvec.test( 0 ): " << bitvec.test( 0 ) << endl;      // ����false����Ϊ��һλ��λ
    cout << endl;

    bitvec[ 0 ] = 0 ;                                                          // ����λ��λ
    cout << bitvec << endl;
    bitvec[ 31 ] = bitvec[ 0 ] ;                                               // ����λ��λ
    cout << bitvec << endl;
    bitvec[ 0 ].flip() ;                                                       // ��ת��һλ
    cout << bitvec << endl;
    cout << endl << endl;
    ~bitvec[ 0 ] ;                                                             // ȡ��λ�����~����bitsetʧ�飬�Ժ���Ҫע�⣡��
    cout << bitvec << endl;
    ~bitvec ;
    cout << bitvec << endl;
  //bitvec = bitvec & 1UL ;                                                    // ȡλ������Ҳ��һ���ģ����Բ�Ҫ��λ��������õ�bitset�����ϡ�
    cout << "bitvec[0]: " << bitvec[ 0 ] << endl;       // bitvec[0]����ת��Ϊboolֵ
    cout << endl;

    unsigned long ulong = bitvec.to_ulong() ;
    cout << "ulong = " << ulong << endl;
    cout << endl;

    bitset<16> bits ;
    cin >> bits ;                           // ��cin��ȡ���16��0��1
    cout << "bits:" << bits << endl;       // ��ӡ�ոն�ȡ������

    bool status ;
    unsigned long quizA = 0 ;              // ��ֵ������λ����ʹ��
    quizA |= 1UL << 27 ;                    // ָ���˵�27��ѧ��ͨ���˲���
    status = quizA & ( 1UL << 27 ) ;        // ����27��ѧ��ͨ���˲���
    quizA &= ~( 1UL << 27 ) ;               // ��27��ѧ��δͨ������
    cout << endl;

    bitset<30> quizB ;                      // ÿ��ѧ������һλ
    quizB.set( 27 ) ;                       // ָ����27��ѧ��ͨ���˲���
    status = quizB[ 27 ] ;                  // ����27��ѧ���Ƿ�ͨ���˲���
    quizB.reset( 27 ) ;                     // ��27��ѧ��δͨ������

    return 0;
}

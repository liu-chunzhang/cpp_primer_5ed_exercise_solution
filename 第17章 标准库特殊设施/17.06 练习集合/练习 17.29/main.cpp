// ������������֤��������ϰ17.29�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <random>
using namespace std;

unsigned get_rand_unsigned( unsigned n = 0 ) ;      // �˼����Ҫ��ĺ������������������趨��Ĭ�������趨Ϊ0

int main()
{   cout << get_rand_unsigned( 3 ) << " " << get_rand_unsigned( 3 ) << " " << get_rand_unsigned( 3 ) << endl;
    cout << get_rand_unsigned() << " " << get_rand_unsigned() << " " << get_rand_unsigned() << endl;
    return 0;
}

unsigned get_rand_unsigned( unsigned n ) {
    static default_random_engine e( n ) ;
    static uniform_int_distribution<unsigned> u( 0 , 9999 ) ;
    return u( e ) ;
}

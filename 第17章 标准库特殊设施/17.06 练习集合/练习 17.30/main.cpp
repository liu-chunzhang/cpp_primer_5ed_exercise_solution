// ������������֤��������ϰ17.30�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <random>
using namespace std;

unsigned get_rand_unsigned( unsigned n = 0 , unsigned M = 9999 , unsigned m = 0 ) ;      // �˼����Ҫ��ĺ������������˴�Сֵ�趨

int main()
{   cout << get_rand_unsigned( 3 ) << " " << get_rand_unsigned( 3 ) << " " << get_rand_unsigned( 3 ) << endl;
    cout << get_rand_unsigned() << " " << get_rand_unsigned() << " " << get_rand_unsigned() << endl;
    cout << get_rand_unsigned( 3 , 5 , 0 ) << " " << get_rand_unsigned( 3 , 5 , 0 ) << " " << get_rand_unsigned( 3 , 5 , 0 ) << endl;
    cout << get_rand_unsigned( 3 , 0 , 5 ) << " " << get_rand_unsigned( 3 , 0 , 5 ) << " " << get_rand_unsigned( 3 , 0 , 5 ) << endl;
    return 0;
}

unsigned get_rand_unsigned( unsigned n , unsigned M , unsigned m ) {
    static default_random_engine e( n ) ;
    if( m > M )
        std::swap( m , M ) ;
    static uniform_int_distribution<unsigned> u( m , M ) ;
    return u( e ) ;
}

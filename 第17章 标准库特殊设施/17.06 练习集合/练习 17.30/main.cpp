// 本程序用于验证读者在练习17.30中的想法，并在必要的地方予以说明
#include <iostream>
#include <random>
using namespace std;

unsigned get_rand_unsigned( unsigned n = 0 , unsigned M = 9999 , unsigned m = 0 ) ;      // 此即题干要求的函数，新增加了大小值设定

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

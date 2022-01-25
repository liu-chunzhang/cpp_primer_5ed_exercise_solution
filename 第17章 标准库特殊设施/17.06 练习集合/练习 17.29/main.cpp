// 本程序用于验证读者在练习17.29中的想法，并在必要的地方予以说明
#include <iostream>
#include <random>
using namespace std;

unsigned get_rand_unsigned( unsigned n = 0 ) ;      // 此即题干要求的函数，可以增加种子设定，默认种子设定为0

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

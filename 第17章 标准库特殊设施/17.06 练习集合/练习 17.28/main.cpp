// 本程序用于验证读者在练习17.28中的想法，并在必要的地方予以说明
#include <ctime>
#include <iostream>
#include <random>
using namespace std;

unsigned get_rand_unsigned() ;      // 此即题干要求的函数

int main()
{   cout << get_rand_unsigned() << " " << get_rand_unsigned() << " " << get_rand_unsigned() << endl;
    return 0;
}

unsigned get_rand_unsigned() {
    static default_random_engine e( time( 0 ) ) ;
    static uniform_int_distribution<unsigned> u( 0 , 9999 ) ;
    return u( e ) ;
}

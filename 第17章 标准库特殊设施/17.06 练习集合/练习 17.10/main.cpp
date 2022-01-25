// 本程序用于验证读者在练习17.10中的想法，并在必要的地方予以说明
#include <bitset>
#include <iostream>
#include <vector>
using namespace std;

int main( int argc , char** argv ) {
    bitset<32> bv1( ( 1 << 1 ) | ( 1 << 2 ) | ( 1 << 3 ) | ( 1 << 5 ) | ( 1 << 8 ) | ( 1 << 13 ) | ( 1 << 21 ) ) ;
    cout << bv1 << endl;
    bitset<32> bv2;
    vector<unsigned> uvec = { 1 , 2 , 3 , 5 , 8 , 13 , 21 } ;
    for( const unsigned u : uvec )
        bv2.set( u ) ;
    cout << bv2 << endl;
    return 0;
}

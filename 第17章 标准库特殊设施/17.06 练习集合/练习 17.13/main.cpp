// 本程序用于验证读者在练习17.13中的想法，并在必要的地方予以说明
#include <random>
#include <set>
#include "exam.h"

int main( int argc , char** argv ) {
    set<unsigned> uset ;
    static default_random_engine eng ;
    static uniform_int_distribution<unsigned> u( 0 , 49 ) ;
    for( size_t i = 0 ; i != 50 ; ++i )
        uset.insert( u( eng ) ) ;
    exam<50> e ;
    for( const unsigned u : uset )
        e.rewrite_answer( u , true ) ;
    cout << e.get_all_answer() << endl;

    bitset<50> a ;
    cout << e.size() << "题对了" << e.score( a ) << "道。" << endl;
    return 0;
}

// 本程序用于验证教材中17.4.1节内容的可靠性，并提供感性认知
#include <ctime>
#include <iostream>
#include <random>
#include <vector>
using namespace std;

vector<unsigned> bad_randVec() ;
vector<unsigned> good_rangVec() ;

int main()
{   /*
    default_random_engine e ;
    for( size_t i = 0 ; i != 10 ; ++i )
        cout << e() << " " ;
    cout << endl;
    */

    /*
    uniform_int_distribution<unsigned> u( 0 , 9 ) ;
    default_random_engine e2 ;
    for( size_t i = 0 ; i != 10 ; ++i )
        cout << u( e2 ) << " " ;
    cout << endl;
    cout << "min: " << e.min() << " max: " << e.max() << endl;
    */

    /*
    vector<unsigned> v1( bad_randVec() ) ;
    vector<unsigned> v2( bad_randVec() ) ;
    cout << ( ( v1 == v2 ) ? "v1 == v2" : "v1 != v2" ) << endl;

    vector<unsigned> v3( good_rangVec() ) ;
    vector<unsigned> v4( good_rangVec() ) ;
    cout << ( ( v3 == v4 ) ? "v3 == v4" : "v3 != v4" ) << endl;
    */

    /*
    default_random_engine e1 ;                                      // 使用默认种子
    default_random_engine e2( 2147483646 ) ;                        // 使用给定的种子值
    default_random_engine e3 ;                                      // 使用默认种子
    e3.seed( 32767 ) ;                                              // 使用seed获得一个新种子值
    default_random_engine e4( 32767 ) ;                             // 将种子值设置为32767
    for( size_t i = 0 ; i != 100 ; ++i ){
        if( e1() == e2() )
            cout << "unsigned match at iteration:" << i << endl;
        if( e3() != e4() )\
            cout << "seeded differs at iteration:" << i << endl;
    }

    default_random_engine e5( time( 0 ) ) ;                         // 稍微随机些的种子
    */

    return 0;
}

vector<unsigned> bad_randVec() {
    default_random_engine e ;
    uniform_int_distribution<unsigned> u( 0 , 9 ) ;
    vector<unsigned> ret ;
    for( size_t i = 0 ; i != 100 ; ++i )
        ret.push_back( u( e ) ) ;
    return ret ;
}

vector<unsigned> good_rangVec() {
    static default_random_engine e ;
    static uniform_int_distribution<unsigned> u( 0 , 9 ) ;
    vector<unsigned> ret ;
    for( size_t i = 0 ; i != 100 ; ++i )
        ret.push_back( u( e ) ) ;
    return ret ;
}

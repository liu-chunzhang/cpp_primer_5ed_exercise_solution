// 本程序用于验证教材中17.4.2节内容的可靠性，并提供感性认知
#include <iostream>
#include <random>
using namespace std;

bool play( bool ) ;             // 为保证程序正常运行，随便写的一个程序

int main()
{   /*
    default_random_engine e ;
    uniform_real_distribution<double> u( 0 , 1 ) ;
    for( size_t i = 0 ; i != 10 ; ++i )
        cout << u( e ) << " " ;
    cout << endl;

    uniform_real_distribution<> u2( 0 , 1 ) ;
    */

    /*
    default_random_engine e2 ;                      // 生成随机整数
    normal_distribution<> n( 4 , 1.5 ) ;            // 期望为4，方差为1.5
    vector<unsigned> vals( 9 ) ;                     // 9个元素均为0，表示求和基点
    for( size_t i = 0 ; i != 200 ; ++i ){
        unsigned v = lround( n( e2 ) ) ;             // 舍入到最接近的整数
        if( v < vals.size() )                        // 如果结果在统计范围内
            ++vals[ v ] ;                            // 统计每个数出现了多少次
    }
    for( size_t j = 0 ; j != vals.size() ; ++j )
        cout << j << ": " << string( vals[j] , '*' ) << endl;
    */

    string resp ;
    default_random_engine e ;                       // e应该保持状态，所以必须在循环外定义
    bernoulli_distribution b ;                      // 默认分布是B( 0.5 , 0.25 )
    do{
        bool first = b( e ) ;                                                               // 若结果为true，则程序方先行
        cout << ( first ? "We go first" : "You go first" ) << endl;
        cout << ( play( first ) ? "sorry , you lost." : "Congrats ,you won" ) << endl;
        cout << "play again? if not , Ctrl + C is OK." << endl;
    }while( cin >> resp );

    bernoulli_distribution b2( 0.55 ) ;             // 给程序一个微小的优势

    return 0;
}

bool play( bool b ) {
    static default_random_engine e ;
    static bernoulli_distribution berdis ;
    return berdis( e ) ;
}

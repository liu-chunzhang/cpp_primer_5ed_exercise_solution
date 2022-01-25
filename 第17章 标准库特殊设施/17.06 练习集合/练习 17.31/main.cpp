// 本程序用于验证读者在练习17.31中的想法，并在必要的地方予以说明
#include <iostream>
#include <random>
using namespace std;

bool play( bool ) ;

int main()
{   string str ;                                // 在循环内定义b和e，每个循环布都会用默认的种子(0)重新初始化随机数引擎e，因此调用b(e)永远
    do{                                         // 得到的是特定随机数序列的第一个数，游戏的先行者永远是固定的。
        default_random_engine e ;             // 而在循环外定义，则可以保持引擎状态，每次得到随机数序列的下一个值，游戏的先行者会改变。
        bernoulli_distribution b ;
        bool first = b( e ) ;
        cout << ( first ? "We go first" : "You go first" ) << endl;
        cout << ( play( first ) ? "sorry , you lost." : "Congrats ,you won" ) << endl;
        cout << "play again? if not , Ctrl + C is OK." << endl;
    }while( cin >> str );
    return 0;
}

bool play( bool b ) {
    static default_random_engine e ;
    static bernoulli_distribution berdis ;
    return berdis( e ) ;
}

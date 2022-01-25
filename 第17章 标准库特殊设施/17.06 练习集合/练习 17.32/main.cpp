// 本程序用于验证读者在练习17.32中的想法，并在必要的地方予以说明
#include <iostream>
#include <random>
using namespace std;

bool play( bool ) ;

int main()
{   default_random_engine e ;
    bernoulli_distribution b ;       // 如果在循环内定义str(即resp)，则其生命周期仅在循环体内，而while循环条件判定不属于循环体！因此，
    do{ string str ;                  // 在进行循环条件判定时，str(即resp)已经被销毁，程序会产生编译错误！
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

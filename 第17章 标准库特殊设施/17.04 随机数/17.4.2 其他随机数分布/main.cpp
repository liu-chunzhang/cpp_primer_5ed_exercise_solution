// ������������֤�̲���17.4.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <random>
using namespace std;

bool play( bool ) ;             // Ϊ��֤�����������У����д��һ������

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
    default_random_engine e2 ;                      // �����������
    normal_distribution<> n( 4 , 1.5 ) ;            // ����Ϊ4������Ϊ1.5
    vector<unsigned> vals( 9 ) ;                     // 9��Ԫ�ؾ�Ϊ0����ʾ��ͻ���
    for( size_t i = 0 ; i != 200 ; ++i ){
        unsigned v = lround( n( e2 ) ) ;             // ���뵽��ӽ�������
        if( v < vals.size() )                        // ��������ͳ�Ʒ�Χ��
            ++vals[ v ] ;                            // ͳ��ÿ���������˶��ٴ�
    }
    for( size_t j = 0 ; j != vals.size() ; ++j )
        cout << j << ": " << string( vals[j] , '*' ) << endl;
    */

    string resp ;
    default_random_engine e ;                       // eӦ�ñ���״̬�����Ա�����ѭ���ⶨ��
    bernoulli_distribution b ;                      // Ĭ�Ϸֲ���B( 0.5 , 0.25 )
    do{
        bool first = b( e ) ;                                                               // �����Ϊtrue�����������
        cout << ( first ? "We go first" : "You go first" ) << endl;
        cout << ( play( first ) ? "sorry , you lost." : "Congrats ,you won" ) << endl;
        cout << "play again? if not , Ctrl + C is OK." << endl;
    }while( cin >> resp );

    bernoulli_distribution b2( 0.55 ) ;             // ������һ��΢С������

    return 0;
}

bool play( bool b ) {
    static default_random_engine e ;
    static bernoulli_distribution berdis ;
    return berdis( e ) ;
}

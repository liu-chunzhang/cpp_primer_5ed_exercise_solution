// ������������֤��������ϰ17.31�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <random>
using namespace std;

bool play( bool ) ;

int main()
{   string str ;                                // ��ѭ���ڶ���b��e��ÿ��ѭ����������Ĭ�ϵ�����(0)���³�ʼ�����������e����˵���b(e)��Զ
    do{                                         // �õ������ض���������еĵ�һ��������Ϸ����������Զ�ǹ̶��ġ�
        default_random_engine e ;             // ����ѭ���ⶨ�壬����Ա�������״̬��ÿ�εõ���������е���һ��ֵ����Ϸ�������߻�ı䡣
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

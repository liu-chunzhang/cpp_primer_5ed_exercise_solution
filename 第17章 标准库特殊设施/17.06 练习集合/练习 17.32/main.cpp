// ������������֤��������ϰ17.32�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <random>
using namespace std;

bool play( bool ) ;

int main()
{   default_random_engine e ;
    bernoulli_distribution b ;       // �����ѭ���ڶ���str(��resp)�������������ڽ���ѭ�����ڣ���whileѭ�������ж�������ѭ���壡��ˣ�
    do{ string str ;                  // �ڽ���ѭ�������ж�ʱ��str(��resp)�Ѿ������٣����������������
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

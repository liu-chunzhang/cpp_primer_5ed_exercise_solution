// ������������֤��������ϰ17.28�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <ctime>
#include <iostream>
#include <random>
using namespace std;

unsigned get_rand_unsigned() ;      // �˼����Ҫ��ĺ���

int main()
{   cout << get_rand_unsigned() << " " << get_rand_unsigned() << " " << get_rand_unsigned() << endl;
    return 0;
}

unsigned get_rand_unsigned() {
    static default_random_engine e( time( 0 ) ) ;
    static uniform_int_distribution<unsigned> u( 0 , 9999 ) ;
    return u( e ) ;
}

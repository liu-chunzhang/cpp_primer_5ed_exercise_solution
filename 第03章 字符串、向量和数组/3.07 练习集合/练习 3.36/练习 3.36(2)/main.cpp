// ������������֤��������ϰ3.36�����뷨�����ڱ�Ҫ�ĵط�����˵�����Ƚ������������
#include <iostream>
#include <random>
#include <vector>
using namespace std;

int main() {
    vector<int> ia1( 10 ) , ia2( 10 ) ;
    static default_random_engine e ;
    static uniform_int_distribution<unsigned> u( 0 , 9 ) ;
    for( size_t k = 0 ; k != 10 ; ++k )
        ia1[k] = u( e ) , ia2[k] = u( e ) ;                      // ʹ��������������������Ԫ�أ�ÿ��ѭ������һ��10���ڵ����������ӵ�����������
    if( ia1.size() != ia2.size() ){
        cerr << "���������鲻��ȣ�1" << endl;                  // ��Ȼ������ά������ȵ��������Ȼ���������
        return -1;
    }
    else if( ia1 != ia2 ){
        cerr << "���������鲻�ȣ�2" << endl;
        return -1 ;
    }
    else{
        cout << "������������ȣ�" << endl;
        return 0;
    }
}

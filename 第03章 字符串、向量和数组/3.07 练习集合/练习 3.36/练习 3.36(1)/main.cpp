// ������������֤��������ϰ3.36�����뷨�����ڱ�Ҫ�ĵط�����˵�����Ƚ������������
#include <iostream>
#include <random>
using namespace std;

int main() {
    constexpr unsigned sz1 = 10 , sz2 = 10 ;                   // ʹ������������Ϊ�����ά��
    int ia1[sz1] , ia2[sz2];
    static default_random_engine e ;
    static uniform_int_distribution<unsigned> u( 0 , 9 ) ;
    size_t size_ia1 = sizeof( ia1 ) / sizeof( ia1[0] ) , size_ia2 = sizeof( ia2 ) / sizeof( ia2[0] ) ;
    if( size_ia1 != size_ia2 ){
        cout << "���������鲻��ȣ�1" << endl;                   // ��Ȼ������ά������ȵ��������Ȼ���������
        return -1;
    }
    else{
        for( size_t i = 0 ; i != sz1 ; ++i )                    // ʹ��������������������Ԫ��
            ia1[i] = u(e) , ia2[i] = u(e) ;                      // ÿ��ѭ������һ��10���ڵ����������ӵ�����������
        for( size_t i = 0 ; i != sz1 ; ++i )                    // ʹ��forѭ���ƶ�ָ�룬Ҳ���Կ�����whileѭ��д��һ��
            if( ia1[i] != ia2[i] ){
                cerr << "���������鲻��ȣ�2" << endl;
                return -1;
            }
        cout << "������������ȣ�" << endl;
        return 0;
    }
}

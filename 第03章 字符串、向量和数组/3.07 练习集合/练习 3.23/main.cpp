// ������������֤��������ϰ3.23�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <random>
#include <vector>
using namespace std;                // C++��Ӧ��ʹ�ÿ⺯��rand����Ӧ��ʹ��default_random_engine���ǡ���ķֲ������

int main() {
    vector<unsigned> uvec ;
    static default_random_engine e ;                                     // ����������
    static uniform_int_distribution<unsigned> u( 0 , 999 ) ;            // �������ֲ�
    for( vector<int>::size_type i = 0 ; i != 10 ; ++i )                   // ѭ��10�Σ�����10�������
        uvec.push_back( u(e) ) ;                                           // ÿ��ѭ������һ��1000�ڵ����������ӵ�uvec��

    cout << "������ɵ�10�������ǣ�" << endl;
    for( vector<unsigned>::iterator i = uvec.begin() ; i != uvec.end() ; ++i ){     // �����÷ǳ���������ȥִ�б��˲�������Ϊ���д����ֵ����Ӧ�ģ�����ľͿ����ó���
        cout << *i << " " ;                                  // ������
        *i *= 2 ;
    }

    cout << "\n���Ǳ�Ϊ������ֱ�Ϊ��" << endl;
    for( vector<unsigned>::const_iterator i = uvec.cbegin() ; i != uvec.cend() ; ++i )
        cout << *i << " " ;
    return 0;
}

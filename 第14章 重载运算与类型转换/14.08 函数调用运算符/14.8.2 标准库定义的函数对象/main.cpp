// ������������֤�̲���14.8.2�����ݵĿɿ��ԣ����ṩ������֪
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    plus<int> intAdd ;                                               // ��ִ��int�ӷ��ĺ�����
    negate<int> intNegate ;                                          // �ɶ�intֵȡ���ĺ�������
    int sum = intAdd( 10 , 20 ) ;                                     // �ȼ���int sum = 10 + 20 ;
    cout << sum << endl;                                             // ��ӡ���Ϊ30
    sum = intNegate( intAdd( 10 ,20 ) ) ;                             // �ȼ���sum = - ( 10 + 20 ) ;
    cout << sum << endl;                                             // ��ӡ���Ϊ-30
    sum = intAdd( 10 , intNegate( 10 ) ) ;                            // �ȼ���sum = 10 + ( - 10 ) ;
    cout << sum << endl;                                             // ��ӡ�����0

    vector<string> svec ;
    sort( svec.begin() , svec.end() , greater<string>() ) ;        // ����һ����ʱ������������ִ������string�����>�Ƚ�����
    vector<string*> spvec ;
    sort( spvec.begin() , spvec.end() , less<string*>() ) ;        // ��׼��涨��ָ���less���������
    return 0;
}

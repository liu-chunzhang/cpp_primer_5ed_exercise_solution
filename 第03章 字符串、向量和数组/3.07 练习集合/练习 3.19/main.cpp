// ������������֤��������ϰ3.19�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;                                         // ǰ�������ڳ�ʼ������������ڸ���vector

int main() {
    vector<int> vint1( 10 , 42 ) ;                            // ��һ�֣�ֱ�ӳ�ʼ��
    cout << "v1:" ;
    for( auto i : vint1 )
        cout << i << " " ;
    cout << endl;

    vector<int> vint2{ 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 } ;   // �ڶ��֣��б��ʼ��
    cout << "v2:" ;
    for( auto i : vint2 )
        cout << i << " " ;
    cout << endl;

    vector<int> vint3 = { 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 } ; // �����֣�ֱ�ӳ�ʼ��
    cout << "v3:" ;
    for( auto i : vint3 )
        cout << i << " " ;
    cout << endl;

    vector<int> vint4;                                        // �����֣���δ�����С��vector��ѹ������
    for( int i = 0 ; i != 10 ; ++i )
        vint4.push_back( 42 ) ;
    cout << "v4:" ;
    for( auto i : vint4 )
        cout << i << " " ;
    cout << endl;

    vector<int> vint5( 10 ) ;                                  // �����֣����Ѷ����С��vector��ѹ������
    for( auto &i : vint5 )
        i = 42;
    cout << "v5:" ;
    for( auto i : vint5 )
        cout << i << " " ;
    cout << endl;

    return 0;
}

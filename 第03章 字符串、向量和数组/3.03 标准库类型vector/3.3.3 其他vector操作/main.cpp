// ������������֤�̲���3.3.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
    /*
    vector<int> v{ 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    for( auto &i : v )                                         // �˴���auto���Ի�Ϊint
        i *= i ;
    for( auto i : v )
        cout << i << " ";
    cout << endl;
    */

    /*
    vector<unsigned> scores( 11 , 0 ) ;
    unsigned grade = 0 ;
    ifstream readFile( "data.txt" ) ;
    while( readFile >> grade )
        if( grade <= 100 )
          ++scores[grade/10] ;
    for( unsigned i : scores )                               // �˴���Ϊ��Ҫ��ӡ��scores��¼��ȫ�壬���������˷�Χfor��䣬�Եø�Ϊ������
       cout << i << " " ;                                    // ���ǻ���Ҫע�����֣�����ô�ͳforѭ��ȥд������������ѭ������i����
    */                                                       // �꣬�������ӱ��������˴���i���Ǳ����������ȥ��ӡscores[i]�ǵò�����ȷ
                                                             // ����ģ�
    /*
    vector<int> ivec;                                        // ��vector����
    for( decltype(ivec.size()) ix = 0 ; ix != 10 ; ++ix )
        ivec[ix] = ix ;
    cout << ivec[0] << endl;                                 // ��Ȼ������û�б���������δ����Ǵ���ģ��Ͻ����±���ʲ����ڵ�Ԫ�ص�ַ��
    */

    /*
    vector<int> ivec;                                        // ��vector����
    for(decltype(ivec.size()) ix = 0 ; ix != 10 ; ++ix)
        ivec.push_back(ix);
    cout << ivec[6] << endl;                                 // �������ӵ������������֤����ȷ��
    */

    return 0;
}

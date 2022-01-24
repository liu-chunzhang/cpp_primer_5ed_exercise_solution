// ������������֤�̲���10.2.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<double> ivec = { 0 , 1 , 2 , 3 , 4.6 , 5.6 , 6 , 7 , 8 , 9 } ;
    cout << accumulate( ivec.cbegin() , ivec.cend() , 10 ) << endl;
    cout << accumulate( ivec.cbegin() , ivec.cend() , 10.0 ) << endl;            // �������˵�����������������������ʹ�õļӷ����������

    vector<string> svec = { "Welcome" , "to" , "C++" , "family!" } ;
    cout << accumulate( svec.cbegin() , svec.cend() , string( "" ) ) + "|" << endl;
  //cout << accumulate( svec.cbegin() , svec.cend() , "" ) ;                        // ������Ϊconst char*��û�ж���+�����

    vector<int> roster1 = { 0 , 1 , 2 , 3 } , roster2 = { 0 , 1 , 2 , 3 } ;
    cout << ( equal( roster1.cbegin() , roster1.cend() , roster2.cbegin() ) ? "roster1 == roster2" : "roster1 != roster2" ) << endl;
    return 0;
}

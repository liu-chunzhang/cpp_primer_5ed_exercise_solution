// ������������֤��������ϰ14.43�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;
using std::placeholders::_1 ;

bool Alldivided( int i , vector<int> &ivec ) ;

int main() {
    int i = 3 ;
    vector<int> ivec = { 3 , 6 , 7 } , ivec2 = { 3 , 6 , 9 } ;
    cout << ( Alldivided( i , ivec ) ? "ivec�ڵ�ÿ��Ԫ�ض���������i��" : "������ivec�ڵ�ÿ��Ԫ�ض���������i��" ) << endl;
    cout << ( Alldivided( i , ivec2 ) ? "ivec2�ڵ�ÿ��Ԫ�ض���������i��" : "������ivec2�ڵ�ÿ��Ԫ�ض���������i��" ) << endl;
    return 0;
}

bool Alldivided( int i , vector<int> &ivec ){
    return find_if( ivec.cbegin() , ivec.cend() , bind( modulus<int>() , _1 , i ) ) == ivec.cend() ;   // ʹ�÷����㷨����
}

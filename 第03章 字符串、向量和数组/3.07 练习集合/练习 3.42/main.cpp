// ������������֤��������ϰ3.42�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 14 , 8 , 9 } ;
    int a[ivec.size()] = { 0 } ;
    for( size_t i = 0 ; i != 10 ; ++i )
        a[i] = ivec[i] ;
    for( int i : a )
        cout << i << " ";
    return 0;
}

// ������������֤�̲���9.2.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec( 10 , 42 ) ;
    int val = 3 ;
    vector<int>::iterator beg = ivec.begin() , ter = ivec.end() ;
    while( beg != ter ){
        *beg = val ;
        cout << *beg++ << " " ;
    }
    return 0;
}

// ������������֤�̲���5.4.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec ;
    int i ;
    while( cin >> i )
        ivec.push_back( i ) ;
    vector<int>::const_iterator beg = ivec.cbegin() ;
    while( beg != ivec.cend() && *beg >= 0 )
        ++beg ;
    if( beg == ivec.cend() )
        cout << "�������������û�и�����" << endl;
    return 0;
}

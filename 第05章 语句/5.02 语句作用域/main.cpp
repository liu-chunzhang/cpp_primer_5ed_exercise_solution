// ������������֤�̲���5.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int i = 0 ;
    for( int j = 0 ; j != 10 ; ++j )
        i += j ;
    cout << i << endl;
  //cout << j << endl;                               // ������ѭ���ⲿ���ܹ�����֮ǰѭ���Ŀ��ڵı���j

    vector<int> vint{ 0 , 2 , -4 , 6 , -8 , 10 } ;
    vector<int>::iterator beg = vint.begin() ;
    while( beg != vint.end() && *beg >= 0 )
        ++beg ;
    cout << ( beg == vint.end() ? "vector��Ԫ��ȫ�ǷǸ���!" : "vector��Ԫ���и�����" ) << endl;   // Ϊ��ʹЧ�����ӻ���������������ж����
    return 0;
}

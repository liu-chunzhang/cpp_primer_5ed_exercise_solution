// ������������֤��������ϰ3.32�е��뷨�����ڱ�Ҫ�ĵط�����˵��������ϰ3.31�ﴴ�������鿽����һ�������飨��vector��
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ia1 , ia2;                 // ��������vector��ia1��ia2
    for( size_t i = 0 ; i != 10 ; ++i )
        ia1.push_back( i ) ;               // ��ia1�����´���������
    ia2 = ia1 ;
    for( int i : ia2 )                     // ��ӡ�Ա������
        cout << i << " " ;
    return 0;
}

// ������������֤��������ϰ3.41�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a[10] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    vector<int> vint( begin( a ) , end( a ) );
    for( int i : vint )
        cout << i << " ";                          // �����ӡ�������˵���������е���ȷ��
    return 0;
}

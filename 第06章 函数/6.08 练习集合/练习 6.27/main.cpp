// ������������֤��������ϰ6.27�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    initializer_list<unsigned> ulst = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 } ;
    unsigned sum = 0 ;
    for( const int j : ulst )
        sum += j ;
    cout << sum << endl;
    return 0;
}

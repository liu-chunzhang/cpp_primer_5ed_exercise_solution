// ������������֤��������ϰ10.14�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

auto sum = []( int a , int b ) -> int { return a + b ; } ;

int main() {
    cout << "��������������������������ǵĺ�" << endl;
    int int1 , int2 ;
    cin >> int1 >> int2 ;
    cout << sum( int1 , int2 ) << endl;3 6
    return 0;
}

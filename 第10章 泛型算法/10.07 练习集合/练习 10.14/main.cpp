// 本程序用于验证读者在练习10.14中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

auto sum = []( int a , int b ) -> int { return a + b ; } ;

int main() {
    cout << "请输入两个整数，下面计算它们的和" << endl;
    int int1 , int2 ;
    cin >> int1 >> int2 ;
    cout << sum( int1 , int2 ) << endl;3 6
    return 0;
}

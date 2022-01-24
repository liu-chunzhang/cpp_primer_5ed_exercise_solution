// 本程序用于验证教材中5.4.3节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec{ 0 , 1, 2 , 3 ,4 , 5 , 6 , 7 , 8, 9 } ;
    for( int &r : ivec )                                       // 此处的auto用int代替是可以的，还有一点，为了改写其值，用引用修饰变量
        r *= 2 ;
    return 0;
}

// 本程序用于验证读者在练习1.12中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main(){
    int sum = 0 ;
    for( int i = -100 ; i <= 100 ; ++i)                             // 此循环将-100到100(含-100和100)之间的整数相加，sum的终止为0。
        sum += i;
    cout << "整数-100加到100的和为" << sum << "。" << endl;
    return 0;
}

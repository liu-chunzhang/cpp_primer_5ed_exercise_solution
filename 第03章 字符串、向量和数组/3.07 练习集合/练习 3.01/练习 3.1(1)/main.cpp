// 本程序用于验证读者在练习3.1中的想法，并在必要的地方予以说明：重做1.4.1节的练习1.9
// 本程序目的是使用while循环实现50到100以内整数的相加
#include <iostream>
using std::cout;
using std::endl;

int main() {
    unsigned sum = 0 , i = 50;
    while( i <= 100 )
        sum += i++ ;
    cout << "50加到100的和为" << sum << "。" << endl;
    return 0;
}

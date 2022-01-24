// 本程序用于验证读者在练习1.9中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    int i = 50 , sum = 0 ;
    while( i <= 100 )
        sum += i++ ;
    cout << "自然数50加到100的和为" << sum << "。" << endl;
    return 0;
}

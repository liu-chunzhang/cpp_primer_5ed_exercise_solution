// 本程序用于验证读者在练习1.13中的想法，并在必要的地方予以说明：用for循环重做练习1.9
#include <iostream>
using namespace std;

int main() {
    int sum = 0 ;
    for( int i = 50 ; i <= 100 ; ++i )
        sum += i;
    cout << "自然数50加到100的和为" << sum << "。" << endl;
    return 0;
}

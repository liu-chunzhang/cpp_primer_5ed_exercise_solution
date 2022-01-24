// 本程序用于验证读者在练习1.13中的想法，并在必要的地方予以说明：使用for循环按递减顺序打印10到0之间的整数
#include <iostream>
using namespace std;

int main() {
    for( int i = 10 ; i >= 0 ; --i )
        cout << i << endl;
    return 0;
}

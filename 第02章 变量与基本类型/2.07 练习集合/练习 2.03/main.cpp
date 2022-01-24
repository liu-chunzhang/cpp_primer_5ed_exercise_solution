// 本程序用于验证读者在练习2.3中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    unsigned u = 10, u2 = 42 ;
    cout << u2 - u << endl;
    cout << u - u2 << endl;

    int i = 10 , i2 = 42 ;
    cout << i2 - i << endl;
    cout << i - i2 << endl;
    cout << i - u << endl;
    cout << u - i << endl;
    return 0;
}

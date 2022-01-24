// 本程序用于验证读者在练习1.11中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    cout << "本程序将输出一系列用户实现给定的两个整数内的一切整数，并打印出来，请输入：" << endl;
    int i1 , i2 ;
    cin >> i1  >> i2 ;
    int v1 = max( i1 , i2 ) , v2 = min( i1 , i2 );
    while( v1 >= v2 )
        cout << v1-- << endl;
    return 0;
}

// 本程序用于验证读者在练习1.11中的想法，并在必要的地方予以说明：本程序的目的是提示用户输入两个整数，打印这两个整数所指定范围内的所有整数
#include <iostream>
using namespace std;

int main(){
    cout << "本程序将输出一系列用户实现给定的两个整数内的一切整数，并打印出来，请输入两个整数：" << endl;
    int i1 = 0 , i2 = 0 ;
    cin >> i1 >> i2 ;
    for ( int v1 = max( i1 , i2 ) , v2 = min( i1 , i2 ) ; v1 >= v2 ; --v1 )
        cout << v1 << " " ;
    cout << endl;
    return 0;
}

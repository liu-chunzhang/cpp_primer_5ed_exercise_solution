// 本程序用于验证读者在练习3.4中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    string s1 , s2 ;
    cin >> s1 >> s2 ;
    if( s1 != s2 )
        cout << ( ( s1 > s2 ) ? s1 : s2 ) << endl;
    else
        cout << "这两个字符串相等！" << endl;
    return 0;
}

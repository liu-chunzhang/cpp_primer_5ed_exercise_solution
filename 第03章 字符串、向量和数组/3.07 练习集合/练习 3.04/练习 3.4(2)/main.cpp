// 本程序用于验证读者在练习3.4中的想法，并在必要的地方予以说明：比较输入的两个字符串是否等长，若不等长，给出长度较大的字符串。
#include <iostream>
using namespace std;

int main() {
    string s1 , s2 ;
    cin >> s1 >> s2 ;
    if( s1.size() != s2.size() )
        cout << ( ( s1.size() > s2.size() ) ? s1 : s2 ) << endl;
    else
        cout << "这两个字符串等长。" << endl;
    return 0 ;
}

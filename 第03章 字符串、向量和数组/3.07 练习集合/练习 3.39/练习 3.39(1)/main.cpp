// 本程序用于验证读者在练习3.39中的想法，并在必要的地方予以说明：比较两个string对象
#include <iostream>
using namespace std;

int main() {
    string str1 , str2 ;
    cout << "请输入两个字符串，用空格相隔开：" << endl;
    cin >> str1 >> str2 ;
    if( str1 > str2 )
        cout << str1 << ">" << str2 << endl;
    else if( str1 < str2 )
        cout << str1 << "<" << str2 << endl;
    else
        cout << str1 << "=" << str2 << endl;
    return 0;
}

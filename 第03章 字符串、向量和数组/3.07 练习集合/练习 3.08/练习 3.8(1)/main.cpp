// 本程序用于验证读者在练习3.8中的想法，并在必要的地方予以说明：用while循环重写练习3.6
#include <iostream>
using namespace std;

int main() {
    string s ;
    string::size_type num = 0 ;
    cout << "请输入一个字符串，允许包含空格：" << endl;
    getline( cin , s ) ;                                          // 用getline便于读取空格，遇到回车符结束
    while( num != s.size() )                                     // 依次处理字符串中的每一个字符
        s[num++] = 'X' ;
    cout << s << endl;
    return 0;
}

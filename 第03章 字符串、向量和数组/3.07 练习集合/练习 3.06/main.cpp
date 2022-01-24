// 本程序用于验证读者在练习3.6中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "请输入一个字符串，允许包含空格：" << endl;
    getline( cin , s ) ;                                       // 用getline便于读取空格，遇到回车符结束
    for( char &c : s )                                         // 依次处理字符串中的每一个字符
        c = 'X' ;
    cout << s << endl;
    return 0;
}

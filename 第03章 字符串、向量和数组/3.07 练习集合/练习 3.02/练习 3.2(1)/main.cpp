// 本程序用于验证读者在练习3.2中的想法，并在必要的地方予以说明：该程序实现一次读入一整行
#include <iostream>
using namespace std ;

int main() {
    string s ;
    cout << "请输入您的字符串，可以包含空格：" << endl;
    getline( cin , s ) ;
    cout << s << endl;
    return 0;
}

// 本程序用于验证读者在练习3.2中的想法，并在必要的地方予以说明：该程序实现一次读入一个词
#include <iostream>
using namespace std;

int main() {
    string word ;
    cout << "请输入您的单词，但不可以包括空格：" << endl;
    cin >> word ;
    cout << word << endl;
    return 0;
}

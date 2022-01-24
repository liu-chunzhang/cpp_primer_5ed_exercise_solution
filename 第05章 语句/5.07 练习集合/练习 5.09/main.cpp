// 本程序用于验证读者在练习5.9中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    unsigned vowelCnt = 0 ;
    char ch;
    cout << "请输入一段英文文本：" << endl;
    while( cin >> ch )
        if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
            ++vowelCnt ;
    cout << "您输入的英文文本中有" << vowelCnt << "个元音字母。" << endl;
    return 0;
}

// 本程序用于验证读者在练习5.19中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    do{
        string str1 , str2 ;
        cout << "请输入两个用于比较大小的字符串：" << endl;
        cin >> str1 >> str2 ;
        if( str1.size() > str2.size() )
            cout << str2 << "是较短的字符串。" << endl;
        else
            if( str1.size() < str2.size() )
                cout << str1 << "是较短的字符串。" << endl;
            else
                cout << "两个字符串等长。" << endl;
    }while( cin ) ;
    return 0;
}

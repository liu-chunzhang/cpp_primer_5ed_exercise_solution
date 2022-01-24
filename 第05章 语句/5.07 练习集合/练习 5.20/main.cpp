// 本程序用于验证读者在练习5.20中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    string transtr ;
    cout << "请输入一组字符串，按回车保证键入，按Ctrl+C表示终止：" << endl;
    if( cin >> transtr ){
        string currstr ;
        while( cin >> currstr )
            if( transtr == currstr ){
                cout << "出现重复的单词为：" << transtr ;        // 就实现题干所需的功能，break语句不是一个好选择，return直接结束问题才是。
                return 0 ;                                       // 使用break的版本可以见练习 5.21，稍加改动就是。
            }
            else
                transtr = currstr ;
        cout << "没有连续出现两次的单词。" << endl;
        return 0;
    }
    else{
        cerr << "未检测到字符串输入！" << endl;
        return -1 ;
    }
}

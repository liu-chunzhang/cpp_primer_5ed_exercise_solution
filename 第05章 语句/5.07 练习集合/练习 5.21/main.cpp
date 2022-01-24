// 本程序用于验证读者在练习5.21中的想法，并在必要的地方予以说明：改写练习5.20，使之找到的重复单词必须以大写字母开头
#include <iostream>
using namespace std;

int main() {
    string transtr ;
    cout << "请输入一组字符串，按回车保证键入，按Ctrl+C表示终止：" << endl;
    if( cin >> transtr ){
        string currstr ;
        while( cin >> currstr ){
            if( !isupper( currstr[0] ) )
                continue ;
            if( transtr == currstr )
                break ;
            transtr = currstr ;
        }
        if( transtr == currstr )
            cout << "最早连续出现的字符串是：" << transtr << endl;
        else
            cout << "没有连续出现两次的单词。" << endl;
        return 0;
    }
    else{
        cerr << "未检测到字符串输入！" << endl;
        return -1 ;
    }
}

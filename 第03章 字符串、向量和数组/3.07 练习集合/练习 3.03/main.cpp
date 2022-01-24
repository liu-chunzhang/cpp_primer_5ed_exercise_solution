// 本程序用于验证读者在练习3.3中的想法，并在必要的地方予以说明：为本节txt文件中的说明提供一个实例
#include <iostream>
using namespace std;

int main() {
    string word , line ;
    cout << "请选择读取字符串的方式：1.表示逐词读取，2表示整行读取" << endl;
    char ch;
    cin >> ch ;
    if ( ch == '1' ){
        cout << "请输入字符串：     Hello world！" << endl;
        cin >> word ;
        cout << "系统读取的有效字符串是：" << word << endl;                         // 如果选择流向这个分支，则字符串开头的空格和第一个单词
        return 0 ;                                                                  // 以后的内容全会被忽略掉
    }
    cin.clear();                                                                    // 用来更改cin的状态标示符
    cin.sync();                                                                     // 用来清除缓存区的数据流
    if ( ch == '2' ){                                                               // 如果标示符没有改变那么即使清除了数据流也无法输入，所以两个要联合起来使用!
        cout << "请输入字符串：     Hello world! " << endl;
        getline( cin , line ) ;
        cout << "系统读取的有效字符串是：" << line << endl;                         // 如果选择流向这个分支，则字符串开头、中间和结尾都会被
        return 0 ;                                                                  // 保留。
    }
    cout << "您的输入有误！" << endl;
    return -1 ;
}

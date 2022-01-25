// 本程序用于验证读者在练习17.16中的想法，并在必要的地方予以说明
#include <iostream>
#include <regex>
using namespace std;

int main() {
    string str( "[^c]ei" ) , word ;                                         // 相较于练习17.15，删去了第二句，即不再要求前后匹配了
    regex r( str ) ;                                                        // 测试用的词组提供在此：receipt freind theif receive
    smatch results ;
    cout << "请您输入一个待检查的单词，选择按Ctrl+C键停止:" << endl;        // 若pattern只是"[^c]ei"，则只是与"?ei"形式的字符串匹配，
    while( cin >> word ){                                                   // 其中？是除了c之外的字符，因此输出的只是拼写错误的部分，
        if( regex_search( word , results , r ) )                            // 而不是包含错误拼写的完整单词。
            cout << "输入单词不符合语法: " << results.str() << endl;        // 比如，freind输出rei
        else
            cout << "输入单词符合语法" << endl;
        cout << "请您输入一个待检查的单词，选择按Ctrl+C键停止:" << endl;
    }
    return 0;
}

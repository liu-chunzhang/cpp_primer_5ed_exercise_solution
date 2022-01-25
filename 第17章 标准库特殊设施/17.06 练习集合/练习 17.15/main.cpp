// 本程序用于验证读者在练习17.15中的想法，并在必要的地方予以说明
#include <iostream>
#include <regex>
using namespace std;

int main() {
    string str( "[^c]ei" ) , word ;
    str = "[[:alpha:]]*" + str + "[[:alpha:]]*" ;
    regex r( str ) ;
    smatch results ;
    cout << "请您输入一个待检查的单词，选择按Ctrl+C键停止:" << endl;
    while( cin >> word ){
        if( regex_search( word , results , r ) )
            cout << "输入单词不符合语法: " << results.str() << endl;
        else
            cout << "输入单词符合语法" << endl;
        cout << "请您输入一个待检查的单词，选择按Ctrl+C键停止:" << endl;
    }
    return 0;
}

// 测试用的词组提供在此：receipt freind theif receive

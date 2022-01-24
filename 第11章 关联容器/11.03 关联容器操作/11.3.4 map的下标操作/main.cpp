// 本程序用于验证教材中11.3.4节内容的可靠性，并提供感性认知
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string,size_t> word_count ;
    word_count["Anna"] = 1 ;                 // 插入一个关键字为Anna的元素，关联值进行值初始化；然后将1赋给它
    cout << word_count["Anna"] << endl;     // 用Anna作为下标提取元素：会打印出1
    ++word_count["Anna"] ;                   // 提取元素并增加1
    cout << word_count["Anna"] << endl;     // 提取元素并打印它：会打印出2
    return 0;
}

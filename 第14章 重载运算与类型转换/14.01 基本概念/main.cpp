// 本程序用于验证教材中14.1节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    string s = "world!" ;
    string t = s + "!" ;          // 正确：我们能把一个const char*加到一个string对象中
    string u = "hi" + s ;         // 如果+是string成员，则产生错误
    cout << u << " " << t << endl;
    return 0;
}

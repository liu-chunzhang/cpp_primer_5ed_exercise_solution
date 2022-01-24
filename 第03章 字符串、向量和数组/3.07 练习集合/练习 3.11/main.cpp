// 本程序用于验证读者在练习3.11中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    const string s = "Keep out!";
    for( auto &c : s )
        c = 'x' ;                              // 从语法上来讲合法，但是不能够正确编译。因为常量引用不能够用于改变引用常量的值。
    cout << s << endl;                        // 但若是只进行只读操作，是合法的。
    return 0;
}

// 本程序用于验证读者在练习2.8中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    cout << "2\115\12" ;                // 转义序列\115表示M，\012表示换行
    cout << "2\tM\n" << endl;          // \t是横向制表符，\n表示换行符
    return 0;
}

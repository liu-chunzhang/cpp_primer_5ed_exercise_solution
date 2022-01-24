// 本程序用于验证读者在练习2.7中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    cout << "Who goes with F\145rgus?\012" << endl;    // \145表示字符e，\012表示一个换行符
    cout << 1024.f << endl;                            // 原因在txt文件中解释了
    //cout << 1024f << endl;
    return 0;
}

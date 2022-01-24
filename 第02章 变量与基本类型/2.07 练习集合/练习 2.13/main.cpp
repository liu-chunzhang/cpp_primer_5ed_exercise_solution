// 本程序用于验证读者在练习2.13中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int i = 42;

int main() {
    int i = 100 ;           // C++允许内层作用域重新定义外层定义域中的已有名字。在本题中，int i = 42; 位于外层作用域，但是变
    int j = i ;             // 量i在内层作用域被重新定义了，因此真正赋予j的值是定义在内层作用域中i的值，即100。
    cout << j << endl;
    return 0;
}

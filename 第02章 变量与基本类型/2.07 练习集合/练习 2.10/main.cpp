// 本程序用于验证读者在练习2.10中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

string global_str ;
int global_int ;

int main() {
    string local_str ;
    int local_int ;
    cout << global_int << endl;      // 对于string类型的变量，因为string类型本身接受无参数的初始化方案，所以不论变量定义在函数内还是函数外，
    cout << local_int << endl;       // 都被默认初始化为空串；对于内置类型int来说，变量global_int定义在所有函数体之外，默认初始化为0；而变量
    cout << global_str << endl;      // local_int定义在main函数的内部，将不被初始化（虽然没报错，但是给出了警告），如果程序施图拷贝或输出未
    cout << local_str << endl;       // 被初始化的变量，将遇到一个未定义的奇异值。
    return 0;
}

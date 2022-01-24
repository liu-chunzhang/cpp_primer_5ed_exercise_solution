// 本程序用于验证读者在练习3.1中的想法，并在必要的地方予以说明：重做1.4.1节的练习1.10
// 本程序的目的是使用递减运算符按照递减顺序打印出10到0间的整数
#include <iostream>
using std::cout;
using std::endl;

int main() {
    int i = 10;
    while( i >= 0 )
        cout << i-- << endl;
    return 0;
}

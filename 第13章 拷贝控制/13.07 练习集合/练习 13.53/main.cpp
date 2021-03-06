// 本程序用于验证读者在练习13.52中的想法，并在必要的地方予以说明
#include "HasPtr.h"

int main() {
    HasPtr hp1( "hello" , 3 ) , hp2( "world" , 4 ) ;
    cout << "1" << endl;
    hp1 = std::move( hp2 ) ;
    cout << "2" << endl;
    return 0;
}

// 在进行拷贝复制时，先通过拷贝创造构建了hp2的拷贝h，然后再交换hp和h，h作为一个中间媒介，只是起到将值从hp2传递给hp1的作用，是一个冗余操作；
// 类似的，在移动赋值时，先从hp2转移到h，再交换到hp1，也是冗余的。
// 也就是练习13.52中的移动赋值运算符唯一的好处是统一了拷贝和移动赋值运算，但在性能上多了一次无谓的拷贝过程，并不占优。

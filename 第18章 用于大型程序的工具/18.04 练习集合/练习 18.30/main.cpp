// 本程序用于验证读者在练习18.30中的想法，并在必要的地方予以说明：相应类的定义见头文件和源文件，定义为cbp是便于测试
#include <iostream>
#include "garbage.h"

int main() {
    Final b1( -3 ) , b2 ;
    std::cout << b1.getival() << " " << b1.getiival() << std::endl;     // 从测试结果来看，虚基类只会被初始化一次，不会被后续派生类的初始化覆盖
    b2 = b1 ;
    std::cout << b1.getival() << " " << b1.getiival() << std::endl;
    return 0;
}

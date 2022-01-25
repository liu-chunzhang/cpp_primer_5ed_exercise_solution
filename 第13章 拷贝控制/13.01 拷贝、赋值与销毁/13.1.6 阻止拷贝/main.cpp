// 本程序用于验证教材中13.1.6节内容的可靠性，并提供感性认知
#include "NoCopy.h"

int main() {

    NoDtor nd ;                     // 错误：NoDtor的析构函数是删除的
    NoDtor *p = new NoDtor() ;      // 正确：但是我们不能删除p
    delete p ;                     // 错误：NoDtor的析构函数是删除的

    return 0;
}

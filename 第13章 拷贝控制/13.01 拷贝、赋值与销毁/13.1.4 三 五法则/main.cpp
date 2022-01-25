// 本程序用于验证教材中13.1.4节内容的可靠性，并提供感性认知
#include "HasPtr.h"

HasPtr f( HasPtr ) ;

int main() {
    HasPtr p( "some values" ) ;
    f( p ) ;                       // 当f结束时，p.ps指向了无效内存！
    HasPtr q( p ) ;                // 现在p和q都指向无效内存！
    return 0;
}

HasPtr f( HasPtr hp ){    // HasPtr是传值参数，所以将被拷贝
    HasPtr ret = hp ;     // 拷贝给定的HasPtr
    return ret ;         // ret和hp都将被销毁，但是这意味着同一块内存被销毁两次！这是未定义的危险行为。
}

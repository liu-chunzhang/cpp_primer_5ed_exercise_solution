// 本程序用于验证教材中15.2.2节内容的可靠性，并提供感性认知
#include "Bulk_quote.h"
#include "Derived.h"

class Derived ;

int main() {
    Quote item ;            // 基类对象
    Bulk_quote bulk ;       // 派生类对象
    Quote *p = &item ;      // p指向Quote对象
    p = &bulk ;             // p指向bulk的Quote部分
    Quote &r = bulk ;       // r绑定到bulk的Quote部分

    Derived d ;
    d.f( d ) ;
    return 0;
}

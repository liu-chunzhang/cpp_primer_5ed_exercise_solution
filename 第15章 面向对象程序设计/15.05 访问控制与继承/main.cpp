// 本程序用于验证教材中15.5节内容的可靠性，并提供感性认知
#include "Sneaky.h"
#include "Derived.h"
#include "Base3.h"
#include "Base4.h"

int main() {
    Pub_Derv d1 ;       // 继承自Base2的成员是public的
    Priv_Derv d2 ;      // 继承自Base2的成员是private的
    d1.pub_men() ;      // 正确：pub_mem在派生类中是public的
  //d2.pub_mem() ;      // 错误：pub_mem在派生类中是private的
    return 0;
}

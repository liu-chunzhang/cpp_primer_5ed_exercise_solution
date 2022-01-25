// 本程序用于验证教材中19.6节内容的可靠性，并提供感性认知
#include "Token.h"

int main() {
  //Token first_token = { 'a' } ;       // 初始化cval成员
  //Token last_token ;                  // 未初始化的Token对象
  //Token *pt = new Token ;             // 指向一个未初始化的Token对象的指针

  //last_token.cval = 'z' ;
  //pt->ival = 42 ;

    union {                     // 匿名union
        char cval ;
        int ival ;
        double dval ;
    };                          // 定义一个未命名的对象，可以直接访问其成员
    cval = 'c' ;                // 为刚刚定义的未命名的匿名union对象赋一个新值
    ival = 42 ;                 // 该对象当前保存的值是42

  //delete pt ;
    return 0;
}

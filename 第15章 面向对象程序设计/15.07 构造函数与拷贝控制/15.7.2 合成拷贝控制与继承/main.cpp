// 本程序用于验证教材中15.7.2节内容的可靠性，并提供感性认知
#include "B.h"

int main() {
    D d;
  //D d2( d ) ;                     // 错误：D的合成拷贝函数是被删除的
  //D d3( std::move ( d ) ) ;       // 错误：隐式地使用D的被删除的拷贝构造函数（P552 虚析构函数将阻止合成移动操作）
    return 0;
}

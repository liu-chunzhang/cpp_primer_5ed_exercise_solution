// 本程序用于验证教材中18.1.4节内容的可靠性，并提供感性认知
#include <iostream>
#include <memory>
#include "Base.h"

void f() noexcept ;
void recoup( int ) noexcept ;
void alloc( int ) ;

int main(){
  //f() ;

    void ( *pf1 )( int ) noexcept = recoup ;      // recoup和pf1都承诺不会抛出异常
    void ( *pf2 )( int ) = recoup ;               // 正确：recoup不会抛出异常，但是pf2可以，二者之间互不干扰
    pf1 = alloc ;                                  // 错误：alloc可能会抛出异常，但是pf1已经说明了它不会抛出异常，但编译器未给出任何提示
    pf2 = alloc ;                                  // 正确：pf2和alloc均可以抛出异常

    return 0;
}

void f() noexcept {          // 尽管该函数明显违反了异常说明，但它仍然可以顺利编译通过；noexcept承诺不会抛出异常
    throw exception() ;      // 违反了异常说明
}                             // 编译器警告，总会抛出函数terminate结束程序，这一性质可用来强停程序和处理不知道处理方法的异常

void recoup( int i ) noexcept {
    ++i ;
}

void alloc( int i ) {
    i += 2 ;
}

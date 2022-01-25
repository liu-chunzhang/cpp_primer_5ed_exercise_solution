// 本程序用于验证教材中19.4.2节内容的可靠性，并提供感性认知
#include "Screen.h"

using Action = char ( Screen::* )( Screen::pos , Screen::pos ) const ;      // 应用成员指针的命名别名
Action get = &Screen::get ;
Screen &action( Screen &screen , Action action = &Screen::get ) ;

int main() {
    Screen::pos ( Screen::*pmf )() const = Screen::get_cursor ;              // 此处auto代表的比较复杂
    char ( Screen::*pmf2 )( Screen::pos , Screen::pos ) const ;
    pmf2 = Screen::get ;                   // 必须显式地使用取地址运算符
    pmf2 = &Screen::get ;

    Screen myScreen , *pScreen = &myScreen ;
    char c1 = ( pScreen->*pmf )() ;
    char c2 = ( myScreen.*pmf2 )( 0 , 0 ) ;

    Screen myScreen2 ;
    action( myScreen2 ) ;                   // 使用默认实参
    action( myScreen2 , get ) ;             // 使用我们之前定义的变量get
    action( myScreen2 , &Screen::get ) ;    // 显式地传入地址

    Screen myScreen3 ;
    myScreen3.move( Screen::HOME ) ;        // 调用myScreen.home
    myScreen3.move( Screen::DOWN ) ;        // 调用myScreen.down
    return 0 ;
}

Screen &action( Screen &screen , Action action ) {                              // 随便定义的，用来消除函数未定义
    return screen ;
}

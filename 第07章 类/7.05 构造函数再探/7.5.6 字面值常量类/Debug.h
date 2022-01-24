#ifndef DEBUG_H
#define DEBUG_H

#include <iostream>
using namespace std;

class Debug{
    public:
        constexpr Debug( bool b = true ) : hw( b ) , io( b ) , other( b ) { }
        constexpr Debug( bool h , bool i , bool o ) : hw( h ) , io( i ) , other( o ) { }
        constexpr bool any() const { return hw || io || other ; }                          // 此处教材上的代码有误，应该加上const，否则main
        void set_io( bool b ) { io = b ; }                                                   // 函数中的代码是无法正常运行的，原因在于：调用的
        void set_hw( bool b ) { hw = b ; }                                                   // 隐式变量this是一个非常量指针，不能够调指向常量
        void set_other( bool b ) { other = b ;}                                              // Debug对象，而main函数中的对象是constexpr的，已
                                                                                              // 成为了常量，所以暂存和调用必须使用常量指针，必
    private:                                                                                 // 须加入const使之称为指向常量的的指针。否则输入
        bool hw ;       // 硬件错误，而非IO错误                                              // 教材P268最后一段代码，程序将报错。
        bool io ;       // IO错误
        bool other ;    // 其他错误
};

#endif // DEBUG_H

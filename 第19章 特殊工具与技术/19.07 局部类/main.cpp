// 本程序用于验证教材中19.7节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int a , val ;
void foo( int val ) {
    static int si ;
    enum Loc { a = 1024 , b } ;
    struct Bar {
        Loc locVal ;                // 正确：使用一个局部类型名
        int barVal ;

        void fooBar( Loc = a ){     // 正确：默认实参为Loc::a
            barVal = val ;          // 错误：val是foo的局部变量！
            barVal = ::val ;        // 正确：使用一个全局对象
            barVal = si ;           // 正确：使用一个静态局部对象
            locVal = b ;            // 正确：使用一个枚举成员
        }
    };
    // ...
}

int main() {
    foo( 3 ) ;
    return 0;
}

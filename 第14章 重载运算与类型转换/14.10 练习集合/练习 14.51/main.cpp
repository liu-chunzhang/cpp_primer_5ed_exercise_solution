// 本程序用于验证读者在练习14.51中的想法，并在必要的地方予以说明
#include "LongDouble.h"

void calc( int i ) ;
void calc( LongDouble ld ) ;

int main() {
    double dval = 3 ;
    calc( dval ) ;
    return 0;
}

void calc( int i ) {
    cout << "Using function void calc( int i )" << endl;
}

void clac( LongDouble ld ) {
    cout << "Using function void calc( LongDouble ld )" << endl;
}

// 这里会优先调用函数void calc( int i )。根据教程P219的最佳匹配规则，double转换为int是算术类型转换（第4条），而转换成LongDouble则是转换为用户
// 自定义类型（第5条），实际上是调用了转换的构造函数，因此前者优先。

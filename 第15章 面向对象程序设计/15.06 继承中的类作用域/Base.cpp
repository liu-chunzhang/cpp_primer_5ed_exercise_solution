#include "Base.h"

Base::Base() : mem( 0 ) { }

Derived::Derived( int i ) : mem( i ) { }        // 用i初始化Derived::mem，Base::mem进行默认初始化

int Derived::get_mem() {
    return mem ;
}

int Derived::get_base_mem() {
    return Base::mem ;                          // 用作用域运算符来使用一个被隐藏的基类成员
}

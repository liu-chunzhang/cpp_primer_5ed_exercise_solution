#include "Base3.h"

int Base3::fcn() {
    return 0 ;
}

int D31::fcn( int i ){
    return i ;
}

void D31::f2() { }          // 虚函数并不是纯虚函数，如果派生类中相应部分实化，还是需要函数体的

int D32::fcn() {
    return Base3::fcn() ;   // 避免自身的无限递归调用！
}

int D32::fcn( int i ){
    return i ;
}

void D32::f2( ) { }

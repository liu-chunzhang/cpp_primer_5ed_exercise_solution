#ifndef BASE3_H
#define BASE3_H

#include <iostream>
using namespace std;

class Base3{
    public:
        virtual int fcn() ;
};

class D31 : public Base3 {
    public:
        int fcn( int i ) ;       // 隐藏基类的fcn，这个fcn并不是虚函数（形参列表与Base中的不一致），还继承了Base::fcn()的定义，拥有了两个名为fcn的函数
        virtual void f2() ;     // 一个新的虚函数，在Base中不存在
};

class D32 : public D31 {
    public:
        int fcn( int i ) ;      // 一个非虚函数，隐藏了D1::fcn( int )
        int fcn() ;             // 覆盖了Base的虚函数
        void f2() ;             // 覆盖了D1的虚函数f2
};
#endif // BASE3_H

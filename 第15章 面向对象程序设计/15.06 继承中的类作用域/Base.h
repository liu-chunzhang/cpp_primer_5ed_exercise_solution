#ifndef BASE_H
#define BASE_H

#include <iostream>
using namespace std;

struct Base{
    public:
        Base();

    protected:
        int mem ;
};

struct Derived : public Base{              // 虽根据P546“默认的继承保护级别”一节知struct定义的派生类是公有继承，但为了表意清晰规范加上
    public:
        Derived( int i ) ;
        int get_mem() ;                     // 返回了Derived::mem
        int get_base_mem() ;

    protected:
        int mem ;                           // 隐藏了基类中的mem
};

#endif // BASE_H

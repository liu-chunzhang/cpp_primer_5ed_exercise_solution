#ifndef C_H
#define C_H

#include <iostream>
using namespace std;

template <typename T> class Pal ;

class C {
    friend class Pal<C> ;                           // 用类C实例化的Pal是C的一个友元：需要前置声明
    template <typename T> friend class Pal2 ;     // Pal2的所有实例都是C的友元：无须前置声明
};

template <typename T> class C2 {                   // C2本身是一个一个类模板
    friend class Pal<T> ;                           // C2的每个实例将相同实例化的Pal声明为友元；Pal的模板声明必须在作用域之内
    template <typename X> friend class Pal2 ;     // Pal2的所有实例都是C2的每个实例的友元，不需要前置声明
    friend class Pal3 ;                             // Pal3是一个非模板类，不需要前置声明
};

#endif // C_H

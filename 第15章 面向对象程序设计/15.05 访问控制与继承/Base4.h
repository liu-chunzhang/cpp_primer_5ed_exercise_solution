#ifndef BASE4_H
#define BASE4_H

#include <iostream>
using namespace std;

class Base4{
    public:
        size_t size() const ;

    protected:
        size_t n ;
};

class Derived : private Base4 {      // private继承
    public:
        using Base4::size ;          // 保持对象尺寸相关的成员的访问级别

    protected:
        using Base4::n ;
};

#endif // BASE4_H

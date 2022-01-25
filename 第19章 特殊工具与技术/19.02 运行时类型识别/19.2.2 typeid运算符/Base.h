#ifndef BASE_H
#define BASE_H

#include <iostream>

class Base {
    public:
        Base() = default ;
        virtual ~Base() = default ;
};

class Derived : public Base {
    public:
        Derived() = default ;
        virtual ~Derived() = default ;
};

#endif // BASE_H

#ifndef BASE_H
#define BASE_H


class Base {
    public:
        Base( int i ) ;
        virtual ~Base() = default ;

    protected:
        int bval ;
};

class Derived : public Base {
    public:
        using Base::Base ;
        virtual ~Derived() = default ;

    public:
        int getval() const ;
};

class Derived2 : public Derived {
    public:
        using Derived::Derived ;
        virtual ~Derived2() = default ;
};

class A {
    public:
        A() = default ;
        virtual ~A() = default ;
};

class B : public A {
    public:
        B() = default ;
        virtual ~B() = default ;
};

class C : public B {
    public:
        C() = default ;
        virtual ~C() = default ;
};
class D : public B , public A {
    public:
        D() = default ;
        virtual ~D() = default ;
};

#endif // BASE_H

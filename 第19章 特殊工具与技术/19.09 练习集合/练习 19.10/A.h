#ifndef A_H
#define A_H

class A {
    public:
        A() = default ;
        virtual ~A() {}
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

#endif // A_H

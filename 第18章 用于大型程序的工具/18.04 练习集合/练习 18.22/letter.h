#ifndef LETTER_H
#define LETTER_H

#include <iostream>

class A {
    public:
        A() ;

    private:
        int Ai = 0 ;
};

class B : public A {
    public:
        B() ;

    private:
        int Bi = 0 ;
};

class C : public B {
    public:
        C() ;

    private:
        int Ci = 0 ;
};

class X {
    public:
        X() ;

    private:
        int Xi = 0 ;
};

class Y {
    public:
        Y() ;

    private:
        int Yi = 0 ;
};

class Z : public X , public Y {
    public:
        Z() ;

    private:
        int Zi = 0 ;
};

class MI : public C , public Z {
    public:
        MI() ;

    private:
        int Mi = 0 ;
};

#endif // LETTER_H

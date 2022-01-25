#ifndef A_H
#define A_H

#include <iostream>
using namespace std;

class B ;

class A {
    public:
        A() = default ;
        A( int i ) ;
        A( const B &b ) ;

    public:
        int getAval() const ;

    private:
        int Aval = 3 ;
};

class B {
    public:
        operator A() const ;

    public:
        int getBval() const ;

    private:
        int Bval = 16 ;
};

#endif // A_H

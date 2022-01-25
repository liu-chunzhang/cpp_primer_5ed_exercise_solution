#ifndef A2_H
#define A2_H

#include <iostream>
using namespace std;

class A2 {
    public:
        A2( int i = 0 ) ;
        A2( double d ) ;

    public:
        operator int() const ;
        operator double() const ;

    private:
        double A2val ;
};

#endif // A2_H

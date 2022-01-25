#ifndef LONGDOUBLE_H
#define LONGDOUBLE_H

#include <iostream>
using namespace std;

class LongDouble {
    public:
        LongDouble( double d = 0.0 );
        operator double() ;
        operator float() ;

    private:
        long double ld ;
};

#endif // LONGDOUBLE_H

#ifndef DOUBLECOMPARE_H
#define DOUBLECOMPARE_H

#include <iostream>
using namespace std;

class doublecompare{
    public:
        doublecompare() = delete ;
        doublecompare( double d ) ;
        ~doublecompare() = default ;

    public:
        bool operator () ( double d ) { return val == d ; }

    private:
        double val ;
};

#endif // DOUBLECOMPARE_H

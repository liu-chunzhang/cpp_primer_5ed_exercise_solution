#ifndef ITE_H
#define ITE_H

#include <iostream>
using namespace::std ;

class ITE{
    public:
        double operator() ( bool d1 , double d2 , double d3 ) const ;
};

#endif // ITE_H

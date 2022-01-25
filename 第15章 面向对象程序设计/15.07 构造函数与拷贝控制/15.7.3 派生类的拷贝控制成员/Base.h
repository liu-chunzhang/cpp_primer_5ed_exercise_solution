#ifndef BASE_H
#define BASE_H

#include <iostream>
using namespace std;

class Base{
    public:
        Base &operator = ( const Base &b ) ;
};

class D : public Base{
    D( const D &d ) ;
    D( D &&d ) ;
    D &operator = ( const D &d ) ;
};

#endif // BASE_H

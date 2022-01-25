#ifndef X_H
#define X_H

#include <iostream>
using namespace std;

struct X{
    X() ;
    X( const X &x ) ;
    X &operator = ( const X &rhs ) ;
    ~X() ;
};

#endif // X_H

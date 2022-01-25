#include "A.h"

A::A( int i ) : Aval( i ) { }

A::A( const B &b ) : Aval( b.getBval() ) { }

int A::getAval() const {
    return Aval ;
}

B::operator A() const {
    return A( getBval() - 2 ) ;
}

int B::getBval() const {
    return Bval ;
}

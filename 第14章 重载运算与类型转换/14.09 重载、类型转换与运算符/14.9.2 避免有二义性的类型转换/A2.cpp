#include "A2.h"

A2::A2( int i ) : A2val( i + 3.1415 ) { }

A2::A2( double d ) : A2val( d ) { }

A2::operator int() const {
    return A2val ;
}

A2::operator double() const {
    return A2val ;
}

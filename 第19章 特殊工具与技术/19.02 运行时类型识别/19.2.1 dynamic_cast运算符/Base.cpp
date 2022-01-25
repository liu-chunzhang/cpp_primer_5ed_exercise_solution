#include "Base.h"

Base::Base( int i ) : bval( i ) { }

int Derived::getval() const {
    return bval ;
}

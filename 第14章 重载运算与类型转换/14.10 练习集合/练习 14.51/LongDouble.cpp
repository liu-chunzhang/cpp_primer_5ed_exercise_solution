#include "LongDouble.h"

LongDouble::LongDouble( double d ) : ld( d ) { }

LongDouble::operator double() {
    cout << "Using function operator double()" << endl;
    return ld ;
}

LongDouble::operator float() {
    cout << "Using function operator float()" << endl;
    return ld ;
}

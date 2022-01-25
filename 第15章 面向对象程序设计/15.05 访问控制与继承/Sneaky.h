#ifndef SNEAKY_H
#define SNEAKY_H

#include "Base.h"

class Sneaky : public Base {
    friend void clobber( Sneaky &s ) ;
    friend void clobber( Base &b ) ;

    private:
        int j ;
};

#endif // SNEAKY_H

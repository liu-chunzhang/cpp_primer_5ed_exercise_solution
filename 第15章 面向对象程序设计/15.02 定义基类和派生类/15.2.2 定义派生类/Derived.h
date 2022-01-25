#ifndef DERIVED_H
#define DERIVED_H

#include "Base.h"

class Derived : public Base {
    public:
        void f( const Derived &derived_obj ) ;

    protected:

    private:
};

#endif // DERIVED_H

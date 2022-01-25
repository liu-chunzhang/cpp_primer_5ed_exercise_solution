#ifndef DERIVED_H
#define DERIVED_H

#include "Pub_Derv.h"

struct Derived_from_Public : public Pub_Derv {
    int use_base() ;
};

struct Derived_from_Private : public Priv_Derv {
    int use_base() ;
};

#endif // DERIVED_H

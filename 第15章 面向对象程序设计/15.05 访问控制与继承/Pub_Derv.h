#ifndef PUB_DERV_H
#define PUB_DERV_H

#include "Base2.h"

struct Pub_Derv : public Base2{
    int f() ;
    char g() ;
};

struct Priv_Derv : private Base2{
    int f1() const ;
};

#endif // PUB_DERV_H

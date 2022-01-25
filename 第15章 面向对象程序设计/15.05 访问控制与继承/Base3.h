#ifndef BASE3_H
#define BASE3_H

#include <iostream>
#include "Sneaky.h"
using namespace std;

class Pal ;

class Base3{
    friend class Pal ;     // Pal在访问Base的派生类时无特殊性

    public:
        void pub_men() ;    // public成员

    protected:
        int prot_mem ;      // protected成员

    private:
        char priv_mem ;     // private成员
};

class Sneaky3 : public Base3 {
    friend void clobber( Sneaky &s ) ;
    friend void clobber( Base &b ) ;

    private:
        int j ;
};

class Pal{
    public:
        int f( Base3 ) ;
        int f2( Sneaky3 ) ;
        int f3( Sneaky3 ) ;
};

class D2 : public Pal {
    public:
        int mem( Base3 ) ;
};

#endif // BASE3_H

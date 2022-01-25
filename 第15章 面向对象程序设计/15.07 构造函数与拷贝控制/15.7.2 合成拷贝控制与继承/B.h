#ifndef B_H
#define B_H

#include <iostream>
using namespace std;

struct B{
    public:
        B() = default ;
        B( const B &b ) = delete ;
        virtual ~B() = default ;
};

class D : public B {

};

#endif // B_H

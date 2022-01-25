#ifndef BASE2_H
#define BASE2_H

#include <iostream>
using namespace std;

struct Base2{
    int memfcn() ;
};

struct Derived2 : public Base2 {
    int memfcn( int i ) ;
};

#endif // BASE2_H

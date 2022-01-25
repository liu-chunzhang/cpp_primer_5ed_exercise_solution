#ifndef BASE2_H
#define BASE2_H

#include <iostream>
using namespace std;

class Base2{
    public:
        void pub_men() ;    // public成员

    protected:
        int prot_mem = 3 ;      // protected成员

    private:
        char priv_mem = 'c' ;     // private成员
};

#endif // BASE2_H

#ifndef BASE2_H
#define BASE2_H

#include <iostream>
using namespace std;

class Base2{
    public:
        void pub_men() ;    // public��Ա

    protected:
        int prot_mem = 3 ;      // protected��Ա

    private:
        char priv_mem = 'c' ;     // private��Ա
};

#endif // BASE2_H

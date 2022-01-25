#ifndef PRINTSTRING2_H
#define PRINTSTRING2_H

#include <iostream>
using namespace std;

class PrintString2{
    public:
        PrintString2() = delete ;
        PrintString2( istream &in = cin ) ;
        string operator () () ;

    private:
        istream &in ;
};

#endif // PRINTSTRING2_H

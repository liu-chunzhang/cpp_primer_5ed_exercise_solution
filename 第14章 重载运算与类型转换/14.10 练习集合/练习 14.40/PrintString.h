#ifndef PRINTSTRING_H
#define PRINTSTRING_H

#include <iostream>
using namespace std;

struct PrintString{
    void operator() ( const string &s ) { cout << s << " " ; }
};

#endif // PRINTSTRING_H

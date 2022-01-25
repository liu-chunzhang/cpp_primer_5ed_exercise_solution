#ifndef SHORTERSTRING_H
#define SHORTERSTRING_H

#include <iostream>
using namespace std;

class ShorterString{
    public:
        bool operator () ( const string &s1 , const string &s2 ) const ;
};

#endif // SHORTERSTRING_H

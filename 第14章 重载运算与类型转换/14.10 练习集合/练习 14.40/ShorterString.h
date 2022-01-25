#ifndef SHORTERSTRING_H
#define SHORTERSTRING_H

#include <iostream>
using namespace std;

class ShorterString {
    public:
        bool operator () ( const string &a , const string &b ) const { return a.size() < b.size() ; }
};

#endif // SHORTERSTRING_H

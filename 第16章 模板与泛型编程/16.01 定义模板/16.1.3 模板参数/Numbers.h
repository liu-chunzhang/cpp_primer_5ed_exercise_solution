#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>
using namespace std;

template <typename T = int>
class Numbers {
    public:
        Numbers( T v = 0 ) : val( v ) { }
        virtual ~Numbers() {}

    private:
        T val ;
};

#endif // NUMBERS_H

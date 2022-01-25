#ifndef SMALLINT_H
#define SMALLINT_H

#include <iostream>
using namespace std;

class SmallInt {
    public:
        SmallInt( int i = 0 ) ;
        operator int() const ;

    private:
        size_t val ;
};

#endif // SMALLINT_H

#ifndef SMALLINT2_H
#define SMALLINT2_H

#include <iostream>
using namespace std;

class SmallInt2 {
    public:
        SmallInt2( int i = 0 ) ;
        explicit operator int() const ;

    private:
        size_t val ;
};

#endif // SMALLINT2_H

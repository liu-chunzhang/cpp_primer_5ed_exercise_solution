#ifndef SMALLINT_H
#define SMALLINT_H

#include <iostream>
using namespace std;

class SmallInt {
    friend SmallInt operator + ( const SmallInt &lhs , const SmallInt &rhs ) ;

    public:
        SmallInt( int i = 0 ) ;     // ת��ԴΪint������ת��
        operator int() const ;     // ת��Ŀ��Ϊint������ת��

    private:
        size_t val ;
};

#endif // SMALLINT_H

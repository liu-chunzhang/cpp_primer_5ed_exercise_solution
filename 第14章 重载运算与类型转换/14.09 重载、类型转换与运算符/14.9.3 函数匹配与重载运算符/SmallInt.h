#ifndef SMALLINT_H
#define SMALLINT_H

#include <iostream>
using namespace std;

class SmallInt {
    friend SmallInt operator + ( const SmallInt &lhs , const SmallInt &rhs ) ;

    public:
        SmallInt( int i = 0 ) ;     // 转换源为int的类型转换
        operator int() const ;     // 转换目标为int的类型转换

    private:
        size_t val ;
};

#endif // SMALLINT_H

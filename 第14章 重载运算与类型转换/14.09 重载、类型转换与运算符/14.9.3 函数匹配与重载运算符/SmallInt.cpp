#include "SmallInt.h"

SmallInt operator + ( const SmallInt &lhs , const SmallInt &rhs ) {
    SmallInt temp ;
    temp.val = lhs.val + rhs.val ;
    return temp ;
}

SmallInt::SmallInt( int i ) : val( i ) { }

SmallInt::operator int() const {
    return val ;
}

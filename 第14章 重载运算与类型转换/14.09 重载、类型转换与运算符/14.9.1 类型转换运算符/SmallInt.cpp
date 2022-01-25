#include "SmallInt.h"

SmallInt::SmallInt( int i ) : val( i ) {
    if( i < 0 || i > 255 )
        throw out_of_range( "Bad SmallInt value" ) ;
}

SmallInt::operator int() const {
    return val ;
}

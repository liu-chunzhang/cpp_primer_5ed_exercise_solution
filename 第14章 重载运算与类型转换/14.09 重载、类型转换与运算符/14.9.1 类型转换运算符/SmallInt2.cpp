#include "SmallInt2.h"

SmallInt2::SmallInt2( int i ) : val( i ) {
    if( i < 0 || i > 255 )
        throw out_of_range( "Bad SmallInt2 value" ) ;
}

SmallInt2::operator int() const {
    return val ;
}

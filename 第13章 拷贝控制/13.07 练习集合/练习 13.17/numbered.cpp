#include "numbered.h"

int numbered::seq = 0 ;

numbered::numbered() {
    mysn = seq++ ;
}

#ifndef NDEBUG
numbered &numbered::operator = ( const numbered &n ) {
    mysn = seq++ ;
    return *this ;
}
#endif //NDEBUG

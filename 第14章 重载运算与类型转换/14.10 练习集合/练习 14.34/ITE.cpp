#include "ITE.h"

double ITE::operator() ( bool d1 , double d2 , double d3 ) const {
    return d1 ? d2 : d3 ;
}

#include "SizeCompare.h"

SizeCompare::SizeCompare( size_t n ) : sz( n ) { }

bool SizeCompare::operator () ( const string &s ) const {
    return s.size() <= sz ;
}

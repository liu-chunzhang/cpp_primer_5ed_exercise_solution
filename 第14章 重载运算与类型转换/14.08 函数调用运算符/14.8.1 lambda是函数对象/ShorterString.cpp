#include "ShorterString.h"

bool ShorterString::operator () ( const string &s1 , const string &s2 ) const {
    return s1.size() < s2.size() ;
}

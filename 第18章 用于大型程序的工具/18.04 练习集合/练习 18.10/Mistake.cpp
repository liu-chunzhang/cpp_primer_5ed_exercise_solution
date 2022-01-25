#include "Mistake.h"

out_of_stock::out_of_stock( const string &s ) : runtime_error( s ) { }

isbn_mismatch::isbn_mismatch( const string &s , const string &lhs , const string &rhs ) : logic_error( s ) , left( lhs ) , right( rhs ) { }

const string isbn_mismatch::getleft() const {
    return left ;
}

const string isbn_mismatch::getright() const {
    return right ;
}

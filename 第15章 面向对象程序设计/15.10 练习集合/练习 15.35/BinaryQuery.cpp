#include "BinaryQuery.h"

BinaryQuery::BinaryQuery( const Query &l , const Query &r , string s ) : lhs( l ) , rhs( r ) , opSym( s ) { }

string BinaryQuery::rep() const {
    return "(" + lhs.rep() + " " + opSym + " " + rhs.rep() + ")" ;
}

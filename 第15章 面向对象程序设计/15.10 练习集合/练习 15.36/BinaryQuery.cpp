#include "BinaryQuery.h"

BinaryQuery::BinaryQuery( const Query &l , const Query &r , string s ) : lhs( l ) , rhs( r ) , opSym( s ) {
    cout << "BinaryQuery::BinaryQuery( const Query& , const Query& , string )" << endl;
}

string BinaryQuery::rep() const {
    cout << "BinaryQuery.rep() " << opSym << endl;
    return "(" + lhs.rep() + " " + opSym + " " + rhs.rep() + ")" ;
}

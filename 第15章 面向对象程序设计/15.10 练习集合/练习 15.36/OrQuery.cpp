#include "OrQuery.h"

Query operator | ( const Query &l , const Query &r ) {
    return shared_ptr<Query_base>( new OrQuery( l , r ) ) ;
}

OrQuery::OrQuery( const Query &l , const Query &r ) : BinaryQuery( l , r , "|" ) {
    cout << "OrQuery::OrQuery( const Query& , const Query& )" << endl;
}

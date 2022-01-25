#include "AndQuery.h"

Query operator & ( const Query& l , const Query& r ) {
    return shared_ptr<Query_base>( new AndQuery( l , r ) ) ;
}

AndQuery::AndQuery( const Query& l , const Query& r ) : BinaryQuery( l , r , "&" ) {
    cout << "AndQuery::AndQuery( const Query& , const Query& )" << endl;
}

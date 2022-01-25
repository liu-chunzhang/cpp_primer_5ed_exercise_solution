#include "NotQuery.h"

Query operator ~ ( const Query &q ) {
    return shared_ptr<Query_base>( new NotQuery( q ) ) ;
}

NotQuery::NotQuery( const Query &q ) : query( q ) { }

string NotQuery::rep() const {
    return "~(" + query.rep() + ")" ;
}

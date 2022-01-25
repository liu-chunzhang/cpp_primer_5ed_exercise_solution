#include "NotQuery.h"

Query operator ~ ( const Query &q ) {
    return shared_ptr<Query_base>( new NotQuery( q ) ) ;
}

NotQuery::NotQuery( const Query &q ) : query( q ) {
    cout << "NotQuery::NotQuery( const Query &q )" << endl;
}

string NotQuery::rep() const {
    cout << "NotQuery.rep()" << endl;
    return "~(" + query.rep() + ")" ;
}

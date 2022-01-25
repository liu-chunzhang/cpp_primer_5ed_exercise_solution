#include "NotQuery.h"

Query operator ~ ( const Query &q ) {
    return new NotQuery( q ) ;
}

NotQuery::NotQuery( const Query &q ) : query( q ) { }

string NotQuery::rep() const {
    return "~(" + query.rep() + ")" ;
}

QueryResult NotQuery::eval( const TextQuery &tq ) const {
    QueryResult temqr = query.eval( tq ) ;
    shared_ptr<set<lineNo>> temp = make_shared<set<lineNo>>() ;
    set<lineNo>::const_iterator start = temqr.cbegin() , termi = temqr.cend() ;
    size_t temsize = temqr.get_file()->size() ;
    for( size_t i = 0 ; i != temsize ; ++i )
        if( start == termi || *start != i )
            temp->insert( i ) ;
        else if( start != termi )
                ++start ;
    return QueryResult( rep() , temqr.get_file() , temp ) ;
}

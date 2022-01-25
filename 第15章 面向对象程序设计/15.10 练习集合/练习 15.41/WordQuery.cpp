#include "WordQuery.h"

WordQuery::WordQuery( const string &s ) : query_word( s ) { }

string WordQuery::rep() const {
    return query_word ;
}

QueryResult WordQuery::eval( const TextQuery &tq ) const {
    return tq.queryresult( query_word ) ;
}

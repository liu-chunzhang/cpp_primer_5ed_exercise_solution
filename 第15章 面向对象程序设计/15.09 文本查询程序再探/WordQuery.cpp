#include "WordQuery.h"

WordQuery::WordQuery( const string &s ) : query_word( s ) { }

QueryResult WordQuery::eval( const TextQuery &t ) const {
    return t.query( query_word ) ;
}

string WordQuery::rep() const {
    return query_word ;
}

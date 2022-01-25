#include "WordQuery.h"

WordQuery::WordQuery( const string &s ) : query_word( s ) { }

string WordQuery::rep() const {
    return query_word ;
}


#include "WordQuery.h"

WordQuery::WordQuery( const string& s ) : query_word( s ) {
    cout << "WordQuery::WordQuery( const string& )" << endl;
}

QueryResult WordQuery::eval( const TextQuery& t ) const {
    cout << "WordQuery::eval( const TextQuery& )" << endl;
    return t.query( query_word ) ;
}

string WordQuery::rep() const {
    cout << "WordQuery::rep()" << endl;
    return query_word ;
}

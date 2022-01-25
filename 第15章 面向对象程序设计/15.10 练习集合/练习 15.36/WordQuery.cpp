#include "WordQuery.h"

WordQuery::WordQuery( const string &s ) : query_word( s ) {
    cout << "WordQuery::WordQuery( const string &s )" << endl;
}

string WordQuery::rep() const {
    cout << "WordQuery::rep()" << endl;
    return query_word ;
}


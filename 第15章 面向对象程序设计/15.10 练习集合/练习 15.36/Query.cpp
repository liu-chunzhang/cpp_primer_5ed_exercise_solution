#include "Query.h"

// ÓÑÔªº¯Êý
ostream &operator << ( ostream &out , const Query &q ) {
    return out << q.rep() ;
}

Query::Query( const string &s ) : q( new WordQuery( s ) ) {
    cout << "Query::Query( const string& ) " << s << endl;
}

string Query::rep() const {
    cout << "Query.rep() "  << endl;
    return q->rep() ;
}

Query::~Query() { }

Query::Query( shared_ptr<Query_base> query ) : q( query ) {
    cout << "Query::Query( shared_ptr<Query_base> )" << endl;
}

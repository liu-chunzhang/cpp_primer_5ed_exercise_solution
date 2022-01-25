#include "Query.h"

Query::Query( const string& s ) : q( new WordQuery( s ) ) {
    cout << "Query::Query( const string& ) " << s << endl;
}

ostream& operator << ( ostream& out , const Query& q ) {
    return out << q.rep() ;
}

QueryResult Query::eval( const TextQuery& t ) const {
    cout << "Query::eval()" << endl;
    return q->eval( t ) ;
}

string Query::rep() const {
    cout << "Query.rep() "  << endl;
    return q->rep() ;
}

Query::~Query() { }

Query::Query( shared_ptr<Query_base> query ) : q( query ) {
    cout << "Query::Query( shared_ptr<Query_base> )" << endl;
}

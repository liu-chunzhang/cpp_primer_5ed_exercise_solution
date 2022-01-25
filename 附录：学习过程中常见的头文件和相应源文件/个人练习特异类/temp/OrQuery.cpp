#include "OrQuery.h"

Query operator | ( const Query& l , const Query& r ) {
    return shared_ptr<Query_base>( new OrQuery( l , r ) ) ;
}

OrQuery::OrQuery( const Query& l , const Query& r ) : BinaryQuery( l , r , "|" ) {
    cout << "OrQuery::OrQuery( const Query& , const Query& )" << endl;
}

QueryResult OrQuery::eval( const TextQuery& t ) const {
    cout << "OrQuery::eval( const TextQuery& )" << endl;
    QueryResult left = lhs.eval( t ) , right = rhs.eval( t ) ;
    shared_ptr<set<line_no>> ret_lines = make_shared<set<line_no>>( left.begin() , left.end() ) ;
    ret_lines->insert( right.begin() , right.end() ) ;
    return QueryResult( rep() , ret_lines , left.get_file() ) ;
}

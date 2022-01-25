#include "OrQuery.h"

// 友元函数
Query operator | ( const Query &l , const Query &r ) {
    return shared_ptr<Query_base>( new OrQuery( l , r ) ) ;
}

// 私有构造函数
OrQuery::OrQuery( const Query &l , const Query &r ) : BinaryQuery( l , r , "|" ) { }

// 私有功能性函数
QueryResult OrQuery::eval( const TextQuery &tq ) const {
    QueryResult temqr1 = lhs.eval( tq ) , temqr2 = rhs.eval( tq ) ;
    shared_ptr<set<lineNo>> temp = make_shared<set<lineNo>>( temqr1.cbegin() , temqr1.cend() ) ;
    temp->insert( temqr2.cbegin() , temqr2.cend() ) ;
    return QueryResult( rep() , temqr1.get_file() , temp ) ;
}

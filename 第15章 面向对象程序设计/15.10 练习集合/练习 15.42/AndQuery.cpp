#include "AndQuery.h"

// ��Ԫ����
Query operator & ( const Query& l , const Query& r ) {
    return shared_ptr<Query_base>( new AndQuery( l , r ) ) ;
}

// ˽�й��캯��
AndQuery::AndQuery( const Query& l , const Query& r ) : BinaryQuery( l , r , "&" ) { }

// ˽�й����Ժ���
QueryResult AndQuery::eval( const TextQuery &tq ) const {
    QueryResult temqr1 = lhs.eval( tq ) , temqr2 = rhs.eval( tq ) ;
    shared_ptr<set<lineNo>> temp = make_shared<set<lineNo>>() ;
    set_intersection( temqr1.cbegin() , temqr1.cend() , temqr2.cbegin() , temqr2.cend() , inserter( *temp , temp->begin() ) ) ;
    return QueryResult( rep() , temqr1.get_file() , temp ) ;
}

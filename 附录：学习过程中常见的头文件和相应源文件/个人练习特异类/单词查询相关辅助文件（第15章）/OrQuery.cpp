#include "OrQuery.h"

// ��Ԫ����
Query operator | ( const Query &l , const Query &r ) {
    return shared_ptr<Query_base>( new OrQuery( l , r ) ) ;
}

// ˽�й��캯��
OrQuery::OrQuery( const Query &l , const Query &r ) : BinaryQuery( l , r , "|" ) { }

// ˽�й����Ժ���
QueryResult OrQuery::eval( const TextQuery &tq ) const {
    QueryResult temqr1 = lhs.eval( tq ) , temqr2 = rhs.eval( tq ) ;
    shared_ptr<set<lineNo>> temp = make_shared<set<lineNo>>( temqr1.cbegin() , temqr1.cend() ) ;
    temp->insert( temqr2.cbegin() , temqr2.cend() ) ;
    return QueryResult( rep() , temqr1.get_file() , temp ) ;
}

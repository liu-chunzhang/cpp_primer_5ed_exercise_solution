#include "AndQuery.h"

namespace chapter15 {
// ��Ԫ����
    Query operator & ( const Query& l , const Query& r ) {
        return std::shared_ptr<Query_base>( new AndQuery( l , r ) ) ;
    }

// ˽�й��캯��
    AndQuery::AndQuery( const Query& l , const Query& r ) : BinaryQuery( l , r , "&" ) { }

// ˽�й����Ժ���
    chapter10::QueryResult AndQuery::eval( const chapter10::TextQuery &tq ) const {
        chapter10::QueryResult temqr1 = lhs.eval( tq ) , temqr2 = rhs.eval( tq ) ;
        std::shared_ptr<std::set<lineNo>> temp = std::make_shared<std::set<lineNo>>() ;
        set_intersection( temqr1.cbegin() , temqr1.cend() , temqr2.cbegin() , temqr2.cend() , inserter( *temp , temp->begin() ) ) ;
        return chapter10::QueryResult( rep() , temqr1.get_file() , temp ) ;
    }
}

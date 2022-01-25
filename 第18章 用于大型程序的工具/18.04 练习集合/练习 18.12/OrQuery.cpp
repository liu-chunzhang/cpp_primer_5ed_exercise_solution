#include "OrQuery.h"

namespace chapter15 {
// 友元函数
    Query operator | ( const Query &l , const Query &r ) {
        return std::shared_ptr<Query_base>( new OrQuery( l , r ) ) ;
    }

// 私有构造函数
    OrQuery::OrQuery( const Query &l , const Query &r ) : BinaryQuery( l , r , "|" ) { }

// 私有功能性函数
    chapter10::QueryResult OrQuery::eval( const chapter10::TextQuery &tq ) const {
        chapter10::QueryResult temqr1 = lhs.eval( tq ) , temqr2 = rhs.eval( tq ) ;
        std::shared_ptr<std::set<lineNo>> temp = std::make_shared<std::set<lineNo>>( temqr1.cbegin() , temqr1.cend() ) ;
        temp->insert( temqr2.cbegin() , temqr2.cend() ) ;
        return chapter10::QueryResult( rep() , temqr1.get_file() , temp ) ;
    }
}

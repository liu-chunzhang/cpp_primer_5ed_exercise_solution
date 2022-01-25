#include "Query.h"

namespace chapter15 {
// 友元函数
    std::ostream &operator << ( std::ostream &out , const Query &q ) {
        return out << q.rep() ;
    }

// 共有构造函数
    Query::Query( const std::string &s ) : q( new WordQuery( s ) ) { }

// 共有功能性函数
    std::string Query::rep() const {
        return q->rep() ;
    }

    chapter10::QueryResult Query::eval( const chapter10::TextQuery &tq ) const {
        return q->eval( tq ) ;
    }

// 私有构造函数
    Query::Query( std::shared_ptr<Query_base> query ) : q( query ) { }
}

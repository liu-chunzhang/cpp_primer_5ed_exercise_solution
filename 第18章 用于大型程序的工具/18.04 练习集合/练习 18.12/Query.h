#ifndef QUERY_H
#define QUERY_H

#include "WordQuery.h"

namespace chapter15 {
    class Query_base ;

    class Query {                                                                // 这是一个管理Query_base的继承体系的接口类
        friend Query operator ~ ( const Query &q ) ;
        friend Query operator | ( const Query &lhs , const Query &rhs ) ;
        friend Query operator & ( const Query &lhs , const Query &rhs ) ;
        friend std::ostream &operator << ( std::ostream &out , const Query &q ) ;

        public:
            Query( const std::string &s ) ;                                         // 构建一个新WordQuery
            virtual ~Query() = default ;

        public:
            std::string rep() const ;
            chapter10::QueryResult eval( const chapter10::TextQuery &tq ) const ;

        private:
            std::shared_ptr<Query_base> q ;

        private:
            Query( std::shared_ptr<Query_base> query ) ;
    };
}

#endif // QUERY_H

#ifndef QUERY_H
#define QUERY_H

#include "WordQuery.h"

namespace chapter15 {
    class Query_base ;

    class Query {                                                                // ����һ������Query_base�ļ̳���ϵ�Ľӿ���
        friend Query operator ~ ( const Query &q ) ;
        friend Query operator | ( const Query &lhs , const Query &rhs ) ;
        friend Query operator & ( const Query &lhs , const Query &rhs ) ;
        friend std::ostream &operator << ( std::ostream &out , const Query &q ) ;

        public:
            Query( const std::string &s ) ;                                         // ����һ����WordQuery
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

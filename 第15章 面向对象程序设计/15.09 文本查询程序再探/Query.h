#ifndef QUERY_H
#define QUERY_H

#include "WordQuery.h"

class Query {                                                                // ����һ������Query_base�ļ̳���ϵ�Ľӿ���
    friend Query operator ~ ( const Query &rhs ) ;
    friend Query operator | ( const Query &lhs , const Query &rhs ) ;
    friend Query operator & ( const Query &lhs , const Query &rhs ) ;
    friend ostream &operator << ( ostream &out , const Query &q ) ;

    public:
        Query( const string &s );                                             // ����һ����WordQuery
        virtual ~Query() = default ;

    public:
        QueryResult eval( const TextQuery &tq ) const ;
        string rep() const ;

    private:
        Query( shared_ptr<Query_base> ) ;
        shared_ptr<Query_base> q ;
};

#endif // QUERY_H

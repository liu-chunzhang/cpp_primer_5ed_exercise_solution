#ifndef QUERY_H
#define QUERY_H

#include "WordQuery.h"
using namespace std;

class Query_base ;

class Query {                                                                // 这是一个管理Query_base的继承体系的接口类
    friend Query operator ~ ( const Query &q ) ;
    friend Query operator | ( const Query &lhs , const Query &rhs ) ;
    friend Query operator & ( const Query &lhs , const Query &rhs ) ;
    friend ostream &operator << ( ostream &out , const Query &q ) ;

    public:
        Query( const string &s ) ;                                         // 构建一个新WordQuery
        Query( const Query &query ) ;
        Query &operator = ( const Query &query ) ;
        virtual ~Query() ;

    public:
        string rep() const ;
        QueryResult eval( const TextQuery &tq ) const ;

    private:
        Query_base *q ;
        size_t *useCount ;                                                  // 智能指针共享计数，所以需要定义为指针

    private:
        Query( Query_base *query ) ;
};

#endif // QUERY_H

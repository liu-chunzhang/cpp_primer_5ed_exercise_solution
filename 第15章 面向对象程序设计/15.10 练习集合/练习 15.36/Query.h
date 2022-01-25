#ifndef QUERY_H
#define QUERY_H

#include "WordQuery.h"
using namespace std;

class Query_base ;

class Query{                                                                // 这是一个管理Query_base的继承体系的接口类
    friend Query operator ~ ( const Query &q ) ;
    friend Query operator | ( const Query &lhs , const Query &rhs ) ;
    friend Query operator & ( const Query &lhs , const Query &rhs ) ;
    friend ostream &operator << ( ostream &out , const Query &q ) ;

    public:
        Query( const string &s ) ;                                         // 构建一个新WordQuery
        virtual ~Query();

    public:
        string rep() const ;

    private:
        shared_ptr<Query_base> q ;

    private:
        Query( shared_ptr<Query_base> ) ;
};

#endif // QUERY_H

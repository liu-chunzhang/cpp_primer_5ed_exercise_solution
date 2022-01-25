#ifndef QUERY_H
#define QUERY_H

#include "WordQuery.h"
using namespace std;

class Query_base ;

class Query {                                                                // ����һ������Query_base�ļ̳���ϵ�Ľӿ���
    friend Query operator ~ ( const Query &q ) ;
    friend Query operator | ( const Query &lhs , const Query &rhs ) ;
    friend Query operator & ( const Query &lhs , const Query &rhs ) ;
    friend ostream &operator << ( ostream &out , const Query &q ) ;

    public:
        Query( const string &s ) ;                                         // ����һ����WordQuery
        Query( const Query &query ) ;
        Query &operator = ( const Query &query ) ;
        virtual ~Query() ;

    public:
        string rep() const ;
        QueryResult eval( const TextQuery &tq ) const ;

    private:
        Query_base *q ;
        size_t *useCount ;                                                  // ����ָ�빲�������������Ҫ����Ϊָ��

    private:
        Query( Query_base *query ) ;
};

#endif // QUERY_H

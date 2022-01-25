#ifndef QUERY_H
#define QUERY_H

#include "WordQuery.h"
using namespace std;

class Query_base ;

class Query{                                                                // ����һ������Query_base�ļ̳���ϵ�Ľӿ���
    friend Query operator ~ ( const Query &q ) ;
    friend Query operator | ( const Query &lhs , const Query &rhs ) ;
    friend Query operator & ( const Query &lhs , const Query &rhs ) ;
    friend ostream &operator << ( ostream &out , const Query &q ) ;

    public:
        Query( const string &s ) ;                                         // ����һ����WordQuery
        virtual ~Query();

    public:
        string rep() const ;

    private:
        shared_ptr<Query_base> q ;

    private:
        Query( shared_ptr<Query_base> ) ;
};

#endif // QUERY_H

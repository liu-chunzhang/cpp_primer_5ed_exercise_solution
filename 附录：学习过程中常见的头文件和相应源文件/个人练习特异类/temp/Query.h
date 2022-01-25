#ifndef QUERY_H
#define QUERY_H

#include <iostream>
#include "TextQuery.h"
#include "Query_base.h"
#include "WordQuery.h"
using namespace std;

class Query_base ;

class Query{                                                                // 这是一个管理Query_base的继承体系的接口类
    friend Query operator ~ ( const Query& ) ;
    friend Query operator | ( const Query& , const Query& ) ;
    friend Query operator & ( const Query& , const Query& ) ;
    friend ostream& operator << ( ostream& , const Query& ) ;

    public:
        Query( const string& );                                             // 构建一个新WordQuery
        QueryResult eval( const TextQuery& ) const ;
        string rep() const ;
        virtual ~Query();

    protected:

    private:
        Query( shared_ptr<Query_base> ) ;
        shared_ptr<Query_base> q ;
};

#endif // QUERY_H

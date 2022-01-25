#include "Query.h"

// 友元函数
ostream &operator << ( ostream &out , const Query &q ) {
    return out << q.rep() ;
}

// 共有构造函数
Query::Query( const string &s ) : q( new WordQuery( s ) ) { }

// 共有功能性函数
string Query::rep() const {
    return q->rep() ;
}

QueryResult Query::eval( const TextQuery &tq ) const {
    return q->eval( tq ) ;
}

// 私有构造函数
Query::Query( shared_ptr<Query_base> query ) : q( query ) { }

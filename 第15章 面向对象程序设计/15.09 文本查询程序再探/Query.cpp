#include "Query.h"

// 友元函数（其他友元函数的定义并不放在这里，而是选择分别放在AndQuery、NotQuery和OrQuery类的友元函数）
ostream &operator << ( ostream &out , const Query &q ) {
    return out << q.rep() ;
}

// 共有构造函数与析构函数
Query::Query( const string &s ) : q( new WordQuery( s ) ) { }

QueryResult Query::eval( const TextQuery &tq ) const {
    return q->eval( tq ) ;
}

string Query::rep() const {
    return q->rep() ;
}

Query::Query( shared_ptr<Query_base> query ) : q( query ) { }

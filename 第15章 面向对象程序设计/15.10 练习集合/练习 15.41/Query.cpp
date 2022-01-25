#include "Query.h"

// 友元函数
ostream &operator << ( ostream &out , const Query &q ) {
    return out << q.rep() ;
}

// 公有构造函数
Query::Query( const string &s ) : q( new WordQuery( s ) ) , useCount( new size_t( 1 ) ) { }

Query::Query( const Query &query ) : q( query.q ) , useCount( query.useCount ) {
    ++*useCount ;
}

Query &Query::operator = ( const Query &query ) {
    ++*query.useCount ;
    if( --*useCount == 0 ){
        delete q ;
        delete useCount ;
    }
    q = query.q ;
    useCount = query.useCount ;
    return *this ;
}

Query::~Query() {
    if( --useCount == 0 ){
        delete q ;
        delete useCount ;
    }
}

// 公有功能性函数
string Query::rep() const {
    return q->rep() ;
}

QueryResult Query::eval( const TextQuery &tq ) const {
    return q->eval( tq ) ;
}

// 私有构造函数
Query::Query( Query_base *query ) : q( query ) , useCount( new size_t( 1 ) ) { }

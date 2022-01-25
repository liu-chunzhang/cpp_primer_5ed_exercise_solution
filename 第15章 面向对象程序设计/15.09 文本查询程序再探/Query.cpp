#include "Query.h"

// ��Ԫ������������Ԫ�����Ķ��岢�������������ѡ��ֱ����AndQuery��NotQuery��OrQuery�����Ԫ������
ostream &operator << ( ostream &out , const Query &q ) {
    return out << q.rep() ;
}

// ���й��캯������������
Query::Query( const string &s ) : q( new WordQuery( s ) ) { }

QueryResult Query::eval( const TextQuery &tq ) const {
    return q->eval( tq ) ;
}

string Query::rep() const {
    return q->rep() ;
}

Query::Query( shared_ptr<Query_base> query ) : q( query ) { }

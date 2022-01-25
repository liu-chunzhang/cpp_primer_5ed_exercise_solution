#include "AndQuery.h"

Query operator & ( const Query& l , const Query& r ) {
    return shared_ptr<Query_base>( new AndQuery( l , r ) ) ;
}

AndQuery::AndQuery( const Query& l , const Query& r ) : BinaryQuery( l , r , "&" ) {
    cout << "AndQuery::AndQuery( const Query& , const Query& )" << endl;
}

QueryResult AndQuery::eval( const TextQuery& t ) const {                       // ͨ��Query���������е�����ã��Ի���������Ĳ�ѯ���set
    cout << "AndQuery::eval( const TextQuery& )" << endl;
    QueryResult left = lhs.eval( t ) , right = rhs.eval( t ) ;                  // ����left��right�Ľ���set
    shared_ptr<set<line_no>> ret_lines = make_shared<set<line_no>>() ;       // ��������Χ�Ľ�������һ��Ŀ�ĵ������У����ε��õ�Ŀ�ĵ�����
    set_intersection( left.begin() , left.end() , right.begin() ,            // �����Ԫ��
                right.end() , inserter( *ret_lines , ret_lines->begin() ) ) ;
    return QueryResult( rep() , ret_lines , left.get_file() ) ;
}

#include "AndQuery.h"

Query operator & ( const Query& l , const Query& r ) {
    return shared_ptr<Query_base>( new AndQuery( l , r ) ) ;
}

AndQuery::AndQuery( const Query& l , const Query& r ) : BinaryQuery( l , r , "&" ) {
    cout << "AndQuery::AndQuery( const Query& , const Query& )" << endl;
}

QueryResult AndQuery::eval( const TextQuery& t ) const {                       // 通过Query运算对象进行的虚调用，以获得运算对象的查询结果set
    cout << "AndQuery::eval( const TextQuery& )" << endl;
    QueryResult left = lhs.eval( t ) , right = rhs.eval( t ) ;                  // 保存left和right的交基set
    shared_ptr<set<line_no>> ret_lines = make_shared<set<line_no>>() ;       // 将两个范围的交基计入一个目的迭代器中，本次调用的目的迭代器
    set_intersection( left.begin() , left.end() , right.begin() ,            // 中添加元素
                right.end() , inserter( *ret_lines , ret_lines->begin() ) ) ;
    return QueryResult( rep() , ret_lines , left.get_file() ) ;
}

#include "NotQuery.h"

// 友元函数
Query operator ~ ( const Query &q ) {
    return shared_ptr<Query_base>( new NotQuery( q ) ) ;
}

// 私有构造函数
NotQuery::NotQuery( const Query &q ) : query( q ) { }

// 私有功能性函数
string NotQuery::rep() const {
    return "~(" + query.rep() + ")" ;
}

QueryResult NotQuery::eval( const TextQuery &t ) const {                    // 返回运算对象的结果set中不存在的行
    QueryResult result = query.eval( t ) ;                                   // 通过Query运算对象对eval进行虚调用
    shared_ptr<set<line_no>> ret_lines = make_shared<set<line_no>>() ;    // 开始时set为空
    set<line_no>::iterator beg = result.begin() , ter = result.end() ;     // 必须在运算对象出现的所有行中进行迭代
    size_t sz = result.get_file()->size() ;                                 // 对于输入文件的每一行，若该行不在result中，则将其添加到ret_lines中
    for( size_t n = 0 ; n != sz ; ++n )                                     // 如果我们没有处理完result的所有行
        if( beg == ter || *beg != n )                                        // 检查当前行是否存在
            ret_lines->insert( n ) ;                                         // 若不在result中，则添加这一行
        else if( beg != ter )
            ++beg ;                                                          // 否则继续获取result的下一行（如果有的话）
    return QueryResult( rep() , ret_lines , result.get_file() ) ;
}
